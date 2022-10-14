#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/hostel.jpg");
    ui->label_pic->setPixmap(pix.scaled(500,500,Qt::KeepAspectRatio,Qt::SmoothTransformation));
//    ui->pswdHideBtn->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_hostelFinderBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->home_page);
    this->setVisible(true);
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


void MainWindow::on_dashboardBtn_clicked()
{

}


void MainWindow::on_signUpBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->signUp_page);
    this->setVisible(true);
    ui->in_username->setText("");
    ui->in_pswrd->setText("");
    ui->in_pswrd->setEchoMode(QLineEdit::Password);
    ui->pswdHideBtn->hide();
    ui->pswdShowBtn->show();
}


void MainWindow::on_pswdHideBtn_clicked()
{
    ui->in_pswrd->setEchoMode(QLineEdit::Password);
    ui->pswdShowBtn->show();
    ui->pswdHideBtn->hide();
}


void MainWindow::on_pswdShowBtn_clicked()
{
    ui->in_pswrd->setEchoMode(QLineEdit::Normal);
    ui->pswdShowBtn->hide();
    ui->pswdHideBtn->show();
}


void MainWindow::on_login_btn_clicked()
{
    QString fullname,contactNo,username,password;
    fullname=ui->in_fullname->text().toUpper();
    contactNo=ui->in_contactNo->text();
    username=ui->in_username->text();
    password=ui->in_pswrd->text();
    if(!connOpen()){
        qDebug() << "Database is not open";
        return;
    }
    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from hostels where username='"+username+"'");
    if(qry.exec()){
        int count=0;
        while(qry.next()){
            count++;
        }
        if(count==1){
            QMessageBox::warning(this,tr("Error"),tr("User already exists"));
        }
        else{
            qry.prepare("insert into hostels (username,password,ownerName,ownercontactNo) values ('"+username+"','"+password+"','"+fullname+"','"+contactNo+"')");
            if(qry.exec()){
                QMessageBox::information(this,tr("Sign Up"),tr("Account Created Successfully"));
                connClose();
           }
           else{
                QMessageBox::warning(this,tr("Error"),tr("Account cannot be created"));
           }
        }
    }
}


