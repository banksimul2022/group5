#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "paaikkuna.h"
#include "creditdebit.h"

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

    delete timer;
    timer = nullptr;

    delete Ppaaikkuna;
    Ppaaikkuna = nullptr;

    delete pcreditdebit;
    pcreditdebit = nullptr;

}

void MainWindow::on_HYVAKSY_clicked()
{
     pPinkoodi_dll->show();

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

    if(truefalse != "false")
    {
        pPinkoodi_dll->close();

        pcreditdebit->show();
    }
}

void MainWindow::tiliValittuSlot(QString tilinValinta)
{
  qDebug() << "Tili valittu: " + tilinValinta;
  Ppaaikkuna->show();
}

