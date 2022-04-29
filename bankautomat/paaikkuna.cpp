#include "paaikkuna.h"
#include "ui_paaikkuna.h"

Paaikkuna::Paaikkuna(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Paaikkuna)
{
    ui->setupUi(this);

}

Paaikkuna::~Paaikkuna()
{
    delete ui;
}

void Paaikkuna::on_selaatilitapahtumia_clicked()
{

}


void Paaikkuna::on_nostarahaa_clicked()
{

}


void Paaikkuna::on_talletarahaa_clicked()
{

}


void Paaikkuna::on_kirjaudu_ulos_clicked()
{

}


void Paaikkuna::on_naytasaldo_clicked()
{

}


void Paaikkuna::on_Nosta_rahaa_clicked()
{

}

