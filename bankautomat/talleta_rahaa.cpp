#include "talleta_rahaa.h"
#include "ui_talleta_rahaa.h"

talleta_rahaa::talleta_rahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::talleta_rahaa)
{
    ui->setupUi(this);

    pRESTAPI_DLL = new RESTAPI;
    timer = new QTimer;

    connect(timer, SIGNAL(timeout()),
            this, SLOT(aika_loppu()));
}

talleta_rahaa::~talleta_rahaa()
{
    delete ui;

    delete  pRESTAPI_DLL;
    pRESTAPI_DLL = nullptr;

    delete timer;
    timer = nullptr;
}

void talleta_rahaa::on_Sulje_clicked()
{
    window()->close();
    ui->talletus_label->setText(nullptr);

}


void talleta_rahaa::on_Talleta_rahaa_clicked()
{
    timer->start(10000);
    tilinnumero = "1";
    pRESTAPI_DLL->postTalletus(tilinnumero, talletussumma);
    ui->talletus_label->setText(nullptr);
}

void talleta_rahaa::on_kakskyt_clicked()
{
    timer->start(10000);
    talletussumma = "20";
    ui->talletus_label->setText("20");
}


void talleta_rahaa::on_nelkyt_clicked()
{
    timer->start(10000);
    talletussumma = "40";
    ui->talletus_label->setText("40");
}


void talleta_rahaa::on_kuuskyt_clicked()
{
    timer->start(10000);
    talletussumma = "60";
    ui->talletus_label->setText("60");
}


void talleta_rahaa::on_sata_clicked()
{
    timer->start(10000);
    talletussumma = "100";
    ui->talletus_label->setText("100");
}


void talleta_rahaa::on_kakssataa_clicked()
{
    timer->start(10000);
    talletussumma = "200";
    ui->talletus_label->setText("200");
}


void talleta_rahaa::on_viissataa_clicked()
{
    timer->start(10000);
    talletussumma = "500";
    ui->talletus_label->setText("500");
}

void talleta_rahaa::aika_loppu()
{
    qDebug()<<"aika loppu";
    this->close();
}

