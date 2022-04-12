#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objectLogin=new Login;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectLogin;
    ui=nullptr;
    objectLogin=nullptr;

}


void MainWindow::on_BtnLogin_clicked()
{
    objectLogin->show();
}

