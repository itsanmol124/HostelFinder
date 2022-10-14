#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase usersdb;
    void connClose(){
        usersdb.close();
        usersdb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen(){
        usersdb=QSqlDatabase::addDatabase("QSQLITE");
        usersdb.setDatabaseName("C:/Users/lucky/OneDrive/Documents/Hostel Finder CPP Project/HostelFinder/hostel.db");
        if(!usersdb.open()){
            qDebug() << ("Failed");
            return false;
        }
        else{
            qDebug() << ("Connected");
            return true;
        }
    }


private slots:
    void on_hostelFinderBtn_clicked();

    void on_searchHostelsBtn_clicked();

    void on_boysHostelsBtn_clicked();

    void on_girlsHostelsBtn_clicked();

    void on_dashboardBtn_clicked();

    void on_signUpBtn_clicked();

    void on_pswdHideBtn_clicked();

    void on_pswdShowBtn_clicked();

    void on_login_btn_clicked();


private:
    Ui::MainWindow *ui;
};
//int MainWindow :: idn=1;
#endif // MAINWINDOW_H
