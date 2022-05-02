#include "creditdebit.h"
#include "ui_creditdebit.h"
#include "mainwindow.h"

creditdebit::creditdebit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::creditdebit)
{
    ui->setupUi(this);
}

creditdebit::~creditdebit()
{
    delete ui;
}

void creditdebit::on_DEBIT_clicked()
{
    emit tiliValittuSignal("debit");

}


void creditdebit::on_CREDIT_clicked()
{
    emit tiliValittuSignal("credit");
}

void creditdebit::on_asiakasTiedot_clicked()
{

}

