#ifndef TALLETA_RAHAA_H
#define TALLETA_RAHAA_H

#include <QDialog>

namespace Ui {
class talleta_rahaa;
}

class talleta_rahaa : public QDialog
{
    Q_OBJECT

public:
    explicit talleta_rahaa(QWidget *parent = nullptr);
    ~talleta_rahaa();

private slots:
    void on_Sulje_clicked();

private:
    Ui::talleta_rahaa *ui;
};

#endif // TALLETA_RAHAA_H
