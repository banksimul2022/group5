#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pRFID_DLL = new RFID_DLL;
<<<<<<< HEAD
    pRFID_DLL->luekortinid();
=======
    pRFID_DLL->printti();
    pPinkoodi_dll = new Pinkoodi_dll;

>>>>>>> 61422029d4499ea6ecb70d7d673bc09aedc33b22
}

MainWindow::~MainWindow()
{
    delete ui;

    delete pRFID_DLL;
    pRFID_DLL = nullptr;

}

