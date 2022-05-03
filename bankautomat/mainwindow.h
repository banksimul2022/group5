#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

#include "rfid_dll.h"
#include "pinkoodi_dll.h"
#include "restapi.h"
#include "pinkoodi_engine.h"

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

public slots:

signals:
    void asiakasSignal(QString);

private slots:
    void on_HYVAKSY_clicked();
    void RFID_slot(QByteArray);
    void pinkoodi_slot(QString);
    void startTimer();
    void login_slot(QByteArray);
    void tiliValittuSlot(QString);
    void getasiakasSlot(QString);
    void haenimi(QString,QString);
    void saldoSlot(QString);

private:
    Ui::MainWindow *ui;
    RFID_DLL * pRFID_DLL;
    Pinkoodi_dll * pPinkoodi_dll;
    RESTAPI * pRESTAPI_DLL;
    QTimer * timer;
    Paaikkuna * Ppaaikkuna;
    creditdebit * pcreditdebit;
    QString asiakas;
    QString valinta;


};

#endif // MAINWINDOW_H
