#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rfid_dll.h"
#include "pinkoodi_dll.h"
#include "pinkoodi_engine.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
<<<<<<< HEAD
    void on_HYVAKSY_clicked();
=======
    void RFID_slot(QByteArray);
    void pinkoodi_slot(QString);

    void on_pushButton_clicked();
>>>>>>> 25e5b889254ed63f4e8f5602babe973b8de6a929

private:
    Ui::MainWindow *ui;
    RFID_DLL * pRFID_DLL;
    Pinkoodi_dll * pPinkoodi_dll;
};
#endif // MAINWINDOW_H
