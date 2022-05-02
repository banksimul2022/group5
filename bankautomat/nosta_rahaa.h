#ifndef NOSTA_RAHAA_H
#define NOSTA_RAHAA_H

#include <QDialog>

namespace Ui {
class nosta_rahaa;
}

class nosta_rahaa : public QDialog
{
    Q_OBJECT

public:
    explicit nosta_rahaa(QWidget *parent = nullptr);
    ~nosta_rahaa();

private slots:
    void on_Sulje_btn_clicked();

private:
    Ui::nosta_rahaa *ui;
};

#endif // NOSTA_RAHAA_H
