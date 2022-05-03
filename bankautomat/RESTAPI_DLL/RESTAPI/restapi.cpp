#include "restapi.h"

RESTAPI::RESTAPI()
{
    qDebug()<<"DLLRestAPI muodostimessa";

        objectLogin = new Login;
        //objectAsiakas = new asiakas;

        connect(objectLogin, SIGNAL(getTrueFalse(QByteArray)),
                this, SLOT(login_slot(QByteArray)));
}

RESTAPI::~RESTAPI()
{
    qDebug()<<"DLLRestAPi tuhoajassa";

        delete objectLogin;
        objectLogin = nullptr;

        //delete objectAsiakas;
        //objectAsiakas = nullptr;
}

void RESTAPI::setPin(QString kortinnumero, QString pin)
{
    qDebug()<<"setPin";

        objectLogin->setPin(kortinnumero,pin);
        objectLogin->getPin();
}

void RESTAPI::getAsiakas(QString tunnus)
{
    QString site_url="http://localhost:3000/asiakas/1";
    site_url.append(tunnus);
    qDebug() << site_url;
    QNetworkRequest request((site_url));

    QByteArray wtoken="Bearer "+webToken;
    request.setRawHeader(QByteArray("Authorization"),(wtoken));

    asiakasManager = new QNetworkAccessManager(this);
    connect(asiakasManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getasiakasSlot(QNetworkReply*)));
    reply = asiakasManager->get(request);
}

void RESTAPI::getasiakasSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
     qDebug()<<"DATA : "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString asiakas;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        asiakas+= QString::number(json_obj["tunnus"].toInt());
        emit asiakasSignal(asiakas);
     }
     QString nimi;
     foreach (const QJsonValue &value, json_array) {
           QJsonObject json_obj = value.toObject();
           nimi+= json_obj["Etunimi"].toString();
           emit nimiToExe(nimi);
     }
     reply->deleteLater();
     asiakasManager->deleteLater();
}


void RESTAPI::startSaldo()
{

}

void RESTAPI::startTilitapahtumat()
{

}

void RESTAPI::setwebToken(const QByteArray &value)
{
    webToken = value;
}

void RESTAPI::login_slot(QByteArray truefalse)
{
    emit login_signal(truefalse);
}
