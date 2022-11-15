#include "dashboard.h"
#include "ui_dashboard.h"
#include "mainwindow.h"

QString uid;    //Global variable to store id of user
QByteArray hImage;  //Global variable to store hostel image

dashboard::dashboard(QString id, QString username, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dashboard)
{
    ui->setupUi(this);
    ui->label_hello->setText("Hello, " + username);
    uid = id;

    //Setting dashboard home page as default loading page
    ui->stackedWidget->setCurrentWidget(ui->dashboardHome_page);

    //Setting image of pages
    QPixmap changepix(":/img/img/changePswrd.png");
    ui->label_pic_changePassword->setPixmap(changepix.scaled(500,500,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    QPixmap dhomepix(":/img/img/dashboard.png");
    ui->label_pic_dashboardHomePage->setPixmap(dhomepix.scaled(500,500,Qt::KeepAspectRatio,Qt::SmoothTransformation));

    MainWindow dash;
    QSqlQueryModel * modal = new QSqlQueryModel();

    dash.connOpen();
    QSqlQuery qry;

    qry.prepare("select location from locations order by location");
    qry.exec();
    modal->setQuery(std::move(qry));
    ui->in_location->setModel(modal);
    dash.connClose();
}

dashboard::~dashboard()
{
    delete ui;
}

/*************************
* User-Defined Functions *
*************************/

//Function to make sure whether to close the application
void dashboard::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton resBtn = QMessageBox::question( this,"Exit",
                                                                tr("Are you sure want to exit?\nThis will close the entire application\n"),
                                                                QMessageBox::No | QMessageBox::Yes,
                                                                QMessageBox::No);
    if (resBtn == QMessageBox::Yes)
        event->accept();
    else
        event->ignore();
}

//Function to reset Change Password input fields
void dashboard::resetChangePswrdPage(){
    ui->in_newPswrd->setText("");
    ui->in_confirmNewPswrd->setText("");
    ui->checkBox_showChangePswrd->setChecked(false);
}

//Function to save hostel info into database
void dashboard::saveHostelInfo(int n){
    MainWindow dash;
    QString name,category,location,district,totalBeds,availBeds,ownerName,ownerContact,mapUrl,specialFacilities;
    QString one="0",two="0",three="0",four="0";
    QString price1,price2,price3,price4;
    QString elec="0",hotWater="0",wifi="0",vegFood="0",persLocker="0",laundary="0",parking="0",noSmoking="0",cctv="0";
    name = ui->in_hostelName->text();
    category = "Boys";
    if(ui->radioBtn_girls->isChecked()){
        category = "Girls";
    }
    location = ui->in_location->currentText();
    district = ui->in_district->currentText();
    totalBeds = ui->in_totalBeds->text();
    availBeds = ui->in_availableBeds->text();

    if(ui->in_oneSeater->isChecked()){
        one = "1";
        price1 = ui->in_price1->text();
    }
    if(ui->in_twoSeater->isChecked()){
        two = "1";
        price2 = ui->in_price2->text();
    }
    if(ui->in_threeSeater->isChecked()){
        three =  "1";
        price3 = ui->in_price3->text();
    }
    if(ui->in_fourSeater->isChecked()){
        four =  "1";
        price4 = ui->in_price4->text();
    }
    if(ui->in_24HrsElec->isChecked())
        elec= "1";
    if(ui->in_5GWiFi->isChecked())
        wifi= "1";
    if(ui->in_hotWater->isChecked())
        hotWater= "1";
    if(ui->in_vegFood->isChecked())
        vegFood= "1";
    if(ui->in_persLocker->isChecked())
        persLocker= "1";
    if(ui->in_laundary->isChecked())
        laundary= "1";
    if(ui->in_parking->isChecked())
        parking= "1";
    if(ui->in_noSmoking->isChecked())
        noSmoking= "1";
    if(ui->in_cctv->isChecked())
        cctv= "1";
    specialFacilities = ui->in_specialFacilities->toPlainText();
    mapUrl = ui->in_mapUrl->text();
    ownerName = ui->in_ownerName->text();
    ownerContact = ui->in_ownerContact->text();

    if(!dash.connOpen()){
        qDebug() << "Database is not open";
        return;
    }
    if(name==""||location==""||ownerName==""||ownerContact=="")
        QMessageBox::warning(this,tr("Error"),tr("Input fields can't be left empty\n"));
    else{
        dash.connOpen();
        QSqlQuery qry,qry1;
        qry1.prepare("select * from locations where location='"+location+"'");
        if(qry1.exec()){
            int count=0;
            while(qry1.next()){
                count++;
            }
            if(count<1){
                qry1.prepare("insert into locations (location) values('"+location+"')");
                qry1.exec();
            }
        }
        //update hostel info
        if(n==1){
            qry.prepare("update hostels set name='"+name+"',location='"+location+"',district='"+district+"',category='"+category+"',totalBeds='"+totalBeds+"',availableBeds='"+availBeds+"',single='"+one+"',double='"+two+"',triple='"+three+"',quad='"+four+"',price1='"+price1+"',price2='"+price2+"',price3='"+price3+"',price4='"+price4+"',electricity24Hrs='"+elec+"',WiFi='"+wifi+"',hotWater='"+hotWater+"',vegFood='"+vegFood+"',personalLocker='"+persLocker+"',laundary='"+laundary+"',parking='"+parking+"',noSmoking='"+noSmoking+"',cctv='"+cctv+"',ownerName='"+ownerName+"',ownerContact='"+ownerContact+"',mapUrl='"+mapUrl+"',specialFacilities='"+specialFacilities+"',hostelImage=:imageData where id ='"+uid+"' ");
            qry.bindValue(":imageData",hImage);
            if(qry.exec()){
                QMessageBox::information(this,tr("Add Hostel"),tr("Hostel information updated successfully\n"));
                ui->stackedWidget->setCurrentWidget(ui->dashboardHome_page);
                dash.connClose();
            }
            else
                QMessageBox::critical(this,tr("Error"),tr("Error encountered while updating hostel information\n"));
        }
        //add hostel into database
        else{
            qry.prepare("insert into hostels (id,name,location,district,category,totalBeds,availableBeds,single,double,triple,quad,price1,price2,price3,price4,electricity24Hrs,WiFi,hotWater,vegFood,personalLocker,laundary,parking,noSmoking,cctv,ownerName,ownerContact,mapUrl,specialFacilities,hostelImage) values ('"+uid+"','"+name+"','"+location+"','"+district+"','"+category+"','"+totalBeds+"','"+availBeds+"','"+one+"','"+two+"','"+three+"','"+four+"','"+price1+"','"+price2+"','"+price3+"','"+price4+"','"+elec+"','"+wifi+"','"+hotWater+"','"+vegFood+"','"+persLocker+"','"+laundary+"','"+parking+"','"+noSmoking+"','"+cctv+"','"+ownerName+"','"+ownerContact+"','"+mapUrl+"','"+specialFacilities+"',:imageData)");
            qry.bindValue(":imageData",hImage);
            if(qry.exec()){
                QMessageBox::information(this,tr("Add Hostel"),tr("Hostel added successfully\n"));
                ui->stackedWidget->setCurrentWidget(ui->dashboardHome_page);
                dash.connClose();
            }
            else
                QMessageBox::critical(this,tr("Error"),tr("Error encountered while adding hostel\n"));
        }
    }
}

//Function to reset Add Hostel page input fields
void dashboard::addHostelPageReset(){
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
    ui->in_specialFacilities->clear();
    ui->in_mapUrl->clear();
}

/**********************
* UI Button Functions *
**********************/

void dashboard::on_logOutBtn_clicked()
{
    MainWindow *main;
    main = new class MainWindow();
    if(main->confirmDialogBox("Log Out","Are you sure want to logout?\n")){
        hide();
        main->show();
    }
}


void dashboard::on_changePswrdMenuBtn_clicked()
{
    resetChangePswrdPage();
    ui->stackedWidget->setCurrentWidget(ui->changePassword_page);
}


void dashboard::on_dashboardBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->dashboardHome_page);
}


void dashboard::on_addHostelMenuBtn_clicked()
{
    MainWindow dash;
    dash.connOpen();
    QSqlQuery qry,qry1;
    qry.prepare("select id from hostels where id='"+uid+"'");
    if(qry.exec()){
        int count=0;
        while(qry.next()){
            count++;
        }
        if(count<1){
            ui->stackedWidget->setCurrentWidget(ui->addHostel_page);
            ui->label_title->setText("Add Hostel");
            ui->updateHostelBtn->hide();
            ui->addHostelBtn->show();
            addHostelPageReset();
            qry1.prepare("select * from users where id='"+uid+"'");
            qry1.exec();
            qry1.next();
            ui->in_ownerName->setText(qry1.value(1).toString());
            ui->in_ownerContact->setText(qry1.value(2).toString());
            dash.connClose();
        }
        else
            QMessageBox::warning(this,tr("Add Hostel"),tr("You have already added a hostel\n"));
    }
}


void dashboard::on_changePswrd_cancelBtn_clicked()
{
    resetChangePswrdPage();
    ui->stackedWidget->setCurrentWidget(ui->dashboardHome_page);
}


void dashboard::on_changePswrdBtn_clicked()
{
    MainWindow dash;
    QString newPswrd,confirmNewPswrd;
    newPswrd = ui->in_newPswrd->text();
    confirmNewPswrd = ui->in_confirmNewPswrd->text();
    if(newPswrd==""||confirmNewPswrd=="")
        QMessageBox::warning(this,tr("Change Password"),tr("Input fields can't be left empty\n"));
    else {
        if(dash.validatePassword(newPswrd)){
            if(dash.checkPassword(newPswrd,confirmNewPswrd)){
//            newPswrd = dash.encryptPassword(newPswrd);
            dash.connOpen();
            QSqlQuery qry;
            qry.prepare("update users set password ='"+newPswrd+"' where id='"+uid+"'");
            qry.exec();
            QMessageBox::information(this,tr("Change Password"),tr("Your password has been changed successfully\n"));
            resetChangePswrdPage();
            ui->stackedWidget->setCurrentWidget(ui->dashboardHome_page);
            dash.connClose();
        }
        else
            QMessageBox::critical(this,tr("Error"),tr("Passwords doesn't match\n"));
        }
    }
}


void dashboard::on_checkBox_showChangePswrd_stateChanged(int arg1)
{
    if(arg1){
        ui->in_newPswrd->setEchoMode(QLineEdit::Normal);
        ui->in_confirmNewPswrd->setEchoMode(QLineEdit::Normal);
    }
    else{
        ui->in_newPswrd->setEchoMode(QLineEdit::Password);
        ui->in_confirmNewPswrd->setEchoMode(QLineEdit::Password);
    }
}


void dashboard::on_addHostelBtn_clicked()
{
    saveHostelInfo();
}


void dashboard::on_in_oneSeater_stateChanged(int arg1)
{
    if(arg1)
        ui->in_price1->show();
    else
        ui->in_price1->hide();
}


void dashboard::on_in_twoSeater_stateChanged(int arg1)
{
    if(arg1)
        ui->in_price2->show();
    else
        ui->in_price2->hide();
}


void dashboard::on_in_threeSeater_stateChanged(int arg1)
{
    if(arg1)
        ui->in_price3->show();
    else
        ui->in_price3->hide();
}


void dashboard::on_in_fourSeater_stateChanged(int arg1)
{
    if(arg1)
        ui->in_price4->show();
    else
        ui->in_price4->hide();
}


void dashboard::on_uploadImageBtn_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,
                                                    tr("Upload Photo"),
                                                    QDir::homePath(), tr("Image Files (*jpeg *.png *.jpg *.bmp)"));
    QPixmap pix(filename);
    ui->label_hostel_img->setPixmap(pix.scaled(200,200,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    QImage image(filename);
    QBuffer buffer(&hImage);
    buffer.open(QIODevice::WriteOnly);
    QPixmap::fromImage(image).save(&buffer,"jpg");
}


void dashboard::on_editHostelBtn_clicked()
{
    MainWindow dash;
    addHostelPageReset();
    QString category,one,two,three,four;
    QString elec,hotWater,wifi,vegFood,persLocker,laundary,parking,noSmoking,cctv;
    dash.connOpen();
    QSqlQuery qry;
    qry.prepare("select * from hostels where id='"+uid+"'");
    if(qry.exec()){
        int count=0;
        while(qry.next()){
            count++;
            ui->in_hostelName->setText(qry.value(1).toString());
            ui->in_location->setCurrentText(qry.value(2).toString());
            ui->in_district->setCurrentText(qry.value(3).toString());
            ui->in_totalBeds->setValue(qry.value(5).toInt());
            ui->in_availableBeds->setValue(qry.value(6).toInt());
            category = qry.value(4).toString();
            one = qry.value(7).toString();
            two = qry.value(8).toString();
            three = qry.value(9).toString();
            four = qry.value(10).toString();
            elec = qry.value(15).toString();
            wifi = qry.value(16).toString();
            hotWater = qry.value(17).toString();
            vegFood = qry.value(18).toString();
            persLocker = qry.value(19).toString();
            laundary = qry.value(20).toString();
            parking = qry.value(21).toString();
            noSmoking = qry.value(22).toString();
            cctv = qry.value(23).toString();
            ui->in_ownerName->setText(qry.value(24).toString());
            ui->in_ownerContact->setText(qry.value(25).toString());
            ui->in_mapUrl->setText(qry.value(27).toString());
            ui->in_specialFacilities->setText(qry.value(28).toString());
            QByteArray outByteArray = qry.value(26).toByteArray();
            QPixmap outPixmap;
            outPixmap.loadFromData(outByteArray,"JPG");
            ui->label_hostel_img->setPixmap(outPixmap.scaled(200,200,Qt::KeepAspectRatio,Qt::SmoothTransformation));
            if(category=="Girls"){
                ui->radioBtn_girls->setChecked(1);
            }
            if(one=="1"){
                ui->in_oneSeater->setChecked(1);
                ui->in_price1->show();
                ui->in_price1->setText(qry.value(11).toString());
            }
            if(two=="1"){
                ui->in_twoSeater->setChecked(1);
                ui->in_price2->show();
                ui->in_price2->setText(qry.value(12).toString());
            }
            if(three=="1"){
                ui->in_threeSeater->setChecked(1);
                ui->in_price3->show();
                ui->in_price3->setText(qry.value(13).toString());
            }
            if(four=="1"){
                ui->in_fourSeater->setChecked(1);
                ui->in_price4->show();
                ui->in_price4->setText(qry.value(14).toString());
            }
            if(elec=="1")
                ui->in_24HrsElec->setChecked(1);
            if(wifi=="1")
                ui->in_5GWiFi->setChecked(1);
            if(hotWater=="1")
                ui->in_hotWater->setChecked(1);
            if(vegFood=="1")
                ui->in_vegFood->setChecked(1);
            if(persLocker=="1")
                ui->in_persLocker->setChecked(1);
            if(laundary=="1")
                ui->in_laundary->setChecked(1);
            if(parking=="1")
                ui->in_parking->setChecked(1);
            if(noSmoking=="1")
                ui->in_noSmoking->setChecked(1);
            if(cctv=="1")
                ui->in_cctv->setChecked(1);
            dash.connClose();
        }
        if(count==1){
            ui->stackedWidget->setCurrentWidget(ui->addHostel_page);
            ui->label_title->setText("Edit Hostel");
            ui->addHostelBtn->hide();
            ui->updateHostelBtn->show();
        }
        if(count<1)
            QMessageBox::warning(this,tr("Edit Hostel"),tr("You haven't added any hostel yet\n"));
    }
}

void dashboard::on_updateHostelBtn_clicked()
{
    saveHostelInfo(1);
}

void dashboard::on_removeHostelBtn_clicked()
{
    MainWindow dash;
    dash.connOpen();
    QSqlQuery qry,qry1;
    qry.prepare("select id from hostels where id='"+uid+"'");
    if(qry.exec()){
        int count=0;
        while(qry.next()){
            count++;
        }
        if(count==1){
            if(dash.confirmDialogBox("Remove Hostel","Are you sure want to remove your hostel?\n")){
                 qry1.prepare("delete from hostels where id='"+uid+"'");
                 if(qry1.exec()){
                    QMessageBox::information(this,tr("Remove Hostel"),tr("Hostel removed successfully\n"));
                    addHostelPageReset();
                    ui->stackedWidget->setCurrentWidget(ui->dashboardHome_page);
                 }
                 else
                    QMessageBox::critical(this,tr("Remove Hostel"),tr("Error encountered while removing hostel\n"));
            }
        }
        if(count<1)
            QMessageBox::warning(this,tr("Remove Hostel"),tr("You haven't added any hostel yet"));
    }
    dash.connClose();
}


void dashboard::on_deleteAccountBtn_clicked()
{
    MainWindow dash;
    if(dash.confirmDialogBox("Delete Account","Are you sure want to delete your account?\nThis will also remove hostel associated with your account\n")){
        dash.connOpen();
        QSqlQuery qry,qry1;
        qry.prepare("delete from users where id='"+uid+"'");
        qry1.prepare("delete from hostels where id='"+uid+"'");
        if(qry.exec()&&qry1.exec()){
            QMessageBox::information(this,tr("Delete Account"),tr("Account deleted successfully\n"));
            hide();
            MainWindow *main;
            main = new class MainWindow();
            main->show();
        }
        else
            QMessageBox::critical(this,tr("Delete Account"),tr("Error encountered while deleting account\n"));
    }
}


void dashboard::on_addEditPageCancelBtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->dashboardHome_page);
}

