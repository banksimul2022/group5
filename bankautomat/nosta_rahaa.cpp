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
