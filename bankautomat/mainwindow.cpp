#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Hyvaksy_clicked()
{
    pvalikko = new valikko;
    pvalikko->exec();
    ui->lineEdit->setText(pvalikko->getText());
    delete pvalikko;
}

