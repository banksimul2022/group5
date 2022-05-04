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
        asiakas+= QString::number(json_obj["Tunnus"].toInt());
        emit asiakasSignal(asiakas);
     }
     QString etunimi, sukunimi;
     foreach (const QJsonValue &value, json_array) {
           QJsonObject json_obj = value.toObject();
           etunimi+= json_obj["Etunimi"].toString();
           sukunimi+= json_obj["Sukunimi"].toString();
           qDebug()<<etunimi+" "+sukunimi;
           emit nimiToExe(etunimi,sukunimi);
     }
     //reply->deleteLater();
     //asiakasManager->deleteLater();
}

void RESTAPI::getCredit(QString tilinnumero)
{
    QString site_url="http://localhost:3000/credittili/1";
    site_url.append(tilinnumero);
    qDebug() << site_url;
    QNetworkRequest request((site_url));

    QByteArray wtoken="Bearer "+webToken;
    request.setRawHeader(QByteArray("Authorization"),(wtoken));

    creditManager = new QNetworkAccessManager(this);
    connect(creditManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getcreditSlot(QNetworkReply*)));
    reply = creditManager->get(request);
}

void RESTAPI::getcreditSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
     qDebug()<<"DATA : "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString ctilinnumero;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        ctilinnumero+= QString::number(json_obj["Tilinnumero"].toInt());
        emit creditSignal(ctilinnumero);
     }
     QString velka;
     foreach (const QJsonValue &value, json_array) {
           QJsonObject json_obj = value.toObject();
           velka+=QString::number((json_obj["Velka"].toInt()));
           qDebug()<<"velka on "+velka;
           emit velkaToExe(velka);
     }
     //reply->deleteLater();
     //creditManager->deleteLater();
}

void RESTAPI::getDebit(QString tilinnumero)
{
    QString site_url="http://localhost:3000/debittili/1";
    site_url.append(tilinnumero);
    qDebug() << site_url;
    QNetworkRequest request((site_url));

    QByteArray wtoken="Bearer "+webToken;
    request.setRawHeader(QByteArray("Authorization"),(wtoken));

    debitManager = new QNetworkAccessManager(this);
    connect(debitManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getdebitSlot(QNetworkReply*)));
    reply = debitManager->get(request);
}

void RESTAPI::getdebitSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
     qDebug()<<"DATA : "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString dtilinnumero;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        dtilinnumero+= QString::number(json_obj["Tilinnumero"].toInt());
        emit debitSignal(dtilinnumero);
     }
     QString saldo;
     foreach (const QJsonValue &value, json_array) {
           QJsonObject json_obj = value.toObject();
           saldo+=QString::number((json_obj["Saldo"].toInt()));
           qDebug()<<"saldo on "+saldo;
           emit saldoToExe(saldo);
     }
     //reply->deleteLater();
     //creditManager->deleteLater();
}

void RESTAPI::getdebitTapahtuma(QString tapahtuma)
{
    QString site_url="http://localhost:3000/tilitapahtumat/10debittapahtumaa/1";
    site_url.append(tapahtuma);
    qDebug() << site_url;
    QNetworkRequest request((site_url));

    QByteArray wtoken="Bearer "+webToken;
    request.setRawHeader(QByteArray("Authorization"),(wtoken));

    debittapahtumaManager = new QNetworkAccessManager(this);
    connect(debittapahtumaManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getdebittapahtumaSlot(QNetworkReply*)));
    reply = debittapahtumaManager->get(request);
}

void RESTAPI::getdebittapahtumaSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
     qDebug()<<"DATA : "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString did;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        did+= QString::number(json_obj["id_tapahtuma"].toInt());
        emit debittapahtumaSignal(did);
     }
     QString debittapahtumat;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        //tapahtumat+= QString::number((json_obj["id_tapahtuma"].toInt()))+",  "+QString::number((json_obj["Tilinnumero"].toInt()))+",  "+json_obj["Tapahtuma"].toString()+",  "+json_obj["Pvm"].toString()+",  "+QString::number((json_obj["Summa"].toInt()))+" €\n";
        debittapahtumat+= QString::number((json_obj["Tilinnumero"].toInt()))+", "+json_obj["Pvm"].toString()+", "+json_obj["Tapahtuma"].toString()+", "+QString::number((json_obj["Summa"].toInt()))+" €\n";
        qDebug()<<"tapahtuuko??? "+debittapahtumat;
        emit debittapahtumaToExe(debittapahtumat);
     }
     //reply->deleteLater();
     //creditManager->deleteLater();
}

void RESTAPI::getcreditTapahtuma(QString credittapahtuma)
{
    QString site_url="http://localhost:3000/tilitapahtumat/10credittapahtumaa/1";
    site_url.append(credittapahtuma);
    qDebug() << site_url;
    QNetworkRequest request((site_url));

    QByteArray wtoken="Bearer "+webToken;
    request.setRawHeader(QByteArray("Authorization"),(wtoken));

    credittapahtumaManager = new QNetworkAccessManager(this);
    connect(credittapahtumaManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getcredittapahtumaSlot(QNetworkReply*)));
    reply = credittapahtumaManager->get(request);
}

void RESTAPI::getcredittapahtumaSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
     qDebug()<<"DATA : "+response_data;
     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
     QJsonArray json_array = json_doc.array();
     QString cid;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        cid+= QString::number(json_obj["id_tapahtuma"].toInt());
        emit debittapahtumaSignal(cid);
     }
     QString credittapahtumat;
     foreach (const QJsonValue &value, json_array) {
        QJsonObject json_obj = value.toObject();
        //tapahtumat+= QString::number((json_obj["id_tapahtuma"].toInt()))+",  "+QString::number((json_obj["Tilinnumero"].toInt()))+",  "+json_obj["Tapahtuma"].toString()+",  "+json_obj["Pvm"].toString()+",  "+QString::number((json_obj["Summa"].toInt()))+" €\n";
        credittapahtumat+= QString::number((json_obj["Tilinnumero"].toInt()))+", "+json_obj["Pvm"].toString()+", "+json_obj["Tapahtuma"].toString()+", "+QString::number((json_obj["Summa"].toInt()))+" €\n";
        qDebug()<<"tapahtuuko??? "+credittapahtumat;
        emit credittapahtumaToExe(credittapahtumat);
     }
     //reply->deleteLater();
     //creditManager->deleteLater();
}

/*void RESTAPI::getCrdnostoSlot(QNetworkReply *reply)
{

}

void RESTAPI::setwebToken(const QByteArray &value)
{
    webToken = value;
}

void RESTAPI::getCrdNosto(QString tilinnumero)
{
    QString site_url="http://localhost:3000/tilitapahtumat/credit_nosto";
    site_url.append(tilinnumero);
    qDebug() << site_url;
    QNetworkRequest request((site_url));

    QByteArray wtoken="Bearer "+webToken;
    request.setRawHeader(QByteArray("Authorization"),(wtoken));

    CrdnostoManager = new QNetworkAccessManager(this);
    connect(CrdnostoManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(getCrdnostoSlot(QNetworkReply*)));
    reply = CrdnostoManager->get(request);
}*/

void RESTAPI::login_slot(QByteArray truefalse)
{
    emit login_signal(truefalse);
}
