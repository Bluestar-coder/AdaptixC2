#ifndef ADAPTIXCLIENT_MAINADAPTIX_H
#define ADAPTIXCLIENT_MAINADAPTIX_H

#include <main.h>

namespace oclero::qlementine {
    class QlementineStyle;
}

class QTranslator;
class Extender;
class Settings;
class Storage;
class MainUI;
class AuthProfile;

class MainAdaptix : public QWidget {
    Q_DECLARE_TR_FUNCTIONS(MainAdaptix)

public:
    MainUI*   mainUI   = nullptr;
    Storage*  storage  = nullptr;
    Extender* extender = nullptr;
    Settings* settings = nullptr;
    oclero::qlementine::QlementineStyle* qlementineStyle = nullptr;
    QTranslator* appTranslator = nullptr;
    QTranslator* qtTranslator = nullptr;

    explicit MainAdaptix();
    ~MainAdaptix() override;

    static void Exit();

    void Start() const;
    void NewProject() const;
    void SetApplicationTheme() const;
    void ApplyApplicationFont() const;
    void InstallLanguage(const QString& language);
    static QString NormalizeLanguage(const QString& language);

    static AuthProfile* Login();
};

extern MainAdaptix* GlobalClient;

#endif
