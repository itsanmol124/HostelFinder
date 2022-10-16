#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Setting home page as default loading page
    ui->stackedWidget->setCurrentWidget(ui->home_page);

    //Setting image of pages
    QPixmap homepix(":/img/img/hostel.jpg");
    ui->label_pic_home->setPixmap(homepix.scaled(500,500,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    QPixmap loginpix(":/img/img/login.jpg");
    ui->label_pic_login->setPixmap(loginpix.scaled(500,500,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    QPixmap signUppix(":/img/img/signup.png");
    ui->label_pic_signUp->setPixmap(signUppix.scaled(500,500,Qt::KeepAspectRatio,Qt::SmoothTransformation));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_hostelFinderBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->home_page);
}


void MainWindow::on_searchHostelsBtn_clicked()
{

}


void MainWindow::on_boysHostelsBtn_clicked()
{

}


void MainWindow::on_girlsHostelsBtn_clicked()
{

}


void MainWindow::on_loginMenuBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->login_page);
    loginPageReset();

}


void MainWindow::on_signUpMenuBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->signUp_page);
    signUpPageReset();
}


void MainWindow::on_pswdHideBtn_clicked()
{
      showPassword(ui->in_pswrd,ui->pswdHideBtn,ui->pswdShowBtn);
}


void MainWindow::on_pswdShowBtn_clicked()
{
    showPassword(ui->in_pswrd,ui->pswdShowBtn,ui->pswdHideBtn,1);
}


void MainWindow::on_signUpBtn_clicked()
{
    QString fullname,mobileNo,password;
    fullname=ui->in_fullname->text().toUpper();
    mobileNo=ui->in_mobileNo->text();
    password=ui->in_pswrd->text();
    if(!connOpen()){
        qDebug() << "Database is not open";
        return;
    }
    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from hostels where ownercontactNo='"+mobileNo+"'");
    if(qry.exec()){
        int count=0;
        while(qry.next()){
            count++;
        }
        if(count==1){
            QMessageBox::warning(this,tr("Error"),tr("User already exists"));
            signUpPageReset();
        }
        else{
            qry.prepare("insert into hostels (password,ownerName,ownercontactNo) values ('"+password+"','"+fullname+"','"+mobileNo+"')");
            if(qry.exec()){
                QMessageBox::information(this,tr("Sign Up"),tr("Account Created Successfully"));
                signUpPageReset(1);
                connClose();
           }
           else{
                QMessageBox::warning(this,tr("Error"),tr("Account cannot be created"));
           }
        }
    }
}


void MainWindow::on_pswdShowBtn_2_clicked()
{
    showPassword(ui->in_confirm_pswrd,ui->pswdShowBtn_2,ui->pswdHideBtn_2,1);
}


void MainWindow::on_pswdHideBtn_2_clicked()
{
    showPassword(ui->in_confirm_pswrd,ui->pswdHideBtn_2,ui->pswdShowBtn_2);
}


void MainWindow::on_signUp_cancelBtn_clicked()
{
    signUpPageReset(1);
}

void MainWindow::on_createAccountBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->signUp_page);
    signUpPageReset(1);
}


void MainWindow::on_login_pswdShowBtn_clicked()
{
    showPassword(ui->in_login_pswrd,ui->login_pswdShowBtn,ui->login_pswdHideBtn,1);
}


void MainWindow::on_login_pswdHideBtn_clicked()
{
    showPassword(ui->in_login_pswrd,ui->login_pswdHideBtn,ui->login_pswdShowBtn);
}


void MainWindow::on_loginBtn_clicked()
{
    loginPageReset(1);
//    ui->stackedWidget->setCurrentWidget(ui->dashboard_page);
    hide();
    dashboard *dboard;
    dboard = new class dashboard();
    dboard->show();
}

