#include "dialog_pay.h"
#include "ui_dialog_pay.h"

dialog_pay::dialog_pay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_pay)
{
    ui->setupUi(this);
}

dialog_pay::~dialog_pay()
{
    delete ui;
}
