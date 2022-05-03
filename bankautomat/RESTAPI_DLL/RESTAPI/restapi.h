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

    void getSaldo(QString tunnus);
    void startSaldo();

    QString getTilitapahtumat();
    void startTilitapahtumat();

    void setwebToken(const QByteArray &value);

private slots:
    void login_slot(QByteArray);
    void getasiakasSlot(QNetworkReply *reply);
<<<<<<< HEAD
    void getcreditSlot (QNetworkReply *reply);
=======
    void getSaldoSlot(QNetworkReply *reply);
>>>>>>> 4dbcf35420d3d770701ec897e020384ad2174682


signals:
    void login_signal(QByteArray);
    void creditSignal(QString);
    void asiakasSignal(QString);
    void nimiToExe(QString,QString);
<<<<<<< HEAD
    void velkaToExe(QString);
=======
    void debitSignal(QString);
    void saldoToExe(QString);
>>>>>>> 4dbcf35420d3d770701ec897e020384ad2174682

private:

        QNetworkAccessManager * asiakasManager;
<<<<<<< HEAD
        QNetworkAccessManager * creditManager;
=======
        QNetworkAccessManager * debitManager;
>>>>>>> 4dbcf35420d3d770701ec897e020384ad2174682
        QNetworkReply *reply;
        QByteArray response_data;
        Login *objectLogin;
        QByteArray webToken;
};

#endif // RESTAPI_H
