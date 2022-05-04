#include "talleta_rahaa.h"
#include "ui_talleta_rahaa.h"

talleta_rahaa::talleta_rahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::talleta_rahaa)
{
    ui->setupUi(this);

    pRESTAPI_DLL = new RESTAPI;
    Ppaaikkuna = new Paaikkuna;

    connect(pRESTAPI_DLL->objectLogin, SIGNAL(login_signal(QByteArray)),
            this, SLOT(login_slot(QByteArray)));

    connect(pRESTAPI_DLL, SIGNAL(saldoToExe(QString)),
            this,SLOT(haesaldo(QString)));

    connect(pRESTAPI_DLL, SIGNAL(debitSignal(QString)),
            this, SLOT(getdebittSlot(QString)));

    connect(pRESTAPI_DLL, SIGNAL(debitSignal(QString)),
            this, SLOT(getdebittSlot(QString)));

}

talleta_rahaa::~talleta_rahaa()
{
    delete ui;
}

void talleta_rahaa::on_Talleta_rahaa_clicked()
{
    tilinnumero = "1";
    pRESTAPI_DLL->postdebitTalletus(tilinnumero,nostonsumma);
    ui->talletus_Label->setText(nullptr);
}

void talleta_rahaa::on_Sulje_clicked()
{
    window()->close();
    ui->talletus_Label->setText(nullptr);
    pRESTAPI_DLL->getDebit(debit);
    Ppaaikkuna->asetaSaldo(saldo);
}


void talleta_rahaa::on_kakskyt_clicked()
{
    nostonsumma = "20";
    ui->talletus_Label->setText("20");
}


void talleta_rahaa::on_nelkyt_clicked()
{
    nostonsumma = "40";
    ui->talletus_Label->setText("40");
}


void talleta_rahaa::on_kuuskyt_clicked()
{
    nostonsumma = "60";
    ui->talletus_Label->setText("60");
}


void talleta_rahaa::on_sata_clicked()
{
    nostonsumma = "100";
    ui->talletus_Label->setText("100");
}


void talleta_rahaa::on_kakssataa_clicked()
{
    nostonsumma = "200";
    ui->talletus_Label->setText("200");
}


void talleta_rahaa::on_viissataa_clicked()
{
    nostonsumma = "500";
    ui->talletus_Label->setText("500");
}

void talleta_rahaa::getdebitSlot(QString dtilinnumero)
{
    dtilinnumero = 1;
}
