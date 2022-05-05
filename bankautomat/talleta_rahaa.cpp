#include "talleta_rahaa.h"
#include "ui_talleta_rahaa.h"

talleta_rahaa::talleta_rahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::talleta_rahaa)
{
    ui->setupUi(this);

    pRESTAPI_DLL = new RESTAPI;
}

talleta_rahaa::~talleta_rahaa()
{
    delete ui;

    delete  pRESTAPI_DLL;
    pRESTAPI_DLL = nullptr;
}

void talleta_rahaa::on_Sulje_clicked()
{
    window()->close();
    ui->talletus_label->setText(nullptr);
    pRESTAPI_DLL->getDebit(debit);
}


void talleta_rahaa::on_Talleta_rahaa_clicked()
{
    tilinnumero = "1";
    pRESTAPI_DLL->postTalletus(tilinnumero, talletussumma);
    ui->talletus_label->setText(nullptr);
}


void talleta_rahaa::on_kakskyt_clicked()
{
    talletussumma = "20";
    ui->talletus_label->setText("20");
}


void talleta_rahaa::on_nelkyt_clicked()
{
    talletussumma = "40";
    ui->talletus_label->setText("40");
}


void talleta_rahaa::on_kuuskyt_clicked()
{
    talletussumma = "60";
    ui->talletus_label->setText("60");
}


void talleta_rahaa::on_sata_clicked()
{
    talletussumma = "100";
    ui->talletus_label->setText("100");
}


void talleta_rahaa::on_kakssataa_clicked()
{
    talletussumma = "200";
    ui->talletus_label->setText("200");
}


void talleta_rahaa::on_viissataa_clicked()
{
    talletussumma = "500";
    ui->talletus_label->setText("500");
}
