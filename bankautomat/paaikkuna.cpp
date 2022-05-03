#include "paaikkuna.h"
#include "ui_paaikkuna.h"

Paaikkuna::Paaikkuna(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Paaikkuna)
{
    ui->setupUi(this);
    pnosta_rahaa = new nosta_rahaa;
    ptalleta_rahaa = new talleta_rahaa;
    pRESTAPI_DLL = new RESTAPI;

    connect(pRESTAPI_DLL, SIGNAL(nimiToExe(QString)),
        this, SLOT(haenimi(QString)));

}

Paaikkuna::~Paaikkuna()
{
    delete ui;

    delete  pRESTAPI_DLL;
    pRESTAPI_DLL = nullptr;
}

void Paaikkuna::asetaTiedot(QString nimi, QString saldo)
{
  ui->saldoLabel->setText(saldo);
}

void Paaikkuna::haenimi(QString nimi)
{
    asiakkaannimi = nimi;
    ui->nimiLabel->setText(asiakkaannimi);

}

void Paaikkuna::on_selaatilitapahtumia_clicked()
{

}

void Paaikkuna::on_kirjaudu_ulos_clicked()
{

}


void Paaikkuna::on_Nosta_rahaa_clicked()
{
    pnosta_rahaa->show();
}

void Paaikkuna::on_Talleta_rahaa_clicked()
{
    ptalleta_rahaa->show();
}

