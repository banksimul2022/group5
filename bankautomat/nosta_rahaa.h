#ifndef NOSTA_RAHAA_H
#define NOSTA_RAHAA_H

#include <QDialog>
#include "restapi.h"

namespace Ui {
class nosta_rahaa;
}

class nosta_rahaa : public QDialog
{
    Q_OBJECT

public:
    explicit nosta_rahaa(QWidget *parent = nullptr);
    ~nosta_rahaa();

public slots:
    //void haeCrdNosto(QString);

signals:
    void crdnostoSignal(QString);

private slots:
    void on_Sulje_btn_clicked();
    //void getcrdnostoSlot(QString);

    //void on_kakskyt_btn_clicked();

private:
    Ui::nosta_rahaa *ui;
    //RESTAPI * pRESTAPI_DLL;
    //QString cnosto;
};

#endif // NOSTA_RAHAA_H
