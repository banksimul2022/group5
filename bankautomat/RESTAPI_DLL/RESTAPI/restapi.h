#ifndef RESTAPI_H
#define RESTAPI_H

#include "RESTAPI_global.h"
#include "asiakas.h"
#include "login.h"
#include "saldo.h"
#include "tilitapahtumat.h"
#include <qstring.h>
#include <QObject>

class RESTAPI_EXPORT RESTAPI:public QObject
{
    Q_OBJECT
public:
    RESTAPI();
    ~RESTAPI();

    void setPin(QString kortinnumero, QString pin);
    bool getTrueFalse();

    QString getAsiakas();
    void startAsiakas();

    QString getSaldo();
    void startSaldo();

    QString getTilitapahtumat();
    void startTilitapahtumat();

     void setwebToken(const QString &value);

private slots:
    void login_slot(QString);

signals:
    void login_signal(QString);

private:

        Login *objectLogin;
        asiakas *objectAsiakas;
        saldo * objectSaldo;
        tilitapahtumat *objectTilitapahtumat;
        QString webToken;

};

#endif // RESTAPI_H
