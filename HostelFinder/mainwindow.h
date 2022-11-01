#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <ui_mainwindow.h>
#include <QMainWindow>

#include <dashboard.h>
#include<QMessageBox>
#include <QtSql>
#include <QDebug>
#include <QCloseEvent>
#include <QFileDialog>

#define path "C:/Users/lucky/OneDrive/Documents/Hostel Finder CPP Project/HostelFinder/database/hostel.db"

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

    void showPswrd(QLineEdit *inp, int n=0){
        if(n==1)
            inp->setEchoMode(QLineEdit::Normal);
        else
            inp->setEchoMode(QLineEdit::Password);
    }

    void signUpPageReset(int n=0){
        if(n==1){
            ui->in_fullname->setText("");
            ui->in_mobileNo->setText("");
            ui->in_pswrd->setText("");
            ui->in_confirm_pswrd->setText("");
        }
        showPswrd(ui->in_pswrd);
        showPswrd(ui->in_confirm_pswrd);
        ui->checkBox_signUp_pswrd->setChecked(false);
    }

    void loginPageReset(int n=0){
        if(n==1){
            ui->in_login_mobileNo->setText("");
            ui->in_login_pswrd->setText("");
        }
        showPswrd(ui->in_login_pswrd);
        ui->checkBox_login_pswrd->setChecked(false);
    }

    int checkPassword(QString first,QString second){
        if(first==second)
            return 1;
        else
            return 0;
    }

    void searchHostelPageReset(){
        ui->leftMenuContainer->hide();
        ui->stackedWidget->setCurrentWidget(ui->searchHostels_page);
        ui->tableWidget->setRowCount(0);
        ui->hostelInfo_frame->hide();
    }

    void searchHostels(QString text, QString category, int n=0){
        ui->tableWidget->setRowCount(0);
        ui->tableWidget->setColumnCount(4);
        QStringList labels;
        labels << "Image" << "Hostel Name" << "Category" << "Location";
        ui->tableWidget->setHorizontalHeaderLabels(labels);

        connOpen();
        int rowCount = 0;
        QSqlQuery qry;

        if(n==1)
            qry.prepare("select * from hostels where location='"+text+"' and category='"+category+"' order by name");
        else if(n==2)
            qry.prepare("select * from hostels where category='"+category+"' order by name");
        else
            qry.prepare("select * from hostels where name='"+text+"' and category='"+category+"' order by name");

        if(qry.exec()){
            while(qry.next()){
    //            QTableWidgetItem *id = new QTableWidgetItem;
                QTableWidgetItem *image = new QTableWidgetItem;
                QTableWidgetItem *name = new QTableWidgetItem;
                QTableWidgetItem *location = new QTableWidgetItem;
                QTableWidgetItem *category = new QTableWidgetItem;

    //            id->setText(qry.value(0).toString());
                name->setText(qry.value(1).toString());
                category->setText(qry.value(4).toString());
                location->setText(qry.value(2).toString()+", "+qry.value(3).toString());
                QByteArray outByteArray = qry.value(26).toByteArray();
                QPixmap outPixmap;
                outPixmap.loadFromData(outByteArray,"JPG");
                image->setData(Qt::DecorationRole,outPixmap.scaled(80,80,Qt::KeepAspectRatio,Qt::SmoothTransformation));

                ui->tableWidget->insertRow(rowCount);
    //            ui->tableWidget->setItem(rowCount,0,id);
                ui->tableWidget->setItem(rowCount,0,image);
                ui->tableWidget->setItem(rowCount,1,name);
                ui->tableWidget->setItem(rowCount,2,category);
                ui->tableWidget->setItem(rowCount,3,location);

                ui->tableWidget->setColumnWidth(0,80);
                ui->tableWidget->setRowHeight(rowCount,80);
    //            ui->tableWidget->setColumnWidth(0,10);
                ui->tableWidget->setColumnWidth(1,200);

                rowCount++;
            }
            if(rowCount==0){
                QMessageBox::information(this,tr("Search Hostels"),tr("No hostels found\n"));
                ui->hostelInfo_frame->hide();
            }
      }
      connClose();
}
private slots:
    void on_hostelFinderBtn_clicked();

    void on_searchHostelsMenuBtn_clicked();

    void on_boysHostelsMenuBtn_clicked();

    void on_girlsHostelsMenuBtn_clicked();

    void on_loginMenuBtn_clicked();

    void on_signUpMenuBtn_clicked();

    void on_signUpBtn_clicked();

    void on_signUp_cancelBtn_clicked();

    void on_checkBox_signUp_pswrd_stateChanged(int arg1);

    void on_loginBtn_clicked();

    void on_checkBox_login_pswrd_stateChanged(int arg1);

    void on_createOneBtn_clicked();

    void on_login_cancelBtn_clicked();

    void on_exitBtn_clicked();

    void on_backBtn_clicked();

    void on_searchHostelsBtn_clicked();

    void on_tableWidget_cellClicked(int row);

    void on_searchBoysHostelBtn_clicked();

    void on_searchGirlsHostelBtn_clicked();

    void on_refreshBoysHostelBtn_clicked();

    void on_refreshGirlsHostelBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
