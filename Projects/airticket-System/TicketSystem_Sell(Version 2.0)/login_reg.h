#ifndef LOGIN_REG_H
#define LOGIN_REG_H

#include <QDialog>

namespace Ui {
class login_reg;
}

class login_reg : public QDialog
{
    Q_OBJECT

public:
    explicit login_reg(QWidget *parent = nullptr);
    ~login_reg();

private:
    Ui::login_reg *ui;
};

#endif // LOGIN_REG_H
