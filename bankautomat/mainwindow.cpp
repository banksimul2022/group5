#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "paaikkuna.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pRFID_DLL = new RFID_DLL;
    pPinkoodi_dll = new Pinkoodi_dll;
    pRESTAPI_DLL = new RESTAPI;
    timer = new QTimer;
    Ppaaikkuna = new Paaikkuna;
    pcreditdebit = new creditdebit;

    pRFID_DLL->luekortinid();

    startTimer();
    connect(pRFID_DLL,SIGNAL(laheta(QByteArray)),
                this, SLOT(RFID_slot(QByteArray)));

    connect(pPinkoodi_dll, SIGNAL(pinkoodi_signal(QString)),
                this, SLOT(pinkoodi_slot(QString)));

    connect(pRESTAPI_DLL, SIGNAL(login_signal(QByteArray)),
            this, SLOT(login_slot(QByteArray)));

    connect(pRESTAPI_DLL, SIGNAL(asiakasSignal(QString)),
            this, SLOT(getasiakasSlot(QString)));

    connect(pRESTAPI_DLL, SIGNAL(creditSignal(QString)),
            this, SLOT(getcreditSlot(QString)));

    connect(pRESTAPI_DLL, SIGNAL(debitSignal(QString)),
            this, SLOT(getcreditSlot(QString)));

    connect(pRESTAPI_DLL, SIGNAL(debittapahtumaSignal(QString)),
            this,SLOT(getdebittapahtumaSlot(QString)));

    connect(pRESTAPI_DLL, SIGNAL(credittapahtumaSignal(QString)),
            this,SLOT(getcredittapahtumaSlot(QString)));

    connect(pRESTAPI_DLL, SIGNAL(nimiToExe(QString,QString)),
            this, SLOT(haenimi(QString,QString)));

    connect(pRESTAPI_DLL, SIGNAL(velkaToExe(QString)),
            this, SLOT(haevelka(QString)));

    connect(pRESTAPI_DLL, SIGNAL(saldoToExe(QString)),
            this,SLOT(haesaldo(QString)));

    connect(pRESTAPI_DLL, SIGNAL(debittapahtumaToExe(QString)),
            this,SLOT(haedebittapahtuma(QString)));

    connect(pRESTAPI_DLL, SIGNAL(credittapahtumaToExe(QString)),
            this,SLOT(haecredittapahtuma(QString)));

    connect(pcreditdebit,SIGNAL(tiliValittuSignal(QString)),
            this,SLOT(tiliValittuSlot(QString)));

}
MainWindow::~MainWindow()
{
    delete ui;

    delete pRFID_DLL;
    pRFID_DLL = nullptr;

    delete pPinkoodi_dll;
    pPinkoodi_dll = nullptr;

    delete  pRESTAPI_DLL;
    pRESTAPI_DLL = nullptr;

    delete timer;
    timer = nullptr;

    delete Ppaaikkuna;
    Ppaaikkuna = nullptr;

    delete pcreditdebit;
    pcreditdebit = nullptr;

}

void MainWindow::on_HYVAKSY_clicked()
{
    pPinkoodi_dll->show();
}

void MainWindow::RFID_slot(QByteArray)
{
    pPinkoodi_dll->show();

}

void MainWindow::pinkoodi_slot(QString pinkoodi)
{
    qDebug()<<"pinkoodi exessä: " + pinkoodi;
    pRESTAPI_DLL->setPin("1", pinkoodi);
}

void MainWindow::startTimer()
{
    qDebug() << "start timer 10sec";
    timer->start(10000);
}

void MainWindow::login_slot(QByteArray truefalse)
{
    qDebug()<< "login slotissa: " + truefalse;
    pRESTAPI_DLL->setwebToken(truefalse);

    if(truefalse.length() > 5)
    {

        pPinkoodi_dll->close();

        pcreditdebit->show();

    }
    else if(truefalse == "false")
    {
        qDebug()<<"vaara pinkoodi";
        pPinkoodi_dll->pinkoodi_vaarin();
    }
}

void MainWindow::tiliValittuSlot(QString tilinValinta)
{
    qDebug() << "Tili valittu: " + tilinValinta;
    pRESTAPI_DLL->getAsiakas(asiakas);

    if(tilinValinta=="credit")    {
        pRESTAPI_DLL->getCredit(credit);
        Ppaaikkuna->show();
        pRESTAPI_DLL->getcreditTapahtuma(tilitapahtuma);
    }

    if(tilinValinta=="debit") {
        pRESTAPI_DLL->getDebit(debit);
        pRESTAPI_DLL->getdebitTapahtuma(tilitapahtuma);
        Ppaaikkuna->show();
    }
}

void MainWindow::haenimi(QString nimi, QString sukunimi)
{
    nimi = nimi+" " + sukunimi;
    Ppaaikkuna->asetaNimi(nimi);

    if(Ppaaikkuna->isMinimized()) {
        Ppaaikkuna->asetaNimi(nullptr);
    }
}

void MainWindow::haevelka(QString velka)
{
    velka = velka+" €";
    Ppaaikkuna->asetaVelka(velka);

    if(Ppaaikkuna->isMinimized()) {
        Ppaaikkuna->asetaVelka(nullptr);
    }
}

void MainWindow::haesaldo(QString saldo)
{
    saldo = saldo+" €";
    Ppaaikkuna->asetaSaldo(saldo);

    if(Ppaaikkuna->isMinimized()) {
        Ppaaikkuna->asetaSaldo(nullptr);
    }
}

void MainWindow::haedebittapahtuma(QString debittapahtumat)
{
    Ppaaikkuna->asetaTapahtuma(debittapahtumat);
}


void MainWindow::haecredittapahtuma(QString credittapahtumat)
{
    Ppaaikkuna->asetaTapahtuma(credittapahtumat);
}

void MainWindow::getdebittapahtumaSlot(QString did)
{
    did = 1;
}

void MainWindow::getcredittapahtumaSlot(QString cid)
{
    cid = 1;
}



void MainWindow::getasiakasSlot(QString tunnus)
{
    tunnus = 1;
}

void MainWindow::getcreditSlot(QString ctilinnumero)
{
    ctilinnumero = 1;
}

void MainWindow::getdebitSlot(QString dtilinnumero)
{
    dtilinnumero = 1;
}
