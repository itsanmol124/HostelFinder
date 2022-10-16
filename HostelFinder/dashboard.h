#ifndef DASHBOARD_H
#define DASHBOARD_H
#include <QMainWindow>

#include<mainwindow.h>
#include <QMessageBox>
#include <QCloseEvent>


namespace Ui {
class dashboard;
}

class dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit dashboard(QWidget *parent = nullptr);
    ~dashboard();

    //Function Definitions
    void closeEvent (QCloseEvent *event)
    {
            QMessageBox::StandardButton resBtn = QMessageBox::question( this,"Exit",
                                                                        tr("Are you sure want to exit?\nThis will close the entire application"),
                                                                        QMessageBox::No | QMessageBox::Yes,
                                                                        QMessageBox::No);
            if (resBtn == QMessageBox::Yes) {
                event->accept();
            }
            else {
                event->ignore();
            }
    }

private slots:
    void on_logOutBtn_clicked();

private:
    Ui::dashboard *ui;
};

#endif // DASHBOARD_H
