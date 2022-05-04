#include "paaikkuna.h"
#include "ui_paaikkuna.h"
#include "mainwindow.h"
#include "talleta_rahaa.h"

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

void Paaikkuna::asetaNimi(QString nimi)
{
  ui->nimiLabel->setText(nimi);
}

void Paaikkuna::asetaSaldo(QString saldo)
{
  ui->saldoLabel->setText(saldo);
}

void Paaikkuna::asetaVelka(QString velka)
{
    ui->saldoLabel->setText(velka);
}

void Paaikkuna::asetaTapahtuma(QString tapahtuu)
{
    ui->tapahtumaBrowser->setText(tapahtuu);
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

