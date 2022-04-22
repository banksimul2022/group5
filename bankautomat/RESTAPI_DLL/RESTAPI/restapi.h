#ifndef RESTAPI_H
#define RESTAPI_H

#include "RESTAPI_global.h"
#include "asiakas.h"
#include "login.h"
#include "saldo.h"
#include "tilitapahtumat.h"
#include <qstring.h>


class RESTAPI_EXPORT RESTAPI
{
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



private:

        Login *objectLogin;
        asiakas *objectAsiakas;
        saldo * objectSaldo;
        tilitapahtumat *objectTilitapahtumat;

};

#endif // RESTAPI_H
