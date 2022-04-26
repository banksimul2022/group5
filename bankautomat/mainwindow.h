#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rfid_dll.h"
#include "pinkoodi_dll.h"
#include "pinkoodi_engine.h"
#include "restapi.h"
#include <QTimer>
#include "paaikkuna.h"
#include "creditdebit.h"




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
    void on_HYVAKSY_clicked();
    void RFID_slot(QByteArray);
    void pinkoodi_slot(QString);
    void startTimer();
    void login_slot(QString);

private:
    Ui::MainWindow *ui;
    RFID_DLL * pRFID_DLL;
    Pinkoodi_dll * pPinkoodi_dll;
    RESTAPI * pRESTAPI_DLL;
    QTimer * timer;
    Paaikkuna * Ppaaikkuna;
    creditdebit * pcreditdebit;

};

#endif // MAINWINDOW_H
