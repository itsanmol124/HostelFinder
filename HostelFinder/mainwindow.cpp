#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dashboard.h"
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


void MainWindow::on_searchHostelsMenuBtn_clicked()
{
    ui->label_searchHostelsHead->setText("Search Hostels");
    searchHostelPageReset();
    ui->searchStackedWidget->setCurrentWidget(ui->search_page);

    QSqlQueryModel * modal = new QSqlQueryModel();
    connOpen();
    QSqlQuery qry;

    qry.prepare("select location from locations order by location");
    qry.exec();
    modal->setQuery(std::move(qry));
    ui->search_location->setModel(modal);
    connClose();
}


void MainWindow::on_boysHostelsMenuBtn_clicked()
{
    searchHostelPageReset();
    ui->in_boysHostelName->clear();
    ui->label_searchHostelsHead->setText("Boys Hostels");
    ui->searchStackedWidget->setCurrentWidget(ui->boysHostels_page);
    searchHostels("","Boys",2);
}


void MainWindow::on_girlsHostelsMenuBtn_clicked()
{
    searchHostelPageReset();
    ui->in_girlsHostelName->clear();
    ui->label_searchHostelsHead->setText("Girls Hostels");
    ui->searchStackedWidget->setCurrentWidget(ui->girlsHostels_page);
    searchHostels("","Girls",2);
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

void MainWindow::on_signUpBtn_clicked()
{
    QString fullname,mobileNo,password,confirmPswrd;
    fullname=ui->in_fullname->text();
    mobileNo=ui->in_mobileNo->text();
    password=ui->in_pswrd->text();
    confirmPswrd=ui->in_confirm_pswrd->text();
    if(!connOpen()){
        qDebug() << "Database is not open";
        return;
    }
    if(fullname==""||mobileNo==""||password==""||confirmPswrd=="")
        QMessageBox::warning(this,tr("Error"),tr("Input fields can't be left empty\n"));

    else{
        connOpen();
        QSqlQuery qry;
        qry.prepare("select * from users where mobileNo='"+mobileNo+"'");
        if(qry.exec()){
            int count=0;
            while(qry.next()){
                count++;
            }
            if(count==1){
                QMessageBox::warning(this,tr("Error"),tr("Account already exists with\n entered Mobile Number\n"));
                signUpPageReset();
            }
            else{
                if(checkPassword(password,confirmPswrd)){
                    qry.prepare("insert into users (name,mobileNo,password) values ('"+fullname+"','"+mobileNo+"','"+password+"')");
                    if(qry.exec()){
                        if(confirmDialogBox("Sign Up","Account Created Successfully\nDo you want to go to Login page?\n")){
                            signUpPageReset(1);
                            ui->stackedWidget->setCurrentWidget(ui->login_page);
                            loginPageReset(1);
                            connClose();
                        }
                        else
                            ui->stackedWidget->setCurrentWidget(ui->home_page);
                    }
                    else
                        QMessageBox::critical(this,tr("Error"),tr("Error encountered while creating an account\n"));
                }
                else
                    QMessageBox::critical(this,tr("Error"),tr("Passwords doesnot match\n"));
            }
        }
    }
}

void MainWindow::on_checkBox_signUp_pswrd_stateChanged(int arg1)
{
    if(arg1){
        showPswrd(ui->in_pswrd,1);
        showPswrd(ui->in_confirm_pswrd,1);
    }
    else{
        showPswrd(ui->in_pswrd);
        showPswrd(ui->in_confirm_pswrd);
    }
}

void MainWindow::on_signUp_cancelBtn_clicked()
{
    signUpPageReset(1);
    ui->stackedWidget->setCurrentWidget(ui->home_page);
}

void MainWindow::on_loginBtn_clicked()
{
    QString mobileNo,password,id,username;
        mobileNo=ui->in_login_mobileNo->text();
        password=ui->in_login_pswrd->text();
        if(!connOpen()){
            qDebug() << "Database is not open";
            return;
        }
        if(mobileNo==""||password==""){
            QMessageBox::warning(this,tr("Error"),tr("Input fields can't be left empty\n"));
        }
        else{
            connOpen();
            QSqlQuery qry;
            qry.prepare("select * from users where mobileNo='"+mobileNo+"' and password='"+password+"'");
            if(qry.exec()){
                int count=0;
                while(qry.next()){
                    id = qry.value(0).toString();
                    username = qry.value(1).toString();
                    count++;
                }
                if(count==1){
                    QMessageBox::information(this,tr("Login"),tr("Login Successful\n"));
                    hide();
                    dashboard *dboard;
                    dboard = new class dashboard(id,username);
                    dboard->show();
                    connClose();
                }
                if(count<1){
                    QMessageBox::warning(this,tr("Error"),tr("Incorrect Login Creditnals\n"));
                }
            }
        }
}

void MainWindow::on_checkBox_login_pswrd_stateChanged(int arg1)
{
    if(arg1)
        showPswrd(ui->in_login_pswrd,1);
    else
        showPswrd(ui->in_login_pswrd);
}

void MainWindow::on_createOneBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->signUp_page);
    signUpPageReset(1);
}

void MainWindow::on_login_cancelBtn_clicked()
{
    loginPageReset(1);
    ui->stackedWidget->setCurrentWidget(ui->home_page);
}

void MainWindow::on_exitBtn_clicked()
{
    close();
}


void MainWindow::on_backBtn_clicked()
{
    ui->leftMenuContainer->show();
    ui->stackedWidget->setCurrentWidget(ui->home_page);
}


void MainWindow::on_searchHostelsBtn_clicked()
{
    QString search_location = ui->search_location->currentText();
    QString search_category = ui->search_category->currentText();
    searchHostels(search_location,search_category,1);
}


void MainWindow::on_tableWidget_cellClicked(int row)
{
    QString name = ui->tableWidget->item(row,1)->text();
    QString category = ui->tableWidget->item(row,2)->text();
    QString location = ui->tableWidget->item(row,3)->text();
    QString price1,price2,price3,price4;
    ui->hostelInfo_frame->show();
    ui->label_hostel_name->setText(name);
    ui->label_hostel_location->setText(location);
    ui->label_hostel_category->setText(category);
    connOpen();
    QSqlQuery qry;

    qry.prepare("select * from hostels where name = '"+name+"'and category ='"+category+"'");
    qry.exec();
    while(qry.next()){
        ui->label_totalBeds->setText(qry.value(5).toString());
        ui->label_availableBeds->setText(qry.value(6).toString());
        QString s,p;
        if(qry.value(7).toString()=="1"){
            s="1 Seater\n";
            price1=qry.value(11).toString();
            p=price1+"\n";

        }
        if(qry.value(8).toString()=="1"){
            s.append("2 Seater\n");
            price2=qry.value(12).toString()+"\n";
            p.append(price2);

        }
        if(qry.value(9).toString()=="1"){
            s.append("3 Seater\n");
            price3=qry.value(13).toString()+"\n";
            p.append(price3);
        }
        if(qry.value(10).toString()=="1"){
            s.append("4 Seater");
            price4=qry.value(14).toString()+"\n";
            p.append(price4);
        }
        ui->label_sharing_options->setText(s);

        ui->label_prices->setText(p);

        QString f;
        if(qry.value(15).toString()=="1")
            f="24 Hrs Electricity\n";
        if(qry.value(16).toString()=="1")
            f.append("5G Wifi\n");
        if(qry.value(17).toString()=="1")
            f.append("Hot Water\n");
        if(qry.value(18).toString()=="1")
            f.append("Vegeterian Food\n");
        if(qry.value(20).toString()=="1")
            f.append("Laundary\n");
        if(qry.value(19).toString()=="1")
            f.append("Personal Locker\n");
        if(qry.value(21).toString()=="1")
            f.append("Parking\n");
        if(qry.value(22).toString()=="1")
           f.append("No Smoking\n");
        if(qry.value(23).toString()=="1")
            f.append("CCTV");
        ui->label_hostel_facilities->setText(f);


        ui->label_owner_name->setText(qry.value(24).toString());
        ui->label_contact_no->setText(qry.value(25).toString());
        QByteArray outByteArray = qry.value(26).toByteArray();
        QPixmap outPixmap;
        outPixmap.loadFromData(outByteArray,"JPG");
        ui->label_hostel_image->setPixmap(outPixmap.scaled(180,160,Qt::KeepAspectRatio,Qt::SmoothTransformation));

    };
    connClose();
}



void MainWindow::on_searchBoysHostelBtn_clicked()
{
    QString name = ui->in_boysHostelName->text();
    searchHostels(name,"Boys");
}


void MainWindow::on_searchGirlsHostelBtn_clicked()
{
    QString name = ui->in_girlsHostelName->text();
    searchHostels(name,"Girls");
}


void MainWindow::on_refreshBoysHostelBtn_clicked()
{
    ui->in_boysHostelName->clear();
    searchHostels("","Boys",2);
}


void MainWindow::on_refreshGirlsHostelBtn_clicked()
{
    ui->in_girlsHostelName->clear();
    searchHostels("","Girls",2);
}

