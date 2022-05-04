#include "nosta_rahaa.h"
#include "ui_nosta_rahaa.h"

nosta_rahaa::nosta_rahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nosta_rahaa)
{
    ui->setupUi(this);
    /*pRESTAPI_DLL = new RESTAPI;

    connect(pRESTAPI_DLL, SIGNAL(CrdnostoSignal(QString)),
            this, SLOT(getcrdnostoSlot(QString)));*/
}

nosta_rahaa::~nosta_rahaa()
{
    delete ui;
}

void nosta_rahaa::on_Sulje_btn_clicked()
{
    window()->close();
}

/*void nosta_rahaa::getcrdnostoSlot(QString ctilinnumero)
{
    ctilinnumero = 1;
}

void nosta_rahaa::haeCrdNosto(QString cnosto)
{
    cnosto = cnosto+" €";

}

void nosta_rahaa::on_kakskyt_btn_clicked()
{
    cnosto = "20";
}*/

