#include "restapi.h"

RESTAPI::RESTAPI()
{
    qDebug()<<"DLLRestAPI muodostimessa";

        objectLogin = new Login;
        objectAsiakas = new asiakas;
        objectSaldo = new saldo;
        objectTilitapahtumat = new tilitapahtumat;
}

RESTAPI::~RESTAPI()
{
    qDebug()<<"DLLRestAPi tuhoajassa";

        delete objectLogin;
        objectLogin = nullptr;

        delete objectAsiakas;
        objectAsiakas = nullptr;
}

void RESTAPI::setPin(QString kortinnumero, QString pin)
{
    qDebug()<<"setPin";

        objectLogin->setPin(kortinnumero,pin);
        objectLogin->getPin();
}

void RESTAPI::startAsiakas()
{

}

void RESTAPI::startSaldo()
{

}

void RESTAPI::startTilitapahtumat()
{

}
