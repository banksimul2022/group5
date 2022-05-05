#include "nosta_rahaa.h"
#include "ui_nosta_rahaa.h"

nosta_rahaa::nosta_rahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nosta_rahaa)
{
    ui->setupUi(this);

}

nosta_rahaa::~nosta_rahaa()
{
    delete ui;
}

void nosta_rahaa::on_Sulje_btn_clicked()
{
    window()->close();
    ui->nostoLabel->setText(nullptr);
}



void nosta_rahaa::on_kakskyt_btn_clicked()
{
    nostoSumma = "20";
    ui->nostoLabel->setText(nostoSumma);
}


void nosta_rahaa::on_nelkyt_btn_clicked()
{
    nostoSumma = "40";
    ui->nostoLabel->setText(nostoSumma);
}


void nosta_rahaa::on_kuuskyt_btn_clicked()
{
    nostoSumma = "60";
    ui->nostoLabel->setText(nostoSumma);
}


void nosta_rahaa::on_satku_btn_clicked()
{
    nostoSumma = "100";
    ui->nostoLabel->setText(nostoSumma);
}


void nosta_rahaa::on_kakssataa_btn_clicked()
{
    nostoSumma = "200";
    ui->nostoLabel->setText(nostoSumma);
}


void nosta_rahaa::on_viishunttia_btn_clicked()
{
    nostoSumma = "500";
    ui->nostoLabel->setText(nostoSumma);
}


void nosta_rahaa::on_Nosta_btn_clicked()
{
    tilinnumero = "1";
}

