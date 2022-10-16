#include "dashboard.h"
#include "ui_dashboard.h"
#include <mainwindow.h>
dashboard::dashboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dashboard)
{
    ui->setupUi(this);


    //setWindowFlags(Qt::WindowMinMaxButtonsHint);

}

dashboard::~dashboard()
{
    delete ui;
}

void dashboard::on_logOutBtn_clicked()
{
    MainWindow *main;
    main = new class MainWindow();
    if(main->confirmDialogBox("Log Out","Are you sure want to logout?\n")){
        hide();
        main->show();
    }
}

