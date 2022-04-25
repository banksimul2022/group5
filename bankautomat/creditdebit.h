#ifndef CREDITDEBIT_H
#define CREDITDEBIT_H

#include <QDialog>

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

private:
    Ui::creditdebit *ui;
};

#endif // CREDITDEBIT_H
