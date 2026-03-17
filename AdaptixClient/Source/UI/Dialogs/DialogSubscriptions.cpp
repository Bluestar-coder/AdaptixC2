#include <UI/Dialogs/DialogSubscriptions.h>
#include <UI/Widgets/AdaptixWidget.h>
#include <QPointer>
#include <Client/AuthProfile.h>
#include <Client/HttpRequestManager.h>
#include <Client/Storage.h>
#include <MainAdaptix.h>
#include <Utils/NonBlockingDialogs.h>
#include <QCoreApplication>

namespace {

constexpr int kSectionHeaderRole = Qt::UserRole;
constexpr int kSubscriptionKeyRole = Qt::UserRole + 1;

QListWidgetItem* makeSectionHeaderItem(const QString& title)
{
    auto* item = new QListWidgetItem(title);
    QFont f = item->font();
    f.setBold(true);
    item->setFont(f);
    item->setFlags(Qt::ItemIsEnabled);
    item->setData(kSectionHeaderRole, true);
    return item;
}

bool isSectionHeaderItem(const QListWidgetItem* item)
{
    return item && item->data(kSectionHeaderRole).toBool();
}

QString subscriptionDisplayName(DialogSubscriptions* dialog, const QString& key)
{
    if (key == "chat_history")
        return QCoreApplication::translate("DialogSubscriptions", "Chat history");
    if (key == "downloads_history")
        return QCoreApplication::translate("DialogSubscriptions", "Downloads history");
    if (key == "screenshot_history")
        return QCoreApplication::translate("DialogSubscriptions", "Screenshots history");
    if (key == "credentials_history")
        return QCoreApplication::translate("DialogSubscriptions", "Credentials history");
    if (key == "targets_history")
        return QCoreApplication::translate("DialogSubscriptions", "Targets history");
    if (key == "console_history")
        return QCoreApplication::translate("DialogSubscriptions", "Console history");
    if (key == "tasks_history")
        return QCoreApplication::translate("DialogSubscriptions", "Tasks history");
    if (key == "chat_realtime")
        return QCoreApplication::translate("DialogSubscriptions", "Chat");
    if (key == "downloads_realtime")
        return QCoreApplication::translate("DialogSubscriptions", "Downloads");
    if (key == "screenshot_realtime")
        return QCoreApplication::translate("DialogSubscriptions", "Screenshots");
    if (key == "credentials_realtime")
        return QCoreApplication::translate("DialogSubscriptions", "Credentials");
    if (key == "targets_realtime")
        return QCoreApplication::translate("DialogSubscriptions", "Targets");
    if (key == "notifications")
        return QCoreApplication::translate("DialogSubscriptions", "Notifications");
    if (key == "tunnels")
        return QCoreApplication::translate("DialogSubscriptions", "Tunnels");
    if (key == "tasks_manager")
        return QCoreApplication::translate("DialogSubscriptions", "Tasks manager");

    return key;
}

QListWidgetItem* makeSubscriptionItem(DialogSubscriptions* dialog, const QString& key)
{
    auto* item = new QListWidgetItem(subscriptionDisplayName(dialog, key));
    item->setData(kSubscriptionKeyRole, key);
    item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
    item->setCheckState(Qt::Unchecked);
    return item;
}

QString subscriptionKey(const QListWidgetItem* item)
{
    return item ? item->data(kSubscriptionKeyRole).toString() : QString();
}

}

void DialogSubscriptions::createUI()
{
    setWindowTitle(tr("Subscription Settings"));
    setProperty("Main", "base");
    setFixedSize(500, 500);

    auto mainLayout = new QGridLayout(this);
    mainLayout->setContentsMargins(10, 10, 10, 10);
    mainLayout->setSpacing(10);

    auto historyLabel = new QLabel(tr("History:"), this);
    QFont boldFont = historyLabel->font();
    boldFont.setBold(true);
    historyLabel->setFont(boldFont);

    auto realtimeLabel = new QLabel(tr("Real-time:"), this);
    realtimeLabel->setFont(boldFont);

    historyListWidget = new QListWidget(this);
    historyListWidget->setSelectionMode(QAbstractItemView::NoSelection);

    realtimeListWidget = new QListWidget(this);
    realtimeListWidget->setSelectionMode(QAbstractItemView::NoSelection);

    historyListWidget->addItem(makeSectionHeaderItem(tr("Data")));
    for (const QString &cat : {"chat_history", "downloads_history", "screenshot_history", "credentials_history", "targets_history"}) {
        historyListWidget->addItem(makeSubscriptionItem(this, cat));
    }
    historyListWidget->addItem(makeSectionHeaderItem(tr("Agent")));
    for (const QString &cat : {"console_history", "tasks_history"}) {
        historyListWidget->addItem(makeSubscriptionItem(this, cat));
    }

    realtimeListWidget->addItem(makeSectionHeaderItem(tr("Data")));
    for (const QString &cat : {"chat_realtime", "downloads_realtime", "screenshot_realtime", "credentials_realtime", "targets_realtime", "notifications", "tunnels"}) {
        realtimeListWidget->addItem(makeSubscriptionItem(this, cat));
    }
    realtimeListWidget->addItem(makeSectionHeaderItem(tr("Agent")));
    for (const QString &cat : {"tasks_manager"}) {
        realtimeListWidget->addItem(makeSubscriptionItem(this, cat));
    }

    consoleTeammodeCheck = new QCheckBox(tr("Console Team Mode"), this);
    consoleTeammodeCheck->setChecked(true);
    consoleTeammodeCheck->setToolTip(tr("See console output from all operators"));

    agentsOnlyActiveCheck = new QCheckBox(tr("Only active agents"), this);
    agentsOnlyActiveCheck->setToolTip(tr("Synchronize only active agents"));
    agentsOnlyActiveCheck->setEnabled(false);

    tasksOnlyJobsCheck = new QCheckBox(tr("Only JOB tasks"), this);
    tasksOnlyJobsCheck->setToolTip(tr("Synchronize only jobs"));
    tasksOnlyJobsCheck->setEnabled(false);

    syncInactiveAgentsButton = new QPushButton(tr("Sync inactive agents"), this);
    syncInactiveAgentsButton->setEnabled(false);
    syncInactiveAgentsButton->setVisible(false);

    auto buttonLayout = new QHBoxLayout();
    buttonLayout->setSpacing(10);

    applyButton = new QPushButton(tr("Apply"), this);
    applyButton->setDefault(true);
    applyButton->setFixedWidth(100);

    closeButton = new QPushButton(tr("Close"), this);
    closeButton->setFixedWidth(100);

    buttonLayout->addStretch();
    buttonLayout->addWidget(applyButton);
    buttonLayout->addWidget(closeButton);

    auto optionsLayout = new QVBoxLayout();
    optionsLayout->setSpacing(6);
    optionsLayout->addWidget(consoleTeammodeCheck);

    auto agentsRow = new QHBoxLayout();
    agentsRow->setSpacing(8);
    agentsRow->addWidget(agentsOnlyActiveCheck);
    agentsRow->addWidget(syncInactiveAgentsButton);
    agentsRow->addStretch();
    optionsLayout->addLayout(agentsRow);

    optionsLayout->addWidget(tasksOnlyJobsCheck);

    mainLayout->addWidget(historyLabel,        0, 0, 1, 1);
    mainLayout->addWidget(realtimeLabel,       0, 1, 1, 1);
    mainLayout->addWidget(historyListWidget,   1, 0, 1, 1);
    mainLayout->addWidget(realtimeListWidget,  1, 1, 1, 1);
    mainLayout->addLayout(optionsLayout,       2, 0, 1, 2);
    mainLayout->addLayout(buttonLayout,        3, 0, 1, 2);
}

void DialogSubscriptions::updateItemState(QListWidgetItem *item, const bool active, bool registered)
{
    Qt::ItemFlags flags = item->flags();
    flags |= Qt::ItemIsUserCheckable;
    if (registered)
        flags |= Qt::ItemIsUserTristate;
    else
        flags &= ~Qt::ItemIsUserTristate;
    item->setFlags(flags);
    if (active) {
        item->setCheckState(Qt::Checked);
    } else if (registered) {
        item->setCheckState(Qt::PartiallyChecked);
    } else {
        item->setCheckState(Qt::Unchecked);
    }
}

DialogSubscriptions::DialogSubscriptions(AdaptixWidget* adaptixWidget, QWidget* parent) : QDialog(parent), adaptixWidget(adaptixWidget)
{
    dataCategories = {
        "chat_history", "chat_realtime",
        "downloads_history", "downloads_realtime",
        "screenshot_history", "screenshot_realtime",
        "credentials_history", "credentials_realtime",
        "targets_history", "targets_realtime",
        "notifications", "tunnels"
    };
    agentCategories = {
        "console_history",
        "tasks_history",
        "tasks_manager",
        "tasks_only_jobs"
    };
    createUI();

    connect(applyButton,              &QPushButton::clicked,     this, &DialogSubscriptions::onApply);
    connect(closeButton,              &QPushButton::clicked,     this, &QDialog::close);
    connect(historyListWidget,        &QListWidget::itemChanged, this, &DialogSubscriptions::onItemChanged);
    connect(realtimeListWidget,       &QListWidget::itemChanged, this, &DialogSubscriptions::onItemChanged);
    connect(syncInactiveAgentsButton, &QPushButton::clicked,     this, &DialogSubscriptions::onSyncInactiveAgents);
}

void DialogSubscriptions::updateSyncInactiveAgentsButtonState()
{
    if (!syncInactiveAgentsButton)
        return;

    bool agentsInactiveRegistered = registeredCategories.contains("agents_inactive");
    bool show = agentsOnlyActiveLocked && !agentsInactiveRegistered;
    syncInactiveAgentsButton->setVisible(show);
    syncInactiveAgentsButton->setEnabled(show && !syncInactiveAgentsTriggered);
}

void DialogSubscriptions::SetCurrentSubscriptions(const QStringList &subs)
{
    currentSubscriptions = subs;

    historyListWidget->blockSignals(true);
    for (int i = 0; i < historyListWidget->count(); ++i) {
        auto *item = historyListWidget->item(i);
        if (isSectionHeaderItem(item))
            continue;
        const QString key = subscriptionKey(item);
        bool active = subs.contains(key);
        bool registered = registeredCategories.contains(key);
        updateItemState(item, active, registered);
    }
    historyListWidget->blockSignals(false);

    realtimeListWidget->blockSignals(true);
    for (int i = 0; i < realtimeListWidget->count(); ++i) {
        auto *item = realtimeListWidget->item(i);
        if (isSectionHeaderItem(item))
            continue;
        const QString key = subscriptionKey(item);
        bool active = subs.contains(key);
        bool registered = registeredCategories.contains(key);
        updateItemState(item, active, registered);
    }
    realtimeListWidget->blockSignals(false);

    bool agentsOnlyActive = subs.contains("agents_only_active");
    agentsOnlyActiveLocked = agentsOnlyActive;
    agentsOnlyActiveCheck->setChecked(agentsOnlyActive);
    agentsOnlyActiveCheck->setEnabled(false);

    updateSyncInactiveAgentsButtonState();

    tasksOnlyJobsCheck->setChecked(subs.contains("tasks_only_jobs"));
}

void DialogSubscriptions::SetRegisteredCategories(const QStringList &cats)
{
    registeredCategories = cats;
    updateSyncInactiveAgentsButtonState();
}

void DialogSubscriptions::SetConsoleMultiuser(bool multiuser)
{
    consoleTeammodeCheck->setChecked(multiuser);
}

void DialogSubscriptions::onApply()
{
    if (!adaptixWidget || !adaptixWidget->GetProfile())
        return;

    AuthProfile* profile = adaptixWidget->GetProfile();

    bool wasChatHistory = currentSubscriptions.contains("chat_history");
    bool wasConsoleHistory = currentSubscriptions.contains("console_history");
    bool wasNotifications = currentSubscriptions.contains("notifications");

    QStringList newSubs;
    for (int i = 0; i < historyListWidget->count(); ++i) {
        auto *item = historyListWidget->item(i);
        if (isSectionHeaderItem(item))
            continue;
        if (item->checkState() == Qt::Checked)
            newSubs.append(subscriptionKey(item));
    }
    for (int i = 0; i < realtimeListWidget->count(); ++i) {
        auto *item = realtimeListWidget->item(i);
        if (isSectionHeaderItem(item))
            continue;
        if (item->checkState() == Qt::Checked)
            newSubs.append(subscriptionKey(item));
    }

    if (agentsOnlyActiveLocked)
        newSubs.append("agents_only_active");
    if (tasksOnlyJobsCheck && tasksOnlyJobsCheck->isChecked())
        newSubs.append("tasks_only_jobs");

    QStringList toRegister;
    for (const QString &cat : newSubs) {
        if (!registeredCategories.contains(cat))
            toRegister.append(cat);
    }

    bool enablingChatHistory = newSubs.contains("chat_history") && !wasChatHistory;
    bool enablingConsoleHistory = newSubs.contains("console_history") && !wasConsoleHistory;
    bool enablingNotifications = newSubs.contains("notifications") && !wasNotifications;
    if (adaptixWidget) {
        if (enablingChatHistory)
            adaptixWidget->ClearChatStream();
        if (enablingConsoleHistory)
            adaptixWidget->ClearConsoleStreams();
        if (enablingNotifications)
            adaptixWidget->ClearNotificationsStream();
    }

    bool consoleMultiuser = consoleTeammodeCheck->isChecked();

    if (!toRegister.isEmpty() || consoleMultiuser != profile->GetConsoleMultiuser()) {
        QJsonObject subscribeData;
        subscribeData["categories"] = toJsonArray(toRegister);
        if (consoleMultiuser != profile->GetConsoleMultiuser())
            subscribeData["console_team_mode"] = consoleMultiuser;

        if (!subscribeData.isEmpty()) {
            QByteArray jsonData = QJsonDocument(subscribeData).toJson();
            QPointer<AdaptixWidget> safeWidget = adaptixWidget;
            QStringList allRegs = registeredCategories + toRegister;
            QStringList activeSubs = newSubs;
            HttpRequestManager::instance().post(
                profile->GetURL(), "/subscribe", profile->GetAccessToken(), jsonData,
                [safeWidget, allRegs, activeSubs, consoleMultiuser](bool success, const QString& message, const QJsonObject& response) {
                    Q_UNUSED(response);
                    if (success) {
                        if (safeWidget && safeWidget->GetProfile()) {
                            safeWidget->GetProfile()->SetRegisteredCategories(allRegs);
                            safeWidget->GetProfile()->SetSubscriptions(activeSubs);
                            safeWidget->GetProfile()->SetConsoleMultiuser(consoleMultiuser);
                            GlobalClient->storage->UpdateProject(*safeWidget->GetProfile());
                        }
                    } else {
                        MessageError(QCoreApplication::translate("DialogSubscriptions", "Subscribe failed: %1").arg(message));
                    }
                });
        }
    } else {
        profile->SetSubscriptions(newSubs);
        GlobalClient->storage->UpdateProject(*profile);
    }

    close();
}

void DialogSubscriptions::onSyncInactiveAgents()
{
    if (!agentsOnlyActiveLocked)
        return;
    if (syncInactiveAgentsTriggered)
        return;

    if (!adaptixWidget || !adaptixWidget->GetProfile())
        return;

    if (registeredCategories.contains("agents_inactive")) {
        updateSyncInactiveAgentsButtonState();
        return;
    }

    syncInactiveAgentsTriggered = true;
    updateSyncInactiveAgentsButtonState();

    AuthProfile* profile = adaptixWidget->GetProfile();
    QJsonObject subscribeData;
    subscribeData["categories"] = toJsonArray(QStringList{ "agents_inactive" });
    QByteArray jsonData = QJsonDocument(subscribeData).toJson();

    QPointer<DialogSubscriptions> self(this);
    HttpRequestManager::instance().post(
        profile->GetURL(), "/subscribe", profile->GetAccessToken(), jsonData,
        [self](bool success, const QString& message, const QJsonObject& response) {
            Q_UNUSED(response);
            if (!self)
                return;

            if (!success) {
                MessageError(QCoreApplication::translate("DialogSubscriptions", "Subscribe failed: %1").arg(message));
                self->syncInactiveAgentsTriggered = false;
                self->updateSyncInactiveAgentsButtonState();
                return;
            }

            if (self->adaptixWidget && self->adaptixWidget->GetProfile()) {
                AuthProfile* profile = self->adaptixWidget->GetProfile();

                if (!self->registeredCategories.contains("agents_inactive"))
                    self->registeredCategories.append("agents_inactive");
                profile->SetRegisteredCategories(self->registeredCategories);

                QStringList subs = profile->GetSubscriptions();
                if (!subs.contains("agents_inactive"))
                    subs.append("agents_inactive");
                profile->SetSubscriptions(subs);

                GlobalClient->storage->UpdateProject(*profile);
            }

            self->updateSyncInactiveAgentsButtonState();
        });
}

void DialogSubscriptions::onItemChanged(QListWidgetItem *item)
{
    if (isSectionHeaderItem(item))
        return;

    const QString cat = subscriptionKey(item);
    bool registered = registeredCategories.contains(cat);

    QListWidget *listWidget = item->listWidget();
    if (!listWidget)
        return;

    if (item->checkState() == Qt::PartiallyChecked && !registered) {
        listWidget->blockSignals(true);
        item->setCheckState(Qt::Checked);
        listWidget->blockSignals(false);
    }
    else if (item->checkState() == Qt::Unchecked && registered) {
        listWidget->blockSignals(true);
        item->setCheckState(Qt::PartiallyChecked);
        listWidget->blockSignals(false);
    }
}
