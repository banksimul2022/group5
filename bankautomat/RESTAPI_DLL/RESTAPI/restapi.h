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

    void getAsiakas(QString tunnus);
    void getCredit(QString tilinnumero);
    void getDebit(QString tilinnumero);

    QString getSaldo();
    void startSaldo();

    QString getTilitapahtumat();
    void startTilitapahtumat();

    void setwebToken(const QByteArray &value);

private slots:
    void login_slot(QByteArray);
    void getasiakasSlot(QNetworkReply *reply);
    void getcreditSlot (QNetworkReply *reply);
    void getdebitSlot (QNetworkReply *reply);


signals:
    void login_signal(QByteArray);
    void creditSignal(QString);
    void debitSignal(QString);
    void asiakasSignal(QString);
    void nimiToExe(QString,QString);
    void velkaToExe(QString);
    void saldoToExe(QString);

private:

        QNetworkAccessManager * asiakasManager;
        QNetworkAccessManager * creditManager;
        QNetworkAccessManager * debitManager;
        QNetworkReply *reply;
        QByteArray response_data;
        Login *objectLogin;
        QByteArray webToken;
};

#endif // RESTAPI_H
