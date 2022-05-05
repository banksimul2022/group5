#include "nosta_rahaa.h"
#include "ui_nosta_rahaa.h"

nosta_rahaa::nosta_rahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nosta_rahaa)
{

    ui->setupUi(this);
    timer = new QTimer;
    pRESTAPI_DLL = new RESTAPI;
    pcreditdebit = new creditdebit;

    connect(timer, SIGNAL(timeout()),
            this, SLOT(aika_loppu()));

}

nosta_rahaa::~nosta_rahaa()
{
    delete ui;

    delete  pRESTAPI_DLL;
    pRESTAPI_DLL = nullptr;

    delete timer;
    timer = nullptr;
}

void nosta_rahaa::on_Sulje_btn_clicked()
{
    window()->close();
    ui->nostoLabel->setText(nullptr);
}


void nosta_rahaa::on_kakskyt_btn_clicked()
{
    timer->start(10000);
    nostoSumma = "20";
    ui->nostoLabel->setText(nostoSumma);
}


void nosta_rahaa::on_nelkyt_btn_clicked()
{
    timer->start(10000);
    nostoSumma = "40";
    ui->nostoLabel->setText(nostoSumma);
}


void nosta_rahaa::on_kuuskyt_btn_clicked()
{
    timer->start(10000);
    nostoSumma = "60";
    ui->nostoLabel->setText(nostoSumma);
}


void nosta_rahaa::on_satku_btn_clicked()
{
    timer->start(10000);
    nostoSumma = "100";
    ui->nostoLabel->setText(nostoSumma);
}


void nosta_rahaa::on_kakssataa_btn_clicked()
{
    timer->start(10000);
    nostoSumma = "200";
    ui->nostoLabel->setText(nostoSumma);
}


void nosta_rahaa::on_viishunttia_btn_clicked()
{
    timer->start(10000);
    nostoSumma = "500";
    ui->nostoLabel->setText(nostoSumma);
}


void nosta_rahaa::on_Nosta_btn_clicked()
{
    timer->start(10000);

    tilinnumero = "1";

    pRESTAPI_DLL->postNosto(tilinnumero, nostoSumma);
    pRESTAPI_DLL->postCredit(tilinnumero, nostoSumma);
    pRESTAPI_DLL->getDebit(debit);
    pRESTAPI_DLL->getCredit(credit);
    ui->nostoLabel->setText(nullptr);

}


void nosta_rahaa::aika_loppu()
{
    qDebug()<<"aika loppu";
    this->close();
}

