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

    /*connect(pRESTAPI_DLL, SIGNAL(nimiToExe(QString)),
        this, SLOT(haenimi(QString)));*/

}

Paaikkuna::~Paaikkuna()
{
    delete ui;

    delete  pRESTAPI_DLL;
    pRESTAPI_DLL = nullptr;
}

void Paaikkuna::asetaNimi(QString nimi)
{
  ui->nimiLabel->setText(nimi);
}

/*void Paaikkuna::asetaSaldo(QString nimi)
{
  ui->nimiLabel->setText(nimi);
}*/

void Paaikkuna::asetaVelka(QString velka)
{
  ui->saldoLabel->setText(velka);
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

