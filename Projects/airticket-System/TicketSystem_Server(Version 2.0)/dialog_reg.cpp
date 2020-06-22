#include "dialog_reg.h"
#include "ui_dialog_reg.h"

Dialog_reg::Dialog_reg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_reg)
{
    ui->setupUi(this);
}

Dialog_reg::~Dialog_reg()
{
    delete ui;
}
