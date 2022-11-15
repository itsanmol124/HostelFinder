#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dashboard.h"
#include <QApplication>

QString mapUrl; //Global variable to store hostel location linka

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
/*************************
* User-Defined Functions *
*************************/

//Function to make sure whether to close the application
void MainWindow::closeEvent(QCloseEvent *event)
{
    if(confirmDialogBox("Exit","Are you sure want to exit?\n"))
        event->accept();
    else
        event->ignore();
}

//Function to close connection to the database
void MainWindow::connClose(){
    hosteldb.close();
    hosteldb.removeDatabase(QSqlDatabase::defaultConnection);
}

//Function to open connection to the database
bool MainWindow::connOpen(){
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

//Function for Yes/No Confrimation Dialog Box
int MainWindow::confirmDialogBox(QString title, QString message){
    QMessageBox::StandardButton resBtn = QMessageBox::question(this,title,
                                                               message,
                                                               QMessageBox::No | QMessageBox::Yes,
                                                               QMessageBox::No);
    if (resBtn == QMessageBox::Yes)
        return 1;
    else
        return 0;
}

//Function to show and hide password characters
void MainWindow::showPswrd(QLineEdit *inp, int n){
    if(n==1)
        inp->setEchoMode(QLineEdit::Normal);
    else
        inp->setEchoMode(QLineEdit::Password);
}

//Function to reset Sign Up page input fields
void MainWindow::signUpPageReset(int n){
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

//Function to reset Login page input fields
void MainWindow::loginPageReset(int n){
    if(n==1){
        ui->in_login_mobileNo->setText("");
        ui->in_login_pswrd->setText("");
    }
    showPswrd(ui->in_login_pswrd);
    ui->checkBox_login_pswrd->setChecked(false);
}

//Function to validate mobile number
int MainWindow::checkMobileNumber(QString mobile){
    if((mobile.length()==10) && (mobile[0]=='9')){
        if(mobile[1]=='8')
            if(mobile[2]=='0'||mobile[2]=='1'||mobile[2]=='2'||mobile[2]=='4'||mobile[2]=='5'||mobile[2]=='6'||mobile[2]=='8')
                return 1;
            else
                return 0;
        else if(mobile[1]=='7')
            if(mobile[2]=='2'||mobile[2]=='4'||mobile[2]=='5')
                return 1;
            else
                return 0;
        else if(mobile[1]=='6')
            if(mobile[2]=='1'||mobile[2]=='3')
                return 1;
            else
                return 0;
        else
            return 0;
    }
    else
        return 0;
}

//Function to validate password
int MainWindow::validatePassword(QString pwd){
    if(pwd.length()<8){
        QMessageBox::warning(this,tr("Error"),tr("Your Password is too small\n"));
        return 0;
    }
    else {
        int specialCharacter=0,noOfDigit=0,noOfUppercase=0,noOfLowercase=0;
        for(int i=0; i<pwd.length(); i++){
            if (pwd.at(i) >= QChar('A') && pwd.at(i) <= QChar('Z'))
                noOfUppercase++;
            else if (pwd.at(i) >= QChar('0') && pwd.at(i) <= QChar('9'))
                noOfDigit++;
            else if (pwd.at(i) >= QChar('a') && pwd.at(i) <= QChar('z'))
                noOfLowercase++;
            else
                specialCharacter++;
        }
        if((specialCharacter==0) || (noOfDigit==0) || (noOfUppercase==0)){
            QMessageBox::warning(this,tr("Error"),tr("Your Password doesn't meet the requirements\n"));
            return 0;
        }
    }
    return 1;
}

//Function to check whether passwords are same
int MainWindow::checkPassword(QString first, QString second){
    if(first==second)
        return 1;
    else
        return 0;
}

QString MainWindow::encryptPassword(QString pwd){
    QChar c;
    QString newPwd, character;
    int ascii_value;
    for(int i=0; i<pwd.length(); i++){
        c = pwd.at(i);
        ascii_value = c.toLatin1() + 32;
        character=QString::number(ascii_value);
        newPwd.append(character);
    }
    return newPwd;
}

//Function to reset Search Hostels page
void MainWindow::searchHostelPageReset(){
    ui->leftMenuContainer->hide();
    ui->stackedWidget->setCurrentWidget(ui->searchHostels_page);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->horizontalHeader()->hide();
    ui->label_noHostels->hide();
    ui->hostelInfo_frame->hide();
}

//Function to search hostels from database
void MainWindow::searchHostels(QString text, QString category, int n){
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(4);
    QStringList labels;
    labels << "Image" << "Hostel Name" << "Category" << "Location";
    ui->tableWidget->setHorizontalHeaderLabels(labels);

    connOpen();
    int rowCount = 0;
    QSqlQuery qry;

    if(n==1)    //Search by location and category
        qry.prepare("select * from hostels where location='"+text+"' and category='"+category+"' order by name");

    else if(n==2)   //Search by category for hostel list
        qry.prepare("select * from hostels where category='"+category+"' order by name");

    else    //search by hostel name and category
        qry.prepare("select * from hostels where name like '%"+text+"%' and category='"+category+"' order by name");

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
            ui->tableWidget->horizontalHeader()->hide();
            ui->label_noHostels->show();
        }
        else{
            ui->tableWidget->horizontalHeader()->show();
            ui->label_noHostels->hide();
        }
    }
    connClose();
}

/**********************
* UI Button Functions *
**********************/
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
    else if (!checkMobileNumber(mobileNo))
        QMessageBox::critical(this,tr("Error"),tr("Invalid Mobile Number\n"));

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
            else if(!validatePassword(password)){
                signUpPageReset();
            }
            else{
                if(checkPassword(password,confirmPswrd)){
//                    password = encryptPassword(password);
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
                    QMessageBox::critical(this,tr("Error"),tr("Passwords doesn't match\n"));
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
//        password = encryptPassword(password);
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
            if(count<1)
                QMessageBox::warning(this,tr("Error"),tr("Incorrect Login Details\n"));
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
    ui->hostelInfo_frame->hide();
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

        mapUrl = qry.value(27).toString();
        if(mapUrl!="")
            ui->viewOnMapBtn->show();
        else
            ui->viewOnMapBtn->hide();

        QString specialFacilities = qry.value(28).toString();
        if(specialFacilities!=""){
            ui->specialFacilitiesBox->show();
            ui->label_special_facilities->setText(specialFacilities);
        }
        else
            ui->specialFacilitiesBox->hide();
    };
    connClose();
}


void MainWindow::on_refreshBoysHostelBtn_clicked()
{
    ui->in_boysHostelName->clear();
    ui->hostelInfo_frame->hide();
    searchHostels("","Boys",2);
}


void MainWindow::on_refreshGirlsHostelBtn_clicked()
{
    ui->in_girlsHostelName->clear();
    ui->hostelInfo_frame->hide();
    searchHostels("","Girls",2);
}


void MainWindow::on_viewOnMapBtn_clicked()
{
    QDesktopServices::openUrl(QUrl(mapUrl));
}


void MainWindow::on_in_boysHostelName_textChanged(const QString &hostelName)
{
    searchHostels(hostelName,"Boys");
}


void MainWindow::on_in_girlsHostelName_textChanged(const QString &hostelName)
{
    searchHostels(hostelName,"Girls");
}


void MainWindow::on_search_location_currentIndexChanged()
{
    ui->label_noHostels->hide();
}


void MainWindow::on_search_category_currentIndexChanged()
{
    ui->label_noHostels->hide();
}

