#ifndef DASHBOARD_H
#define DASHBOARD_H
#include "ui_dashboard.h"
#include <QMainWindow>

namespace Ui {
class dashboard;
}

class dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit dashboard(QString id = NULL, QString username = NULL,QWidget *parent = nullptr);
    ~dashboard();

    //Function Definitions
    void closeEvent (QCloseEvent *event);

    void resetChangePswrdPage();

    void saveHostelInfo(int n=0);

    void addHostelPageReset();

private slots:

    void on_logOutBtn_clicked();

    void on_dashboardBtn_clicked();

    void on_addHostelMenuBtn_clicked();

    void on_changePswrdMenuBtn_clicked();

    void on_changePswrd_cancelBtn_clicked();

    void on_changePswrdBtn_clicked();

    void on_checkBox_showChangePswrd_stateChanged(int arg1);

    void on_addHostelBtn_clicked();

    void on_in_oneSeater_stateChanged(int arg1);

    void on_in_twoSeater_stateChanged(int arg1);

    void on_in_threeSeater_stateChanged(int arg1);

    void on_in_fourSeater_stateChanged(int arg1);

    void on_uploadImageBtn_clicked();

    void on_editHostelBtn_clicked();

    void on_updateHostelBtn_clicked();

    void on_removeHostelBtn_clicked();

    void on_deleteAccountBtn_clicked();

    void on_addEditPageCancelBtn_clicked();


private:
    Ui::dashboard *ui;
};

#endif // DASHBOARD_H
