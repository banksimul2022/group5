#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
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
    kortinnumero=ui->LeKortti->text();
    PIN=ui->LePIN->text();
    Asiakas="3";

    objectkorttimain=new Korttimain(kortinnumero,Asiakas);
    objectkorttimain->show();
}

