#include "pinkoodi_engine.h"
#include "ui_pinkoodi_engine.h"

pinkoodi_engine::pinkoodi_engine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pinkoodi_engine)

{
    ui->setupUi(this);
    ui->lineEdit->setMaxLength(4);

    timer = new QTimer;
    connect(timer, SIGNAL(timeout()),
            this, SLOT(aika_loppu()));

}

pinkoodi_engine::~pinkoodi_engine()
{
    delete ui;
    ui = nullptr;

    delete timer;
    timer = nullptr;
}

void pinkoodi_engine::on_a1_clicked()
{
    timer->start(10000);
    ui -> lineEdit ->setText(pinkoodi+"1");
    pinkoodi = ui -> lineEdit -> text();
}


void pinkoodi_engine::on_a2_clicked()
{
    timer->start(10000);
    ui -> lineEdit ->setText(pinkoodi+"2");
    pinkoodi = ui -> lineEdit -> text();
}


void pinkoodi_engine::on_a3_clicked()
{
    timer->start(10000);
    ui -> lineEdit ->setText(pinkoodi+"3");
    pinkoodi = ui -> lineEdit -> text();
}


void pinkoodi_engine::on_a4_clicked()
{
    timer->start(10000);
    ui -> lineEdit ->setText(pinkoodi+"4");
    pinkoodi = ui -> lineEdit -> text();
}


void pinkoodi_engine::on_a5_clicked()
{
    timer->start(10000);
    ui -> lineEdit ->setText(pinkoodi+"5");
    pinkoodi = ui -> lineEdit -> text();
}


void pinkoodi_engine::on_a6_clicked()
{
    timer->start(10000);
    ui -> lineEdit ->setText(pinkoodi+"6");
    pinkoodi = ui -> lineEdit -> text();
}


void pinkoodi_engine::on_a7_clicked()
{
    timer->start(10000);
    ui -> lineEdit ->setText(pinkoodi+"7");
    pinkoodi = ui -> lineEdit -> text();
}


void pinkoodi_engine::on_a8_clicked()
{
    timer->start(10000);
    ui -> lineEdit ->setText(pinkoodi+"8");
    pinkoodi = ui -> lineEdit -> text();
}


void pinkoodi_engine::on_a9_clicked()
{
    timer->start(10000);
    ui -> lineEdit ->setText(pinkoodi+"9");
    pinkoodi = ui -> lineEdit -> text();
}


void pinkoodi_engine::on_a0_clicked()
{
    timer->start(10000);
    ui -> lineEdit ->setText(pinkoodi+"0");
    pinkoodi = ui -> lineEdit -> text();
}


void pinkoodi_engine::on_enter_clicked()
{
    timer->stop();
    qDebug()<<pinkoodi;

    emit pinkoodi_signal(pinkoodi);
    pinkoodi.clear();
    ui->lineEdit->clear();
    ui->vaarapin_label->clear();
}

void pinkoodi_engine::on_clear_clicked()
{
    timer->start(10000);
    pinkoodi.clear();
    ui->lineEdit->clear();
    ui->vaarapin_label->clear();
}

void pinkoodi_engine::aika_loppu()
{
    this->close();
    qDebug()<<"aika loppu";
}

void pinkoodi_engine::pinkoodi_vaarin()
{
    yritys--;
    if (yritys == 0)
    {
        this->close();
        ui->vaarapin_label->clear();
        yritys = 3;
    }
    ui->vaarapin_label->clear();
    pinkoodi.clear();
    ui->vaarapin_label->setText("Pinkoodi vaarin " + QString::number(yritys) + " yritysta jaljella");

}

