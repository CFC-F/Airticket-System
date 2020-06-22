#include "mainwindow.h"
#include "login.h"
#include <QApplication>
#include "dialog_reg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    login d1;
    Dialog_reg d2;
    d1.setWindowTitle("服务端登录界面");
    d2.setWindowTitle("服务端注册界面");
    w.setWindowTitle("服务端界面");
    if(d1.exec()==QDialog::Accepted)
    {
        switch (d1.flag)
        {
            case 1:
                w.show();
                break;
            case 2:
                d2.show();
                break;
            default:
                break;
          }
    }
    return a.exec();
}


