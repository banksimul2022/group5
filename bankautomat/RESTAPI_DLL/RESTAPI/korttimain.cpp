#include "korttimain.h"
#include "ui_korttimain.h"

Korttimain::Korttimain(QString asiKortinnumero, QString asiAsiakas, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Korttimain)
{
    ui->setupUi(this);
    ui->LabelKortinnumero->setText(asiKortinnumero);
    ui->LabelAsiakas->setText(asiAsiakas);
}

Korttimain::~Korttimain()
{
    delete ui;
}

void Korttimain::on_BtnValikko_clicked()
{

}
