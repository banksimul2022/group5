#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pRFID_DLL = new RFID_DLL;
    pRFID_DLL->printti();

}

MainWindow::~MainWindow()
{
    delete ui;

    delete pRFID_DLL;
    pRFID_DLL = nullptr;

}

