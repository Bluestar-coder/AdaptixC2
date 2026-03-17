#ifndef ADAPTIXCLIENT_TASKSWIDGET_H
#define ADAPTIXCLIENT_TASKSWIDGET_H

#include <main.h>
#include <Utils/CustomElements.h>
#include <UI/Widgets/AbstractDock.h>
#include <UI/Widgets/AdaptixWidget.h>

#include <QSortFilterProxyModel>

class Task;
class AdaptixWidget;

enum TasksColumns {
    TC_TaskId,
    TC_TaskType,
    TC_AgentId,
    TC_Client,
    TC_User,
    TC_Computer,
    TC_StartTime,
    TC_FinishTime,
    TC_CommandLine,
    TC_Result,
    TC_Output,
    TC_ColumnCount
};



class TaskOutputWidget : public QWidget
{
    Q_DECLARE_TR_FUNCTIONS(TaskOutputWidget)
    QGridLayout* mainGridLayout = nullptr;
    QLabel*      label          = nullptr;
    QLineEdit*   inputMessage   = nullptr;
    QTextEdit*   outputTextEdit = nullptr;

    void createUI();

public:
    explicit TaskOutputWidget( );
    ~TaskOutputWidget() override;

    void SetConten(const QString &message, const QString &text) const;
};



class TasksFilterProxyModel : public QSortFilterProxyModel
{
Q_OBJECT
    QString agentFilter;
    QString typeFilter;
    QString statusFilter;
    QString textFilter;

    bool matchesTerm(const QString &term, const QString &rowData) const {
        if (term.isEmpty())
            return true;
        QRegularExpression re(QRegularExpression::escape(term.trimmed()), QRegularExpression::CaseInsensitiveOption);
        return rowData.contains(re);
    }

    bool evaluateExpression(const QString &expr, const QString &rowData) const {
        QString e = expr.trimmed();
        if (e.isEmpty())
            return true;

        int depth = 0;
        int lastOr = -1;
        for (int i = e.length() - 1; i >= 0; --i) {
            QChar c = e[i];
            if (c == ')') depth++;
            else if (c == '(') depth--;
            else if (depth == 0 && c == '|') {
                lastOr = i;
                break;
            }
        }
        if (lastOr != -1) {
            QString left = e.left(lastOr).trimmed();
            QString right = e.mid(lastOr + 1).trimmed();
            return evaluateExpression(left, rowData) || evaluateExpression(right, rowData);
        }

        depth = 0;
        int lastAnd = -1;
        for (int i = e.length() - 1; i >= 0; --i) {
            QChar c = e[i];
            if (c == ')') depth++;
            else if (c == '(') depth--;
            else if (depth == 0 && c == '&') {
                lastAnd = i;
                break;
            }
        }
        if (lastAnd != -1) {
            QString left = e.left(lastAnd).trimmed();
            QString right = e.mid(lastAnd + 1).trimmed();
            return evaluateExpression(left, rowData) && evaluateExpression(right, rowData);
        }

        if (e.startsWith("^(") && e.endsWith(')')) {
            return !evaluateExpression(e.mid(2, e.length() - 3), rowData);
        }

        if (e.startsWith('(') && e.endsWith(')')) {
            return evaluateExpression(e.mid(1, e.length() - 2), rowData);
        }

        return matchesTerm(e, rowData);
    }

public:
    explicit TasksFilterProxyModel(QObject *parent = nullptr) : QSortFilterProxyModel(parent) {
        setSortRole(Qt::UserRole);
    };

    void setAgentFilter(const QString &agent) {
        agentFilter = agent;
        invalidateFilter();
    }
    void setTypeFilter(const QString &type) {
        typeFilter = type;
        invalidateFilter();
    }
    void setStatusFilter(const QString &status) {
        statusFilter = status;
        invalidateFilter();
    }
    void setTextFilter(const QString &text){
        textFilter = text;
        invalidateFilter();
    }

protected:
    bool filterAcceptsRow(const int row, const QModelIndex &parent) const override {
        auto model = sourceModel();
        if (!model)
            return true;

        QString agent  = model->index(row, TC_AgentId, parent).data(Qt::DisplayRole).toString();
        QString type   = model->index(row, TC_TaskType, parent).data(Qt::UserRole).toString();
        QString status = model->index(row, TC_Result, parent).data(Qt::UserRole).toString();

        if (!agentFilter.isEmpty() && agent != agentFilter)
            return false;

        if (!typeFilter.isEmpty() && type != typeFilter)
            return false;

        if (!statusFilter.isEmpty() && status != statusFilter)
            return false;

        if (!textFilter.isEmpty()) {
            QString rowData;
            rowData += model->index(row, TC_Client, parent).data().toString() + " ";
            rowData += model->index(row, TC_User, parent).data().toString() + " ";
            rowData += model->index(row, TC_CommandLine, parent).data().toString() + " ";
            rowData += model->index(row, TC_Output, parent).data().toString() + " ";
            if (!evaluateExpression(textFilter, rowData))
                return false;
        }

        return true;
    }
};




class TasksTableModel : public QAbstractTableModel
{
Q_OBJECT
private:
    QVector<TaskData>     tasks;
    QHash<QString, int>   idToRow;

public:
    static QString taskTypeKey(int taskType) {
        return taskType == 1 ? "TASK" :
               taskType == 3 ? "JOB" :
               taskType == 4 ? "TUNNEL" : "unknown";
    }

    static QString taskTypeDisplay(const QString& key) {
        if (key == "TASK")
            return tr("TASK");
        if (key == "JOB")
            return tr("JOB");
        if (key == "TUNNEL")
            return tr("TUNNEL");
        return tr("unknown");
    }

    static QString statusDisplay(const QString& status) {
        if (status == "Hosted")
            return tr("Hosted");
        if (status == "Running")
            return tr("Running");
        if (status == "Success")
            return tr("Success");
        if (status == "Error")
            return tr("Error");
        if (status == "Canceled")
            return tr("Canceled");
        return status;
    }

private:
    void rebuildIndex() {
        idToRow.clear();
        for (int i = 0; i < tasks.size(); ++i)
            idToRow[tasks[i].TaskId] = i;
    }

public:
    explicit TasksTableModel(QObject* parent = nullptr) : QAbstractTableModel(parent) {}

    int rowCount(const QModelIndex&) const override { return tasks.size(); }
    int rowCount() const { return tasks.size(); }

    int columnCount(const QModelIndex&) const override { return TC_ColumnCount; }
    int columnCount() const { return TC_ColumnCount; }

    QVariant data(const QModelIndex& index, const int role) const override {
        if (!index.isValid() || index.row() >= tasks.size())
            return {};

        const TaskData& t = tasks.at(index.row());

        if (role == Qt::DisplayRole) {
            switch (index.column()) {
                case TC_TaskId:      return t.TaskId;
                case TC_TaskType:    return taskTypeDisplay(taskTypeKey(t.TaskType));
                case TC_AgentId:     return t.AgentId;
                case TC_Client:      return t.Client;
                case TC_User:        return t.User;
                case TC_Computer:    return t.Computer;
                case TC_StartTime:   return UnixTimestampGlobalToStringLocal(t.StartTime);
                case TC_FinishTime:  return UnixTimestampGlobalToStringLocal(t.FinishTime);
                case TC_CommandLine: return t.CommandLine;
                case TC_Result:      return statusDisplay(t.Status);
                case TC_Output:      return t.Message;
                default: ;
            }
        }

        if (role == Qt::UserRole) {
            switch (index.column()) {
                case TC_StartTime:   return t.StartTime;
                case TC_FinishTime:  return t.FinishTime;
                case TC_TaskType:    return taskTypeKey(t.TaskType);
                case TC_Result:      return t.Status;
                default:             return data(index, Qt::DisplayRole);
            }
        }

        if (role == Qt::TextAlignmentRole) {
            switch (index.column()) {
                case TC_TaskId:
                case TC_TaskType:
                case TC_AgentId:
                case TC_Client:
                case TC_User:
                case TC_Computer:
                case TC_StartTime:
                case TC_FinishTime:
                case TC_Result:
                    return Qt::AlignCenter;
                default: ;
            }
        }

        if (role == Qt::ForegroundRole && index.column() == TC_Result) {
            if (t.Status == "Error")    return QColor("#E34234");
            if (t.Status == "Canceled") return QColor("#89CFF0");
            if (t.Status == "Success")  return QColor("#39FF14");
        }

        return {};
    }

    QVariant headerData(const int section, const Qt::Orientation o, const int role) const override {
        if (role != Qt::DisplayRole || o != Qt::Horizontal)
            return {};

        switch (section) {
            case TC_TaskId:      return tr("Task ID");
            case TC_TaskType:    return tr("Type");
            case TC_AgentId:     return tr("Agent ID");
            case TC_Client:      return tr("Client");
            case TC_User:        return tr("User");
            case TC_Computer:    return tr("Computer");
            case TC_StartTime:   return tr("Start Time");
            case TC_FinishTime:  return tr("Finish Time");
            case TC_CommandLine: return tr("Command Line");
            case TC_Result:      return tr("Status");
            case TC_Output:      return tr("Message");
            default:             return {};
        }
    }

    void add(const TaskData& task) {
        const int row = tasks.size();
        beginInsertRows(QModelIndex(), row, row);
        tasks.append(task);
        idToRow[task.TaskId] = row;
        endInsertRows();
    }

    void add(const QList<TaskData>& list) {
        if (list.isEmpty())
            return;

        const int start = tasks.size();
        const int end   = start + list.size() - 1;

        beginInsertRows(QModelIndex(), start, end);
        for (const auto& item : list) {
            idToRow[item.TaskId] = tasks.size();
            tasks.append(item);
        }
        endInsertRows();
    }

    void update(const QString& taskId, const TaskData& newData) {
        auto it = idToRow.find(taskId);
        if (it == idToRow.end())
            return;

        int row = it.value();
        tasks[row] = newData;
        Q_EMIT dataChanged(index(row, 0), index(row, columnCount() - 1));
    }

    void remove(const QString &taskId) {
        auto it = idToRow.find(taskId);
        if (it == idToRow.end())
            return;

        int row = it.value();
        beginRemoveRows(QModelIndex(), row, row);
        idToRow.remove(taskId);
        tasks.remove(row);
        endRemoveRows();

        rebuildIndex();
    }

    void clear() {
        beginResetModel();
        tasks.clear();
        idToRow.clear();
        endResetModel();
    }
};



class TasksWidget : public QWidget
{
Q_OBJECT
    AdaptixWidget* adaptixWidget = nullptr;

    KDDockWidgets::QtWidgets::DockWidget* dockWidgetTable;
    KDDockWidgets::QtWidgets::DockWidget* dockWidgetOutput;

    QGridLayout* mainGridLayout = nullptr;
    QTableView*  tableView      = nullptr;
    QShortcut*   shortcutSearch = nullptr;

    TasksTableModel*       tasksModel = nullptr;
    TasksFilterProxyModel* proxyModel = nullptr;

    QWidget*        searchWidget    = nullptr;
    QHBoxLayout*    searchLayout    = nullptr;
    QLineEdit*      inputFilter     = nullptr;
    QCheckBox*      autoSearchCheck = nullptr;
    QComboBox*      comboAgent      = nullptr;
    QComboBox*      comboType       = nullptr;
    QComboBox*      comboStatus     = nullptr;
    ClickableLabel* hideButton      = nullptr;

    bool showPanel = false;
    bool bufferingEnabled = false;
    QList<TaskData> pendingTasks;

    void createUI();
    void flushPendingTasks();

public:
    TaskOutputWidget* taskOutputConsole = nullptr;

    explicit TasksWidget( AdaptixWidget* w );
    ~TasksWidget() override;

    KDDockWidgets::QtWidgets::DockWidget* dockTasks();
    KDDockWidgets::QtWidgets::DockWidget* dockTasksOutput();

    void SetUpdatesEnabled(const bool enabled);

    void AddTaskItem(TaskData newTask);
    void UpdateTaskItem(const QString &taskId, const TaskData &task) const;
    void RemoveTaskItem(const QString &taskId) const;
    void RemoveAgentTasksItem(const QString &agentId) const;

    void SetAgentFilter(const QString &agentId);
    void UpdateColumnsVisible() const;
    void UpdateColumnsSize() const;
    void Clear() const;

public Q_SLOTS:
    void toggleSearchPanel();
    void handleTasksMenu( const QPoint &pos );
    void onTableItemSelection(const QModelIndex &current, const QModelIndex &previous) const;
    void onFilterChanged() const;
    void UpdateFilterComboBoxes() const;
    void actionCopyTaskId() const;
    void actionCopyCmd() const;
    void actionOpenConsole() const;
    void actionCancel() const;
    void actionDelete() const;
};

#endif
