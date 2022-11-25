/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QWidget *dashboard_centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *leftMenuContainer;
    QVBoxLayout *verticalLayout_2;
    QFrame *mainMenuContainer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *dashboardBtn;
    QLabel *label_mainMenu;
    QFrame *line_mainMenu;
    QFrame *mainMenuSubContainer;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addHostelMenuBtn;
    QPushButton *editHostelBtn;
    QPushButton *removeHostelBtn;
    QPushButton *deleteAccountBtn;
    QPushButton *changePswrdMenuBtn;
    QPushButton *logOutBtn;
    QFrame *footerContainer;
    QVBoxLayout *verticalLayout_5;
    QFrame *line_footer;
    QLabel *label_footer;
    QWidget *bodyContainer;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *addHostel_page;
    QLabel *label_title;
    QWidget *widget;
    QLabel *label_4;
    QCheckBox *in_5GWiFi;
    QCheckBox *in_noSmoking;
    QLabel *label_13;
    QCheckBox *in_hotWater;
    QLabel *label_3;
    QCheckBox *in_vegFood;
    QPushButton *uploadImageBtn;
    QComboBox *in_district;
    QLabel *label_9;
    QCheckBox *in_threeSeater;
    QLabel *label_8;
    QFrame *line_4;
    QCheckBox *in_cctv;
    QLabel *label_10;
    QLineEdit *in_ownerContact;
    QRadioButton *radioBtn_girls;
    QFrame *line_3;
    QPushButton *addHostelBtn;
    QSpinBox *in_totalBeds;
    QLabel *label_12;
    QCheckBox *in_oneSeater;
    QLabel *label_hostel_img;
    QSpinBox *in_availableBeds;
    QFrame *line_2;
    QLineEdit *in_price1;
    QLabel *label_2;
    QCheckBox *in_parking;
    QComboBox *in_location;
    QCheckBox *in_24HrsElec;
    QCheckBox *in_persLocker;
    QLabel *label_7;
    QLineEdit *in_ownerName;
    QLineEdit *in_price3;
    QLineEdit *in_price4;
    QRadioButton *radioBtn_boys;
    QLabel *label_6;
    QLineEdit *in_price2;
    QLabel *label;
    QCheckBox *in_fourSeater;
    QCheckBox *in_laundry;
    QLineEdit *in_hostelName;
    QLabel *label_14;
    QLabel *label_5;
    QCheckBox *in_twoSeater;
    QFrame *line;
    QPushButton *updateHostelBtn;
    QLabel *label_11;
    QLabel *label_15;
    QLineEdit *in_mapUrl;
    QPushButton *addEditPageCancelBtn;
    QLabel *label_16;
    QTextEdit *in_specialFacilities;
    QFrame *line_5;
    QFrame *line_signUp;
    QWidget *changePassword_page;
    QFrame *changePassword_frame;
    QLabel *label_login;
    QPushButton *changePswrdBtn;
    QPushButton *changePswrd_cancelBtn;
    QFrame *frame2;
    QLabel *label_newPswrd;
    QLineEdit *in_newPswrd;
    QCheckBox *checkBox_showChangePswrd;
    QFrame *frame3;
    QLabel *label_confirmNewPswrd;
    QLineEdit *in_confirmNewPswrd;
    QLabel *label_pswrdRules;
    QLabel *label_loginHead;
    QFrame *line_login;
    QLabel *label_pic_changePassword;
    QWidget *dashboardHome_page;
    QFrame *frame;
    QLabel *label_heading;
    QLabel *label_hello;
    QLabel *label_subHeading;
    QFrame *frame_2;
    QLabel *label_pic_dashboardHomePage;

    void setupUi(QMainWindow *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName(QString::fromUtf8("dashboard"));
        dashboard->resize(1200, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/icons/logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        dashboard->setWindowIcon(icon);
        dashboard->setStyleSheet(QString::fromUtf8("*{\n"
"	font-size: 12pt;\n"
"}\n"
"QMessageBox QPushButton {\n"
"	width: 40px;\n"
"	height: 25px;\n"
"}"));
        dashboard_centralWidget = new QWidget(dashboard);
        dashboard_centralWidget->setObjectName(QString::fromUtf8("dashboard_centralWidget"));
        dashboard_centralWidget->setStyleSheet(QString::fromUtf8("*{\n"
"	font-size: 10pt;\n"
"	padding: 0;\n"
"	margin: 0;\n"
"}\n"
"#dashboard_centralWidget{\n"
"	background: #fff;\n"
"}\n"
"#label_mainMenu{\n"
"	font-size: 14pt;\n"
"	font-weight: 600;\n"
"}\n"
"#label_footer{\n"
"	font: 400 9pt;\n"
"	padding: 2px;\n"
"}\n"
"#bodyContainer,#leftMenuContainer{\n"
"	border: 1.5px solid #f4f4f4;\n"
"}\n"
".QPushButton{\n"
"background: transparent;\n"
"border-radius: 5px;\n"
"font-size: 14pt;\n"
"text-align: left;\n"
"padding: 8px;\n"
"}\n"
".QPushButton:hover{\n"
"font-weight: 600;\n"
"background: rgb(255, 255, 125);\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(dashboard_centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        leftMenuContainer = new QWidget(dashboard_centralWidget);
        leftMenuContainer->setObjectName(QString::fromUtf8("leftMenuContainer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftMenuContainer->sizePolicy().hasHeightForWidth());
        leftMenuContainer->setSizePolicy(sizePolicy);
        leftMenuContainer->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(leftMenuContainer);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mainMenuContainer_2 = new QFrame(leftMenuContainer);
        mainMenuContainer_2->setObjectName(QString::fromUtf8("mainMenuContainer_2"));
        mainMenuContainer_2->setMinimumSize(QSize(0, 300));
        mainMenuContainer_2->setStyleSheet(QString::fromUtf8(""));
        mainMenuContainer_2->setFrameShape(QFrame::StyledPanel);
        mainMenuContainer_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(mainMenuContainer_2);
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 10, 0, 10);
        dashboardBtn = new QPushButton(mainMenuContainer_2);
        dashboardBtn->setObjectName(QString::fromUtf8("dashboardBtn"));
        dashboardBtn->setMinimumSize(QSize(0, 50));
        dashboardBtn->setCursor(QCursor(Qt::PointingHandCursor));
        dashboardBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"text-align: center;\n"
"font-size: 20px;\n"
"}\n"
"#hostelFinderBtn:hover{\n"
"	border: none;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/icons/grid.svg"), QSize(), QIcon::Normal, QIcon::Off);
        dashboardBtn->setIcon(icon1);
        dashboardBtn->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(dashboardBtn);

        label_mainMenu = new QLabel(mainMenuContainer_2);
        label_mainMenu->setObjectName(QString::fromUtf8("label_mainMenu"));
        sizePolicy.setHeightForWidth(label_mainMenu->sizePolicy().hasHeightForWidth());
        label_mainMenu->setSizePolicy(sizePolicy);
        label_mainMenu->setMinimumSize(QSize(0, 40));
        label_mainMenu->setMaximumSize(QSize(16777215, 16777215));
        label_mainMenu->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(label_mainMenu);

        line_mainMenu = new QFrame(mainMenuContainer_2);
        line_mainMenu->setObjectName(QString::fromUtf8("line_mainMenu"));
        line_mainMenu->setFrameShape(QFrame::HLine);
        line_mainMenu->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_mainMenu);

        mainMenuSubContainer = new QFrame(mainMenuContainer_2);
        mainMenuSubContainer->setObjectName(QString::fromUtf8("mainMenuSubContainer"));
        mainMenuSubContainer->setStyleSheet(QString::fromUtf8(""));
        mainMenuSubContainer->setFrameShape(QFrame::StyledPanel);
        mainMenuSubContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(mainMenuSubContainer);
        verticalLayout_3->setSpacing(30);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 5, 0, 20);
        addHostelMenuBtn = new QPushButton(mainMenuSubContainer);
        addHostelMenuBtn->setObjectName(QString::fromUtf8("addHostelMenuBtn"));
        addHostelMenuBtn->setMinimumSize(QSize(0, 50));
        addHostelMenuBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/assets/icons/plus-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addHostelMenuBtn->setIcon(icon2);
        addHostelMenuBtn->setIconSize(QSize(24, 24));
        addHostelMenuBtn->setAutoDefault(false);

        verticalLayout_3->addWidget(addHostelMenuBtn);

        editHostelBtn = new QPushButton(mainMenuSubContainer);
        editHostelBtn->setObjectName(QString::fromUtf8("editHostelBtn"));
        editHostelBtn->setMinimumSize(QSize(0, 50));
        editHostelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/icons/file-text.svg"), QSize(), QIcon::Normal, QIcon::Off);
        editHostelBtn->setIcon(icon3);
        editHostelBtn->setIconSize(QSize(24, 24));
        editHostelBtn->setAutoDefault(false);

        verticalLayout_3->addWidget(editHostelBtn);

        removeHostelBtn = new QPushButton(mainMenuSubContainer);
        removeHostelBtn->setObjectName(QString::fromUtf8("removeHostelBtn"));
        removeHostelBtn->setMinimumSize(QSize(0, 50));
        removeHostelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/assets/icons/divide-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        removeHostelBtn->setIcon(icon4);
        removeHostelBtn->setIconSize(QSize(24, 24));
        removeHostelBtn->setAutoDefault(false);

        verticalLayout_3->addWidget(removeHostelBtn);

        deleteAccountBtn = new QPushButton(mainMenuSubContainer);
        deleteAccountBtn->setObjectName(QString::fromUtf8("deleteAccountBtn"));
        deleteAccountBtn->setMinimumSize(QSize(0, 50));
        deleteAccountBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/assets/icons/user-minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        deleteAccountBtn->setIcon(icon5);
        deleteAccountBtn->setIconSize(QSize(24, 24));
        deleteAccountBtn->setAutoDefault(false);

        verticalLayout_3->addWidget(deleteAccountBtn);

        changePswrdMenuBtn = new QPushButton(mainMenuSubContainer);
        changePswrdMenuBtn->setObjectName(QString::fromUtf8("changePswrdMenuBtn"));
        changePswrdMenuBtn->setMinimumSize(QSize(0, 50));
        changePswrdMenuBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/assets/icons/edit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        changePswrdMenuBtn->setIcon(icon6);
        changePswrdMenuBtn->setIconSize(QSize(24, 24));
        changePswrdMenuBtn->setAutoDefault(false);

        verticalLayout_3->addWidget(changePswrdMenuBtn);

        logOutBtn = new QPushButton(mainMenuSubContainer);
        logOutBtn->setObjectName(QString::fromUtf8("logOutBtn"));
        logOutBtn->setMinimumSize(QSize(0, 50));
        logOutBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/assets/icons/log-out.svg"), QSize(), QIcon::Normal, QIcon::Off);
        logOutBtn->setIcon(icon7);
        logOutBtn->setIconSize(QSize(24, 24));
        logOutBtn->setAutoDefault(false);

        verticalLayout_3->addWidget(logOutBtn);


        verticalLayout->addWidget(mainMenuSubContainer);


        verticalLayout_2->addWidget(mainMenuContainer_2);

        footerContainer = new QFrame(leftMenuContainer);
        footerContainer->setObjectName(QString::fromUtf8("footerContainer"));
        footerContainer->setStyleSheet(QString::fromUtf8("padding: 2px;"));
        footerContainer->setFrameShape(QFrame::StyledPanel);
        footerContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(footerContainer);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 6, 0, 6);
        line_footer = new QFrame(footerContainer);
        line_footer->setObjectName(QString::fromUtf8("line_footer"));
        line_footer->setFrameShape(QFrame::HLine);
        line_footer->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_footer);

        label_footer = new QLabel(footerContainer);
        label_footer->setObjectName(QString::fromUtf8("label_footer"));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        label_footer->setFont(font);
        label_footer->setStyleSheet(QString::fromUtf8(""));
        label_footer->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_footer);


        verticalLayout_2->addWidget(footerContainer, 0, Qt::AlignBottom);


        horizontalLayout->addWidget(leftMenuContainer);

        bodyContainer = new QWidget(dashboard_centralWidget);
        bodyContainer->setObjectName(QString::fromUtf8("bodyContainer"));
        sizePolicy.setHeightForWidth(bodyContainer->sizePolicy().hasHeightForWidth());
        bodyContainer->setSizePolicy(sizePolicy);
        bodyContainer->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(bodyContainer);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(bodyContainer);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	text-align : center;\n"
"	border: 1.5px solid black;\n"
"}\n"
"\n"
""));
        addHostel_page = new QWidget();
        addHostel_page->setObjectName(QString::fromUtf8("addHostel_page"));
        addHostel_page->setMinimumSize(QSize(0, 0));
        addHostel_page->setStyleSheet(QString::fromUtf8(".QLineEdit{\n"
"	background: transparent;\n"
"	border:none;\n"
"	border-bottom: 1px solid rgb(209, 207, 207);\n"
"}\n"
".QPushButton{\n"
" border : 2px solid black;\n"
"text-align: center;\n"
"}\n"
""));
        label_title = new QLabel(addHostel_page);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(30, 10, 101, 61));
        label_title->setStyleSheet(QString::fromUtf8("font-size : 16pt;"));
        label_title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        widget = new QWidget(addHostel_page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 80, 1001, 800));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 800));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(-10, 119, 111, 25));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        in_5GWiFi = new QCheckBox(widget);
        in_5GWiFi->setObjectName(QString::fromUtf8("in_5GWiFi"));
        in_5GWiFi->setGeometry(QRect(250, 290, 120, 25));
        in_5GWiFi->setCursor(QCursor(Qt::PointingHandCursor));
        in_noSmoking = new QCheckBox(widget);
        in_noSmoking->setObjectName(QString::fromUtf8("in_noSmoking"));
        in_noSmoking->setGeometry(QRect(250, 350, 120, 25));
        in_noSmoking->setCursor(QCursor(Qt::PointingHandCursor));
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(520, 390, 91, 25));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        in_hotWater = new QCheckBox(widget);
        in_hotWater->setObjectName(QString::fromUtf8("in_hotWater"));
        in_hotWater->setGeometry(QRect(380, 290, 120, 25));
        in_hotWater->setCursor(QCursor(Qt::PointingHandCursor));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-11, 79, 111, 25));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        in_vegFood = new QCheckBox(widget);
        in_vegFood->setObjectName(QString::fromUtf8("in_vegFood"));
        in_vegFood->setGeometry(QRect(120, 320, 120, 25));
        in_vegFood->setCursor(QCursor(Qt::PointingHandCursor));
        uploadImageBtn = new QPushButton(widget);
        uploadImageBtn->setObjectName(QString::fromUtf8("uploadImageBtn"));
        uploadImageBtn->setGeometry(QRect(610, 250, 201, 51));
        uploadImageBtn->setCursor(QCursor(Qt::PointingHandCursor));
        uploadImageBtn->setLayoutDirection(Qt::LeftToRight);
        in_district = new QComboBox(widget);
        in_district->addItem(QString());
        in_district->addItem(QString());
        in_district->addItem(QString());
        in_district->setObjectName(QString::fromUtf8("in_district"));
        in_district->setGeometry(QRect(120, 80, 231, 25));
        in_district->setEditable(true);
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(-10, 240, 111, 25));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        in_threeSeater = new QCheckBox(widget);
        in_threeSeater->setObjectName(QString::fromUtf8("in_threeSeater"));
        in_threeSeater->setGeometry(QRect(300, 210, 71, 25));
        in_threeSeater->setCursor(QCursor(Qt::PointingHandCursor));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(-10, 210, 111, 25));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_4 = new QFrame(widget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(500, 380, 118, 3));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        in_cctv = new QCheckBox(widget);
        in_cctv->setObjectName(QString::fromUtf8("in_cctv"));
        in_cctv->setGeometry(QRect(380, 350, 120, 25));
        in_cctv->setCursor(QCursor(Qt::PointingHandCursor));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 260, 121, 31));
        label_10->setStyleSheet(QString::fromUtf8("font-weight : 600;\n"
"font-size : 12pt;"));
        in_ownerContact = new QLineEdit(widget);
        in_ownerContact->setObjectName(QString::fromUtf8("in_ownerContact"));
        in_ownerContact->setGeometry(QRect(620, 430, 271, 25));
        radioBtn_girls = new QRadioButton(widget);
        radioBtn_girls->setObjectName(QString::fromUtf8("radioBtn_girls"));
        radioBtn_girls->setGeometry(QRect(220, 150, 70, 25));
        radioBtn_girls->setCursor(QCursor(Qt::PointingHandCursor));
        line_3 = new QFrame(widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(480, 10, 3, 450));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy1);
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        addHostelBtn = new QPushButton(widget);
        addHostelBtn->setObjectName(QString::fromUtf8("addHostelBtn"));
        addHostelBtn->setGeometry(QRect(290, 470, 181, 42));
        addHostelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        in_totalBeds = new QSpinBox(widget);
        in_totalBeds->setObjectName(QString::fromUtf8("in_totalBeds"));
        in_totalBeds->setGeometry(QRect(120, 180, 61, 25));
        in_totalBeds->setMinimum(10);
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(500, 350, 121, 31));
        label_12->setStyleSheet(QString::fromUtf8("font-weight : 600;\n"
"font-size : 12pt;"));
        in_oneSeater = new QCheckBox(widget);
        in_oneSeater->setObjectName(QString::fromUtf8("in_oneSeater"));
        in_oneSeater->setGeometry(QRect(120, 210, 71, 25));
        in_oneSeater->setCursor(QCursor(Qt::PointingHandCursor));
        label_hostel_img = new QLabel(widget);
        label_hostel_img->setObjectName(QString::fromUtf8("label_hostel_img"));
        label_hostel_img->setGeometry(QRect(610, 30, 200, 200));
        label_hostel_img->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        label_hostel_img->setAlignment(Qt::AlignCenter);
        in_availableBeds = new QSpinBox(widget);
        in_availableBeds->setObjectName(QString::fromUtf8("in_availableBeds"));
        in_availableBeds->setGeometry(QRect(300, 180, 61, 25));
        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 290, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        in_price1 = new QLineEdit(widget);
        in_price1->setObjectName(QString::fromUtf8("in_price1"));
        in_price1->setGeometry(QRect(120, 240, 71, 20));
        in_price1->setReadOnly(false);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-12, 40, 111, 25));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        in_parking = new QCheckBox(widget);
        in_parking->setObjectName(QString::fromUtf8("in_parking"));
        in_parking->setGeometry(QRect(120, 350, 120, 25));
        in_parking->setCursor(QCursor(Qt::PointingHandCursor));
        in_location = new QComboBox(widget);
        in_location->setObjectName(QString::fromUtf8("in_location"));
        in_location->setGeometry(QRect(120, 120, 231, 25));
        in_location->setEditable(true);
        in_24HrsElec = new QCheckBox(widget);
        in_24HrsElec->setObjectName(QString::fromUtf8("in_24HrsElec"));
        in_24HrsElec->setGeometry(QRect(120, 290, 120, 25));
        in_24HrsElec->setCursor(QCursor(Qt::PointingHandCursor));
        in_persLocker = new QCheckBox(widget);
        in_persLocker->setObjectName(QString::fromUtf8("in_persLocker"));
        in_persLocker->setGeometry(QRect(250, 320, 120, 25));
        in_persLocker->setCursor(QCursor(Qt::PointingHandCursor));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(190, 180, 91, 25));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        in_ownerName = new QLineEdit(widget);
        in_ownerName->setObjectName(QString::fromUtf8("in_ownerName"));
        in_ownerName->setGeometry(QRect(620, 390, 271, 25));
        in_price3 = new QLineEdit(widget);
        in_price3->setObjectName(QString::fromUtf8("in_price3"));
        in_price3->setGeometry(QRect(300, 240, 71, 20));
        in_price4 = new QLineEdit(widget);
        in_price4->setObjectName(QString::fromUtf8("in_price4"));
        in_price4->setGeometry(QRect(390, 240, 71, 20));
        radioBtn_boys = new QRadioButton(widget);
        radioBtn_boys->setObjectName(QString::fromUtf8("radioBtn_boys"));
        radioBtn_boys->setGeometry(QRect(120, 150, 81, 25));
        radioBtn_boys->setCursor(QCursor(Qt::PointingHandCursor));
        radioBtn_boys->setChecked(true);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(-10, 180, 111, 25));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        in_price2 = new QLineEdit(widget);
        in_price2->setObjectName(QString::fromUtf8("in_price2"));
        in_price2->setGeometry(QRect(210, 240, 71, 20));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 121, 31));
        label->setStyleSheet(QString::fromUtf8("font-weight : 600;\n"
"font-size : 12pt;"));
        in_fourSeater = new QCheckBox(widget);
        in_fourSeater->setObjectName(QString::fromUtf8("in_fourSeater"));
        in_fourSeater->setGeometry(QRect(390, 210, 71, 25));
        in_fourSeater->setCursor(QCursor(Qt::PointingHandCursor));
        in_laundry = new QCheckBox(widget);
        in_laundry->setObjectName(QString::fromUtf8("in_laundry"));
        in_laundry->setGeometry(QRect(380, 320, 120, 25));
        in_laundry->setCursor(QCursor(Qt::PointingHandCursor));
        in_hostelName = new QLineEdit(widget);
        in_hostelName->setObjectName(QString::fromUtf8("in_hostelName"));
        in_hostelName->setGeometry(QRect(120, 39, 321, 25));
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(520, 430, 91, 25));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(-10, 150, 111, 25));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        in_twoSeater = new QCheckBox(widget);
        in_twoSeater->setObjectName(QString::fromUtf8("in_twoSeater"));
        in_twoSeater->setGeometry(QRect(210, 210, 71, 25));
        in_twoSeater->setCursor(QCursor(Qt::PointingHandCursor));
        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 30, 118, 3));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        updateHostelBtn = new QPushButton(widget);
        updateHostelBtn->setObjectName(QString::fromUtf8("updateHostelBtn"));
        updateHostelBtn->setGeometry(QRect(290, 470, 181, 42));
        updateHostelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        updateHostelBtn->setStyleSheet(QString::fromUtf8("padding:2px;"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(610, 0, 201, 31));
        label_11->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(500, 320, 131, 21));
        label_15->setStyleSheet(QString::fromUtf8("font-weight : 600;\n"
"font-size : 12pt;"));
        in_mapUrl = new QLineEdit(widget);
        in_mapUrl->setObjectName(QString::fromUtf8("in_mapUrl"));
        in_mapUrl->setGeometry(QRect(640, 320, 251, 21));
        addEditPageCancelBtn = new QPushButton(widget);
        addEditPageCancelBtn->setObjectName(QString::fromUtf8("addEditPageCancelBtn"));
        addEditPageCancelBtn->setGeometry(QRect(490, 470, 131, 42));
        addEditPageCancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        addEditPageCancelBtn->setStyleSheet(QString::fromUtf8("padding:2px;"));
        addEditPageCancelBtn->setIconSize(QSize(22, 22));
        label_16 = new QLabel(widget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(20, 370, 121, 31));
        label_16->setStyleSheet(QString::fromUtf8("font-weight : 600;\n"
"font-size : 12pt;"));
        in_specialFacilities = new QTextEdit(widget);
        in_specialFacilities->setObjectName(QString::fromUtf8("in_specialFacilities"));
        in_specialFacilities->setGeometry(QRect(150, 380, 311, 81));
        in_specialFacilities->setStyleSheet(QString::fromUtf8(""));
        line_5 = new QFrame(widget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(20, 400, 118, 3));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_signUp = new QFrame(addHostel_page);
        line_signUp->setObjectName(QString::fromUtf8("line_signUp"));
        line_signUp->setGeometry(QRect(30, 40, 111, 31));
        line_signUp->setFrameShape(QFrame::HLine);
        line_signUp->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(addHostel_page);
        changePassword_page = new QWidget();
        changePassword_page->setObjectName(QString::fromUtf8("changePassword_page"));
        changePassword_frame = new QFrame(changePassword_page);
        changePassword_frame->setObjectName(QString::fromUtf8("changePassword_frame"));
        changePassword_frame->setGeometry(QRect(20, 100, 471, 421));
        changePassword_frame->setStyleSheet(QString::fromUtf8("#changePassword_frame{\n"
"	background-color: rgba(244, 244, 244, 100);\n"
"	border-radius: 10px;\n"
"}\n"
".QLabel{\n"
"	font: 600;\n"
"}\n"
".QLineEdit{\n"
"	background: transparent;\n"
"	border:none;\n"
"	border-bottom: 1px solid rgb(209, 207, 207);\n"
"}\n"
".QToolButton{\n"
"	background: none;\n"
"	border: none;\n"
"}\n"
"#label_login{\n"
"	font: 600 18pt;\n"
"	color: rgb(85, 170, 255)\n"
"}\n"
""));
        changePassword_frame->setFrameShape(QFrame::StyledPanel);
        changePassword_frame->setFrameShadow(QFrame::Raised);
        label_login = new QLabel(changePassword_frame);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setGeometry(QRect(0, 0, 471, 51));
        label_login->setStyleSheet(QString::fromUtf8(""));
        label_login->setAlignment(Qt::AlignCenter);
        changePswrdBtn = new QPushButton(changePassword_frame);
        changePswrdBtn->setObjectName(QString::fromUtf8("changePswrdBtn"));
        changePswrdBtn->setGeometry(QRect(100, 220, 261, 45));
        changePswrdBtn->setCursor(QCursor(Qt::PointingHandCursor));
        changePswrdBtn->setStyleSheet(QString::fromUtf8(""));
        changePswrd_cancelBtn = new QPushButton(changePassword_frame);
        changePswrd_cancelBtn->setObjectName(QString::fromUtf8("changePswrd_cancelBtn"));
        changePswrd_cancelBtn->setGeometry(QRect(100, 280, 261, 45));
        changePswrd_cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        frame2 = new QFrame(changePassword_frame);
        frame2->setObjectName(QString::fromUtf8("frame2"));
        frame2->setGeometry(QRect(30, 50, 411, 71));
        frame2->setStyleSheet(QString::fromUtf8("font-size: 16px;"));
        frame2->setFrameShape(QFrame::StyledPanel);
        frame2->setFrameShadow(QFrame::Raised);
        label_newPswrd = new QLabel(frame2);
        label_newPswrd->setObjectName(QString::fromUtf8("label_newPswrd"));
        label_newPswrd->setGeometry(QRect(70, 0, 151, 41));
        label_newPswrd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        in_newPswrd = new QLineEdit(frame2);
        in_newPswrd->setObjectName(QString::fromUtf8("in_newPswrd"));
        in_newPswrd->setGeometry(QRect(70, 30, 261, 31));
        in_newPswrd->setAutoFillBackground(false);
        in_newPswrd->setEchoMode(QLineEdit::Password);
        checkBox_showChangePswrd = new QCheckBox(changePassword_frame);
        checkBox_showChangePswrd->setObjectName(QString::fromUtf8("checkBox_showChangePswrd"));
        checkBox_showChangePswrd->setGeometry(QRect(170, 190, 121, 21));
        checkBox_showChangePswrd->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox_showChangePswrd->setStyleSheet(QString::fromUtf8("font-size: 14px;"));
        frame3 = new QFrame(changePassword_frame);
        frame3->setObjectName(QString::fromUtf8("frame3"));
        frame3->setGeometry(QRect(30, 120, 411, 71));
        frame3->setStyleSheet(QString::fromUtf8("font-size: 16px;"));
        frame3->setFrameShape(QFrame::StyledPanel);
        frame3->setFrameShadow(QFrame::Raised);
        label_confirmNewPswrd = new QLabel(frame3);
        label_confirmNewPswrd->setObjectName(QString::fromUtf8("label_confirmNewPswrd"));
        label_confirmNewPswrd->setGeometry(QRect(70, 0, 221, 41));
        label_confirmNewPswrd->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        in_confirmNewPswrd = new QLineEdit(frame3);
        in_confirmNewPswrd->setObjectName(QString::fromUtf8("in_confirmNewPswrd"));
        in_confirmNewPswrd->setGeometry(QRect(70, 30, 261, 31));
        in_confirmNewPswrd->setAutoFillBackground(false);
        in_confirmNewPswrd->setEchoMode(QLineEdit::Password);
        label_pswrdRules = new QLabel(changePassword_frame);
        label_pswrdRules->setObjectName(QString::fromUtf8("label_pswrdRules"));
        label_pswrdRules->setGeometry(QRect(60, 330, 341, 81));
        label_pswrdRules->setStyleSheet(QString::fromUtf8("font: 600 10pt \"Segoe UI\";\n"
"color: rgb(170, 85, 255);"));
        label_loginHead = new QLabel(changePassword_page);
        label_loginHead->setObjectName(QString::fromUtf8("label_loginHead"));
        label_loginHead->setGeometry(QRect(30, 20, 301, 61));
        label_loginHead->setStyleSheet(QString::fromUtf8("font-size : 16pt;"));
        label_loginHead->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line_login = new QFrame(changePassword_page);
        line_login->setObjectName(QString::fromUtf8("line_login"));
        line_login->setGeometry(QRect(30, 60, 181, 21));
        line_login->setFrameShape(QFrame::HLine);
        line_login->setFrameShadow(QFrame::Sunken);
        label_pic_changePassword = new QLabel(changePassword_page);
        label_pic_changePassword->setObjectName(QString::fromUtf8("label_pic_changePassword"));
        label_pic_changePassword->setGeometry(QRect(490, 20, 521, 560));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_pic_changePassword->sizePolicy().hasHeightForWidth());
        label_pic_changePassword->setSizePolicy(sizePolicy2);
        label_pic_changePassword->setMinimumSize(QSize(500, 0));
        label_pic_changePassword->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->addWidget(changePassword_page);
        dashboardHome_page = new QWidget();
        dashboardHome_page->setObjectName(QString::fromUtf8("dashboardHome_page"));
        dashboardHome_page->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(dashboardHome_page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 431, 581));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_heading = new QLabel(frame);
        label_heading->setObjectName(QString::fromUtf8("label_heading"));
        label_heading->setGeometry(QRect(0, 230, 426, 50));
        sizePolicy.setHeightForWidth(label_heading->sizePolicy().hasHeightForWidth());
        label_heading->setSizePolicy(sizePolicy);
        label_heading->setMinimumSize(QSize(0, 0));
        label_heading->setMaximumSize(QSize(16777215, 50));
        label_heading->setStyleSheet(QString::fromUtf8("font: 18pt 600;"));
        label_heading->setAlignment(Qt::AlignCenter);
        label_hello = new QLabel(frame);
        label_hello->setObjectName(QString::fromUtf8("label_hello"));
        label_hello->setGeometry(QRect(25, 20, 401, 50));
        sizePolicy.setHeightForWidth(label_hello->sizePolicy().hasHeightForWidth());
        label_hello->setSizePolicy(sizePolicy);
        label_hello->setMinimumSize(QSize(0, 0));
        label_hello->setMaximumSize(QSize(16777215, 50));
        label_hello->setStyleSheet(QString::fromUtf8("font: 14pt 600;"));
        label_hello->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_subHeading = new QLabel(frame);
        label_subHeading->setObjectName(QString::fromUtf8("label_subHeading"));
        label_subHeading->setGeometry(QRect(0, 280, 426, 50));
        label_subHeading->setMaximumSize(QSize(16777215, 50));
        label_subHeading->setStyleSheet(QString::fromUtf8("font: 14pt \"Comic Sans MS\";"));
        label_subHeading->setAlignment(Qt::AlignCenter);
        frame_2 = new QFrame(dashboardHome_page);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(450, 10, 561, 581));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_pic_dashboardHomePage = new QLabel(frame_2);
        label_pic_dashboardHomePage->setObjectName(QString::fromUtf8("label_pic_dashboardHomePage"));
        label_pic_dashboardHomePage->setGeometry(QRect(10, 10, 541, 561));
        stackedWidget->addWidget(dashboardHome_page);

        verticalLayout_4->addWidget(stackedWidget);


        horizontalLayout->addWidget(bodyContainer);

        dashboard->setCentralWidget(dashboard_centralWidget);

        retranslateUi(dashboard);

        addHostelMenuBtn->setDefault(false);
        editHostelBtn->setDefault(false);
        removeHostelBtn->setDefault(false);
        deleteAccountBtn->setDefault(false);
        changePswrdMenuBtn->setDefault(false);
        logOutBtn->setDefault(false);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "Hostel Finder", nullptr));
        dashboardBtn->setText(QCoreApplication::translate("dashboard", "Dashboard", nullptr));
        label_mainMenu->setText(QCoreApplication::translate("dashboard", "Main Menu", nullptr));
        addHostelMenuBtn->setText(QCoreApplication::translate("dashboard", "Add Hostel", nullptr));
        editHostelBtn->setText(QCoreApplication::translate("dashboard", "View/Edit Hostel Info", nullptr));
        removeHostelBtn->setText(QCoreApplication::translate("dashboard", "Remove Your Hostel", nullptr));
        deleteAccountBtn->setText(QCoreApplication::translate("dashboard", "Delete Your Account", nullptr));
        changePswrdMenuBtn->setText(QCoreApplication::translate("dashboard", "Change Password", nullptr));
        logOutBtn->setText(QCoreApplication::translate("dashboard", "Log Out", nullptr));
        label_footer->setText(QCoreApplication::translate("dashboard", "Developed By BCT 2077 Group H Students", nullptr));
        label_title->setText(QCoreApplication::translate("dashboard", "Add Hostel", nullptr));
        label_4->setText(QCoreApplication::translate("dashboard", "Location:", nullptr));
        in_5GWiFi->setText(QCoreApplication::translate("dashboard", "5G Wi-Fi", nullptr));
        in_noSmoking->setText(QCoreApplication::translate("dashboard", "No Smoking", nullptr));
        label_13->setText(QCoreApplication::translate("dashboard", "Name:", nullptr));
        in_hotWater->setText(QCoreApplication::translate("dashboard", "Hot Water", nullptr));
        label_3->setText(QCoreApplication::translate("dashboard", "District:", nullptr));
        in_vegFood->setText(QCoreApplication::translate("dashboard", "Vegeterian Food", nullptr));
        uploadImageBtn->setText(QCoreApplication::translate("dashboard", "Upload Image", nullptr));
        in_district->setItemText(0, QCoreApplication::translate("dashboard", "Kathmandu", nullptr));
        in_district->setItemText(1, QCoreApplication::translate("dashboard", "Bhaktapur", nullptr));
        in_district->setItemText(2, QCoreApplication::translate("dashboard", "Lalitpur", nullptr));

        in_district->setPlaceholderText(QString());
        label_9->setText(QCoreApplication::translate("dashboard", "Prices:", nullptr));
        in_threeSeater->setText(QCoreApplication::translate("dashboard", "3 Seater", nullptr));
        label_8->setText(QCoreApplication::translate("dashboard", "Sharing Options:", nullptr));
        in_cctv->setText(QCoreApplication::translate("dashboard", "CCTV", nullptr));
        label_10->setText(QCoreApplication::translate("dashboard", "Hostel Facilities", nullptr));
        in_ownerContact->setPlaceholderText(QCoreApplication::translate("dashboard", "Enter Owner Contact No.", nullptr));
        radioBtn_girls->setText(QCoreApplication::translate("dashboard", "Girls", nullptr));
        addHostelBtn->setText(QCoreApplication::translate("dashboard", "Add Hostel", nullptr));
        label_12->setText(QCoreApplication::translate("dashboard", "Owner Details", nullptr));
        in_oneSeater->setText(QCoreApplication::translate("dashboard", "1 Seater", nullptr));
        label_hostel_img->setText(QString());
        in_price1->setText(QString());
        in_price1->setPlaceholderText(QCoreApplication::translate("dashboard", "1 Seater", nullptr));
        label_2->setText(QCoreApplication::translate("dashboard", "Name:", nullptr));
        in_parking->setText(QCoreApplication::translate("dashboard", "Parking", nullptr));
        in_24HrsElec->setText(QCoreApplication::translate("dashboard", "24 Hrs Electricity", nullptr));
        in_persLocker->setText(QCoreApplication::translate("dashboard", "Personal Locker", nullptr));
        label_7->setText(QCoreApplication::translate("dashboard", "Available Beds:", nullptr));
        in_ownerName->setPlaceholderText(QCoreApplication::translate("dashboard", "Enter Owner Fullname", nullptr));
        in_price3->setPlaceholderText(QCoreApplication::translate("dashboard", "3 Seater", nullptr));
        in_price4->setPlaceholderText(QCoreApplication::translate("dashboard", "4 Seater", nullptr));
        radioBtn_boys->setText(QCoreApplication::translate("dashboard", "Boys", nullptr));
        label_6->setText(QCoreApplication::translate("dashboard", "Total Beds:", nullptr));
        in_price2->setPlaceholderText(QCoreApplication::translate("dashboard", "2 Seater", nullptr));
        label->setText(QCoreApplication::translate("dashboard", "Hostel Details", nullptr));
        in_fourSeater->setText(QCoreApplication::translate("dashboard", "4 Seater", nullptr));
        in_laundry->setText(QCoreApplication::translate("dashboard", "Laundry", nullptr));
        in_hostelName->setPlaceholderText(QCoreApplication::translate("dashboard", "Enter Your Hostel Name", nullptr));
        label_14->setText(QCoreApplication::translate("dashboard", "Contact No:", nullptr));
        label_5->setText(QCoreApplication::translate("dashboard", "Category:", nullptr));
        in_twoSeater->setText(QCoreApplication::translate("dashboard", "2 Seater", nullptr));
        updateHostelBtn->setText(QCoreApplication::translate("dashboard", "Update Info", nullptr));
        label_11->setText(QCoreApplication::translate("dashboard", "Your Hostel Image:", nullptr));
        label_15->setText(QCoreApplication::translate("dashboard", "Google Map Link:", nullptr));
        in_mapUrl->setPlaceholderText(QCoreApplication::translate("dashboard", "Enter your hostel location link", nullptr));
        addEditPageCancelBtn->setText(QCoreApplication::translate("dashboard", "Cancel", nullptr));
        label_16->setText(QCoreApplication::translate("dashboard", "Special Facilities", nullptr));
        in_specialFacilities->setPlaceholderText(QCoreApplication::translate("dashboard", "Mention special facilities of your hostel (if any) and press enter after mentioning each facilities", nullptr));
        label_login->setText(QCoreApplication::translate("dashboard", "Change Your Account Password", nullptr));
        changePswrdBtn->setText(QCoreApplication::translate("dashboard", "Change Password", nullptr));
        changePswrd_cancelBtn->setText(QCoreApplication::translate("dashboard", "Cancel", nullptr));
        label_newPswrd->setText(QCoreApplication::translate("dashboard", "Enter New Password", nullptr));
        in_newPswrd->setInputMask(QString());
        in_newPswrd->setPlaceholderText(QCoreApplication::translate("dashboard", "**********", nullptr));
        checkBox_showChangePswrd->setText(QCoreApplication::translate("dashboard", "Show Password", nullptr));
        label_confirmNewPswrd->setText(QCoreApplication::translate("dashboard", "Confirm New Password", nullptr));
        in_confirmNewPswrd->setInputMask(QString());
        in_confirmNewPswrd->setPlaceholderText(QCoreApplication::translate("dashboard", "**********", nullptr));
        label_pswrdRules->setText(QCoreApplication::translate("dashboard", "Password must be at least 8 characters long and contain: \n"
"      1 Capital letter (A-Z)\n"
"      1 Number (0-9)\n"
"      1 Special character (@#$&...)", nullptr));
        label_loginHead->setText(QCoreApplication::translate("dashboard", "Change Password", nullptr));
        label_pic_changePassword->setText(QString());
        label_heading->setText(QCoreApplication::translate("dashboard", "Welcome to Dashboard", nullptr));
        label_hello->setText(QString());
        label_subHeading->setText(QCoreApplication::translate("dashboard", "Manage Your Hostel Account", nullptr));
        label_pic_dashboardHomePage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
