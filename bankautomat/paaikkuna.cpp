#include "paaikkuna.h"
#include "ui_paaikkuna.h"

Paaikkuna::Paaikkuna(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Paaikkuna)
{
    ui->setupUi(this);
    pnosta_rahaa = new nosta_rahaa;
    ptalleta_rahaa = new talleta_rahaa;
}

Paaikkuna::~Paaikkuna()
{
    delete ui;
}

void Paaikkuna::asetaTiedot(QString nimi, QString saldo)
{
  ui->nimiLabel->setText(nimi);
  ui->saldoLabel->setText(saldo);
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

