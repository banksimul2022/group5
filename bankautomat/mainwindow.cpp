#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "paaikkuna.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pRFID_DLL = new RFID_DLL;
    pPinkoodi_dll = new Pinkoodi_dll;
    pRESTAPI_DLL = new RESTAPI;
    timer = new QTimer;
    Ppaaikkuna = new Paaikkuna;
    pcreditdebit = new creditdebit;

    pRFID_DLL->luekortinid();

    startTimer();
    connect(pRFID_DLL,SIGNAL(laheta(QByteArray)),
                this, SLOT(RFID_slot(QByteArray)));

    connect(pPinkoodi_dll, SIGNAL(pinkoodi_signal(QString)),
                this, SLOT(pinkoodi_slot(QString)));

    connect(pRESTAPI_DLL, SIGNAL(login_signal(QString)),
            this, SLOT(login_slot(QString)));

    connect(pRESTAPI_DLL, SIGNAL(asiakasSignal(QString)),
            this, SLOT(getasiakasSlot(QString)));

    connect(pRESTAPI_DLL, SIGNAL(nimiToExe(QString)),
            this, SLOT(haenimi(QString)));

    connect(pcreditdebit,SIGNAL(tiliValittuSignal(QString)),
            this,SLOT(tiliValittuSlot(QString)));

}
MainWindow::~MainWindow()
{
    delete ui;

    delete pRFID_DLL;
    pRFID_DLL = nullptr;

    delete pPinkoodi_dll;
    pPinkoodi_dll = nullptr;

    delete  pRESTAPI_DLL;
    pRESTAPI_DLL = nullptr;

    delete timer;
    timer = nullptr;

    delete Ppaaikkuna;
    Ppaaikkuna = nullptr;

    delete pcreditdebit;
    pcreditdebit = nullptr;

}

void MainWindow::haenimi(QString nimi)
{
    asiakkaannimi = nimi;
}

void MainWindow::on_HYVAKSY_clicked()
{
    pPinkoodi_dll->show();
    pRESTAPI_DLL->getAsiakas(asiakas);

}

void MainWindow::RFID_slot(QByteArray)
{
    pPinkoodi_dll->show();

}

void MainWindow::pinkoodi_slot(QString pinkoodi)
{
    qDebug()<<"pinkoodi exessä: " + pinkoodi;
    pRESTAPI_DLL->setPin("1", pinkoodi);
}

void MainWindow::startTimer()
{
    qDebug() << "start timer 10sec";
    timer->start(10000);
}

void MainWindow::login_slot(QString truefalse)
{
    qDebug()<< "login slotissa: " + truefalse;

    if(truefalse.length() > 5)
    {

        pPinkoodi_dll->close();
        qDebug()<< "login slotissa: " + truefalse;

        pcreditdebit->show();

    }
    else if(truefalse == "false")
    {
        qDebug()<<"vaara pinkoodi";
        pPinkoodi_dll->pinkoodi_vaarin();
    }
}

void MainWindow::tiliValittuSlot(QString tilinValinta)
{
    qDebug() << "Tili valittu: " + tilinValinta;

    Ppaaikkuna->show();

}

void MainWindow::getasiakasSlot(QString tunnus)
{
    qDebug() << "hauskaa" + tunnus;
}

