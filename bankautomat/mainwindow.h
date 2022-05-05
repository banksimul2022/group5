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
#include "nosta_rahaa.h"

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
    void haenimi(QString,QString);
    void haevelka(QString);
    void haesaldo(QString);
    void haedebittapahtuma(QString);
    void haecredittapahtuma(QString);

signals:
    void asiakasSignal(QString);
    void creditSignal(QString);
    void debitSignal(QString);
    void debittapahtumaSignal(QString);
    void credittapahtumaSignal(QString);
    void saldoPaaikkunaan(QString);
    void saldoSignaali(QString);

private slots:
    void on_HYVAKSY_clicked();
    void RFID_slot(QByteArray);
    void pinkoodi_slot(QString);
    void startTimer();
    //void talletusSlot(QString);
    void login_slot(QByteArray);
    void tiliValittuSlot(QString);
    void paivitusSlot(QString);
    void getasiakasSlot(QString);
    void getcreditSlot(QString);
    void getdebitSlot(QString);
    void getdebittapahtumaSlot(QString);
    void getcredittapahtumaSlot(QString);

private:
    Ui::MainWindow *ui;
    RFID_DLL * pRFID_DLL;
    Pinkoodi_dll * pPinkoodi_dll;
    RESTAPI * pRESTAPI_DLL;
    QTimer * timer;
    Paaikkuna * Ppaaikkuna;
    creditdebit * pcreditdebit;
    talleta_rahaa * ptalleta_rahaa;
    nosta_rahaa * pnosta_rahaa;
    QString asiakas;
    QString tilitapahtuma;
    QString credit;
    QString debit;
    QString valinta;
    QString paivitus;
    QString debittapahtuma;
    QString tili;
};
#endif // MAINWINDOW_H
