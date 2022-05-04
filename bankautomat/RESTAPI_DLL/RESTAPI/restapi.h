#ifndef RESTAPI_H
#define RESTAPI_H

#include "RESTAPI_global.h"
#include "login.h"
#include <qstring.h>
#include <QObject>
#include <QString>
#include <QDebug>

class RESTAPI_EXPORT RESTAPI:public QObject
{
    Q_OBJECT
public:
    RESTAPI();
    ~RESTAPI();

    void setPin(QString kortinnumero, QString pin);
    bool getTrueFalse();
    Login *objectLogin;

    void getAsiakas(QString tunnus);
    void getCredit(QString tilinnumero);
    void getDebit(QString tilinnumero);
    void getdebitTapahtuma(QString tapahtuma);
    void getcreditTapahtuma(QString credittapahtuma);
    void postdebitTalletus(QString tilinum, QString summa);
    void setwebToken(const QByteArray &value);

private slots:
    void login_slot(QByteArray);
    void getasiakasSlot(QNetworkReply *reply);
    void getcreditSlot (QNetworkReply *reply);
    void getdebitSlot (QNetworkReply *reply);
    void getdebittapahtumaSlot (QNetworkReply *reply);
    void getcredittapahtumaSlot (QNetworkReply *reply);
    void postdebittalletusSlot (QNetworkReply *reply);


signals:
    void login_signal(QByteArray);
    void creditSignal(QString);
    void debitSignal(QString);
    void debittapahtumaSignal(QString);
    void credittapahtumaSignal(QString);
    void asiakasSignal(QString);
    void nimiToExe(QString,QString);
    void velkaToExe(QString);
    void saldoToExe(QString);
    void debittapahtumaToExe(QString);
    void credittapahtumaToExe(QString);
    void talletusSignal();

private:

        QNetworkAccessManager * debittapahtumaManager;
        QNetworkAccessManager * credittapahtumaManager;
        QNetworkAccessManager * asiakasManager;
        QNetworkAccessManager * creditManager;
        QNetworkAccessManager * debitManager;
        QNetworkAccessManager * talletusManager;
        QNetworkReply *reply;
        QByteArray response_data;
        QByteArray webToken;
};

#endif // RESTAPI_H
