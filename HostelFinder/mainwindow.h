#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <ui_mainwindow.h>
#include <QMainWindow>

#include <dashboard.h>
#include<QMessageBox>
#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QCloseEvent>
#define path "C:/Users/lucky/OneDrive/Documents/Hostel Finder CPP Project/HostelFinder/hostel.db"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

//Function Definitions
public:
    void closeEvent (QCloseEvent *event)
    {
        if(confirmDialogBox("Exit","Are you sure want to exit?\n")){
            event->accept();
        }
        else{
            event->ignore();
        }
    }
    int confirmDialogBox(QString title, QString message){
        QMessageBox::StandardButton resBtn = QMessageBox::question(this,title,
                                                                    message,
                                                                    QMessageBox::No | QMessageBox::Yes,
                                                                    QMessageBox::No);
        if (resBtn == QMessageBox::Yes) {
            return 1;
        } else {
            return 0;
        }
    }
    QSqlDatabase hosteldb;
    void connClose(){
        hosteldb.close();
        hosteldb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen(){
        hosteldb=QSqlDatabase::addDatabase("QSQLITE");
        hosteldb.setDatabaseName(path);
        if(!hosteldb.open()){
            qDebug() << ("Failed");
            return false;
        }
        else{
            qDebug() << ("Connected");
            return true;
        }
    }
    void showPassword(QLineEdit *in,QToolButton *btn1, QToolButton *btn2,int n=0){
        if(n==1)
            in->setEchoMode(QLineEdit::Normal);
        else
            in->setEchoMode(QLineEdit::Password);
        btn1->hide();
        btn2->show();
    }
    void signUpPageReset(int n=0){
        if(n==1){
            ui->in_fullname->setText("");
            ui->in_mobileNo->setText("");
            ui->in_pswrd->setText("");
            ui->in_confirm_pswrd->setText("");
        }
        ui->in_pswrd->setEchoMode(QLineEdit::Password);
        ui->in_confirm_pswrd->setEchoMode(QLineEdit::Password);
        ui->pswdHideBtn->hide();
        ui->pswdShowBtn->show();
        ui->pswdHideBtn_2->hide();
        ui->pswdShowBtn_2->show();
    }
    void loginPageReset(int n=0){
        if(n==1){
            ui->in_login_mobileNo->setText("");
            ui->in_login_pswrd->setText("");
        }
            ui->in_login_pswrd->setEchoMode(QLineEdit::Password);
            ui->login_pswdHideBtn->hide();
            ui->login_pswdShowBtn->show();
        }
private slots:
    void on_hostelFinderBtn_clicked();

    void on_searchHostelsBtn_clicked();

    void on_boysHostelsBtn_clicked();

    void on_girlsHostelsBtn_clicked();

    void on_loginMenuBtn_clicked();

    void on_signUpMenuBtn_clicked();

    void on_pswdHideBtn_clicked();

    void on_pswdShowBtn_clicked();

    void on_signUpBtn_clicked();

    void on_pswdShowBtn_2_clicked();

    void on_pswdHideBtn_2_clicked();

    void on_signUp_cancelBtn_clicked();

    void on_createAccountBtn_clicked();

    void on_login_pswdShowBtn_clicked();

    void on_login_pswdHideBtn_clicked();

    void on_loginBtn_clicked();



private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
