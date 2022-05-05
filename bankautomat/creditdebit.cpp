#include "creditdebit.h"
#include "ui_creditdebit.h"
#include "mainwindow.h"

creditdebit::creditdebit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creditdebit)
{
    ui->setupUi(this);

    timer = new QTimer;

    connect(timer, SIGNAL(timeout()),
            this, SLOT(aika_loppu()));
}

creditdebit::~creditdebit()
{
    delete ui;
    ui = nullptr;
    delete timer;
    timer = nullptr;
}

void creditdebit::on_DEBIT_clicked()
{
    emit tiliValittuSignal("debit");
    //this->close();
}

void creditdebit::on_CREDIT_clicked()
{
    emit tiliValittuSignal("credit");
    //this->close();
}

void creditdebit::aika_loppu()
{
    qDebug()<<"aika loppu";
    this->close();
}


