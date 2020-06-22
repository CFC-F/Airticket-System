#include "login.h"
#include "ui_login.h"
#include<QMessageBox>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    flag = 0;
}

login::~login()
{
    delete ui;
}

//售票登录设计
void login::on_pushButton_clicked()
{
    flag = 1;
    if((ui->lineEdit->text()=="lsh"&&ui->lineEdit_2->text()=="12345")||\
        (ui->lineEdit->text()=="cfc"&&ui->lineEdit_2->text()=="12345")||\
        (ui->lineEdit->text()=="lxm"&&ui->lineEdit_2->text()=="12345")){
        accept();
    }
    else{
        QMessageBox::warning(this,tr("warning"),tr("user name or password error!"),QMessageBox::Yes);
    }
}


void login::on_pushButton_2_clicked()
{
    flag = 2;
    accept();
}
