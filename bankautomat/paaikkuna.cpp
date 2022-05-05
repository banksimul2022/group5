#include "paaikkuna.h"
#include "ui_paaikkuna.h"
#include "mainwindow.h"

Paaikkuna::Paaikkuna(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Paaikkuna)
{
    ui->setupUi(this);
    pnosta_rahaa = new nosta_rahaa;
    ptalleta_rahaa = new talleta_rahaa;
    pcreditdebit = new creditdebit;
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

void Paaikkuna::on_Nosta_rahaa_clicked()
{
    pnosta_rahaa->timer->start(10000);
    pnosta_rahaa->show();
}

void Paaikkuna::on_Talleta_rahaa_clicked()
{
    ptalleta_rahaa->timer->start(10000);
    ptalleta_rahaa->show();
}

void Paaikkuna::on_Kirjaudu_ulos_clicked()
{
    this->close();
    ptalleta_rahaa->close();
    pnosta_rahaa->close();

}

