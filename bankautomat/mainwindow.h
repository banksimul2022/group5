#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rfid_dll.h"
#include "pinkoodi_dll.h"
#include "pinkoodi_engine.h"
<<<<<<< HEAD
#include "restapi.h"

=======
#include <QTimer>
>>>>>>> 6d9666ccabd7ac91f58fe00200cbbe567d325aba

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

private:
    Ui::MainWindow *ui;
    RFID_DLL * pRFID_DLL;
    Pinkoodi_dll * pPinkoodi_dll;
<<<<<<< HEAD
    RESTAPI * pRESTAPI_DLL;
=======
    QTimer * timer;
>>>>>>> 6d9666ccabd7ac91f58fe00200cbbe567d325aba
};

#endif // MAINWINDOW_H
