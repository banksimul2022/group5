#ifndef VALIKKO_H
#define VALIKKO_H

#include <QDialog>

namespace Ui {
class valikko;
}

class valikko : public QDialog
{
    Q_OBJECT

public:
    explicit valikko(QWidget *parent = nullptr);
    ~valikko();
    QString getText();

private:
    Ui::valikko *ui;
    QString text;
};

#endif // VALIKKO_H
