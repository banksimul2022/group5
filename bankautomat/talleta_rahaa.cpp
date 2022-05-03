#include "talleta_rahaa.h"
#include "ui_talleta_rahaa.h"

talleta_rahaa::talleta_rahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::talleta_rahaa)
{
    ui->setupUi(this);
}

talleta_rahaa::~talleta_rahaa()
{
    delete ui;
}

void talleta_rahaa::on_Sulje_clicked()
{
    window()->close();
}

