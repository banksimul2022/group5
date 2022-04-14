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

}

MainWindow::~MainWindow()
{
    delete ui;

    delete pRFID_DLL;
    pRFID_DLL = nullptr;
    delete pPinkoodi_dll;
    pPinkoodi_dll = nullptr;

}

void MainWindow::on_HYVAKSY_clicked()
{
    pPinkoodi_dll->show();
}
