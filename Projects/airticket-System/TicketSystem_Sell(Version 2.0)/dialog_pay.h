#ifndef DIALOG_PAY_H
#define DIALOG_PAY_H

#include <QDialog>

namespace Ui {
class dialog_pay;
}

class dialog_pay : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_pay(QWidget *parent = nullptr);
    ~dialog_pay();

private:
    Ui::dialog_pay *ui;
};

#endif // DIALOG_PAY_H
