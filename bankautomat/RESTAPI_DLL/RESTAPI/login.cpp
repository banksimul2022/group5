#include "login.h"
#include "ui_login.h"
#include <QDebug>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    objectMyUrl=new MyUrl;
    base_url=objectMyUrl->getBase_url();
}

Login::~Login()
{
    delete ui;
    ui=nullptr;
    delete objectkorttimain;
    objectkorttimain=nullptr;
}

void Login::on_BtnLogin_clicked()
{
    //qDebug()<<"base_url="+base_url;
    kortinnumero=ui->LeKortti->text();
    PIN=ui->LePIN->text();
    Asiakas="3";

    objectkorttimain=new Korttimain(kortinnumero,Asiakas);
    objectkorttimain->show();

    QJsonObject jsonObj;
    jsonObj.insert("kortinnumero", kortinnumero);
    jsonObj.insert("PIN", PIN);

    QNetworkRequest request((base_url+"/login"));


    loginManager = new QNetworkAccessManager(this);
    connect(loginManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(loginSlot(QNetworkReply*)));

    reply = loginManager->post(request, QJsonDocument(jsonObj).toJson());
}

void Login::loginSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<response_data;
    qDebug()<<"ok";
    //joojoo
}

