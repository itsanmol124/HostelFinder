#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <ui_mainwindow.h>
#include <QMainWindow>

#include <dashboard.h>
#include <QMessageBox>
#include <QPixmap>
#include <QtSql>
#include <QDebug>
#include <QCloseEvent>
#include <QFileDialog>
#include <QDesktopServices>
#include <QUrl>

//Database Path
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

    QSqlDatabase hosteldb;

    //Function Definitions
    void closeEvent (QCloseEvent *event);

    void connClose();

    bool connOpen();

    int confirmDialogBox(QString title, QString message);

    void showPswrd(QLineEdit *inp, int n=0);

    void signUpPageReset(int n=0);

    void loginPageReset(int n=0);

    int checkMobileNumber(QString mobile);

    int validatePassword(QString pwd);

    int checkPassword(QString first, QString second);

    QString encryptPassword(QString pwd);

    void searchHostelPageReset();

    void searchHostels(QString text, QString category, int n=0);

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

    void on_refreshBoysHostelBtn_clicked();

    void on_refreshGirlsHostelBtn_clicked();

    void on_viewOnMapBtn_clicked();

    void on_in_boysHostelName_textChanged(const QString &hostelName);

    void on_in_girlsHostelName_textChanged(const QString &hostelName);

    void on_search_location_currentIndexChanged();

    void on_search_category_currentIndexChanged();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
