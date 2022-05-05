#include "nosta_rahaa.h"
#include "ui_nosta_rahaa.h"

nosta_rahaa::nosta_rahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nosta_rahaa)
{

    connect(pRESTAPI_DLL, SIGNAL(saldoToExe(QString)),
            this,SLOT(haesaldo(QString)));

    ui->setupUi(this);

    pRESTAPI_DLL = new RESTAPI;
}

nosta_rahaa::~nosta_rahaa()
{
    delete ui;

    delete  pRESTAPI_DLL;
    pRESTAPI_DLL = nullptr;
}

void nosta_rahaa::haesaldo(QString saldo)
{
    pRESTAPI_DLL->getDebit(debit);
    saldo = raja;
    qDebug()<<"saldo nosta rahaa "+saldo;
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

    /*if (nostoSumma > raja) {
        qDebug()<<"eipa ollu";
    }

    else*/
    tilinnumero = "1";
    pRESTAPI_DLL->postNosto(tilinnumero, nostoSumma);
    pRESTAPI_DLL->getDebit(debit);

    qDebug()<<"rahaa??? "+debit;
    ui->nostoLabel->setText(nullptr);
}

