#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pRFID_DLL = new RFID_DLL;
    pPinkoodi_dll = new Pinkoodi_dll;

    pRFID_DLL->luekortinid();
    connect(pRFID_DLL,SIGNAL(laheta(QByteArray)),
            this, SLOT(RFID_slot(QByteArray)));

    connect(pPinkoodi_dll, SIGNAL(pinkoodi_signal(QString)),
            this, SLOT(pinkoodi_slot(QString)));


}

MainWindow::~MainWindow()
{
    delete ui;

    delete pRFID_DLL;
    pRFID_DLL = nullptr;
    delete pPinkoodi_dll;
    pPinkoodi_dll = nullptr;

}

void MainWindow::RFID_slot(QByteArray)
{
    pPinkoodi_dll->show();
}

void MainWindow::pinkoodi_slot(QString pinkoodi)
{
    qDebug()<<"pinkoodi exessä: " + pinkoodi;
}

void MainWindow::on_pushButton_clicked()
{
    pPinkoodi_dll->show();
}

