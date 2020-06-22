#include "login_reg.h"
#include "ui_login_reg.h"

login_reg::login_reg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login_reg)
{
    ui->setupUi(this);
}

login_reg::~login_reg()
{
    delete ui;
}
