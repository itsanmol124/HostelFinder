#ifndef DASHBOARD_H
#define DASHBOARD_H
#include "ui_dashboard.h"
#include <QMainWindow>

#include <QMessageBox>
#include <QCloseEvent>

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
    void closeEvent (QCloseEvent *event)
    {
            QMessageBox::StandardButton resBtn = QMessageBox::question( this,"Exit",
                                                                        tr("Are you sure want to exit?\nThis will close the entire application\n"),
                                                                        QMessageBox::No | QMessageBox::Yes,
                                                                        QMessageBox::No);
            if (resBtn == QMessageBox::Yes) {
                event->accept();
            }
            else {
                event->ignore();
            }
    }
    void resetChangePswrdPage(){
        ui->in_newPswrd->setText("");
        ui->in_confirmNewPswrd->setText("");
        ui->checkBox_showChangePswrd->setChecked(false);
    }

    void saveHostelInfo(int n=0);

    void addHostelPageReset(){
        ui->in_hostelName->clear();
        ui->in_price1->clear();
        ui->in_price2->clear();
        ui->in_price3->clear();
        ui->in_price4->clear();
        ui->in_price1->hide();
        ui->in_price2->hide();
        ui->in_price3->hide();
        ui->in_price4->hide();
        ui->in_oneSeater->setChecked(false);
        ui->in_twoSeater->setChecked(false);
        ui->in_threeSeater->setChecked(false);
        ui->in_fourSeater->setChecked(false);
        ui->in_24HrsElec->setChecked(false);
        ui->in_5GWiFi->setChecked(false);
        ui->in_hotWater->setChecked(false);
        ui->in_vegFood->setChecked(false);
        ui->in_persLocker->setChecked(false);
        ui->in_laundary->setChecked(false);
        ui->in_parking->setChecked(false);
        ui->in_noSmoking->setChecked(false);
        ui->in_cctv->setChecked(false);
    }
private slots:

    void on_logOutBtn_clicked();

    void on_dashboardBtn_clicked();

    void on_addHostelMenuBtn_clicked();

    void on_changePasswordBtn_clicked();

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

private:
    Ui::dashboard *ui;
};

#endif // DASHBOARD_H
