﻿#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pRFID_DLL = new RFID_DLL;
    pPinkoodi_dll = new Pinkoodi_dll;
    timer = new QTimer;

    pRFID_DLL->luekortinid();
    startTimer();


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
    delete timer;
    timer = nullptr;

}

void MainWindow::on_HYVAKSY_clicked()
{

}

void MainWindow::RFID_slot(QByteArray)
{
    pPinkoodi_dll->show();
}

void MainWindow::pinkoodi_slot(QString pinkoodi)
{
    qDebug()<<"pinkoodi exessä: " + pinkoodi;
}

void MainWindow::startTimer()
{
    qDebug() << "start timer 10sec";
    timer->start(10000);
}

