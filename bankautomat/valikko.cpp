#include "valikko.h"
#include "ui_valikko.h"

valikko::valikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::valikko)
{
    ui->setupUi(this);
}

valikko::~valikko()
{
    delete ui;
}

QString valikko::getText()
{
    return text;
}
