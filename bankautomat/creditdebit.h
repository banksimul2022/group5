#ifndef CREDITDEBIT_H
#define CREDITDEBIT_H

#include <QDialog>
#include "restapi.h"

namespace Ui {
class creditdebit;
}

class creditdebit : public QDialog
{
    Q_OBJECT

public:
    explicit creditdebit(QWidget *parent = nullptr);
    ~creditdebit();

private slots:
    void on_DEBIT_clicked();
    void on_CREDIT_clicked();
    void on_asiakasTiedot_clicked();


private:
    Ui::creditdebit *ui;
    RESTAPI * pRESTAPI_DLL;

signals:
    void tiliValittuSignal(QString);
    void asiakasSignal(QString);

};

#endif // CREDITDEBIT_H
