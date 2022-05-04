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
}

void nosta_rahaa::getcrdnostoSlot(QString ctilinnumero)
{
    ctilinnumero = 1;
}

void nosta_rahaa::haeCrdNosto(QString nosto)
{
    nosto = nosto+" €";

}
