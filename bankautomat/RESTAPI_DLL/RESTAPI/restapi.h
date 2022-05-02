#ifndef RESTAPI_H
#define RESTAPI_H

#include "RESTAPI_global.h"
#include "asiakas.h"
#include "login.h"
#include "saldo.h"
#include "tilitapahtumat.h"
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

    QString getSaldo();
    void startSaldo();

    QString getTilitapahtumat();
    void startTilitapahtumat();

     void setwebToken(const QString &value);

private slots:
    void login_slot(QString);
    void getasiakasSlot(QNetworkReply *reply);


signals:
    void login_signal(QString);
    void asiakasSignal(QString);
    void nimiToExe(QString);

private:

        QNetworkAccessManager * asiakasManager;
        QNetworkReply *reply;
        QByteArray response_data;
        Login *objectLogin;
        //asiakas *objectAsiakas;
        saldo * objectSaldo;
        tilitapahtumat *objectTilitapahtumat;
        QString webToken;
};

#endif // RESTAPI_H
