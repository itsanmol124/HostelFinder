/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QWidget *leftMenuContainer;
    QVBoxLayout *verticalLayout;
    QFrame *mainMenuContainer;
    QVBoxLayout *verticalLayout_8;
    QPushButton *hostelFinderBtn;
    QLabel *label_mainMenu;
    QFrame *line_mainMenu;
    QFrame *mainMenuSubContainer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *searchHostelsMenuBtn;
    QPushButton *boysHostelsMenuBtn;
    QPushButton *girlsHostelsMenuBtn;
    QPushButton *loginMenuBtn;
    QPushButton *signUpMenuBtn;
    QPushButton *exitBtn;
    QFrame *footerContainer;
    QVBoxLayout *verticalLayout_5;
    QFrame *line_footer;
    QLabel *label_footer;
    QWidget *mainBodyContainer;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *home_page;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_left;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_upSpacing;
    QLabel *label_heading;
    QLabel *label_subHeading;
    QLabel *label_downSpacing;
    QFrame *frame_right;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_pic_home;
    QWidget *searchHostels_page;
    QLabel *label_searchHostelsHead;
    QFrame *line_searchHostels;
    QPushButton *backBtn;
    QFrame *hostelInfo_frame;
    QLabel *label_prices;
    QLabel *label_hostel_facilities;
    QLabel *label_hostel_location_2;
    QLabel *label_sharing_options_2;
    QLabel *label_prices_2;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_hostel_facilities_2;
    QFrame *line_4;
    QFrame *line_5;
    QLabel *label_hostel_image;
    QLabel *label_hostel_location;
    QLabel *label_sharing_options;
    QLabel *label_hostel_name;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_owner_name_2;
    QLabel *label_contact_no_2;
    QLabel *label_owner_name;
    QLabel *label_contact_no;
    QLabel *label_availableBeds;
    QLabel *label_totalBeds;
    QLabel *label_availableBeds_2;
    QLabel *label_totalBeds_2;
    QLabel *label_hostel_category_2;
    QLabel *label_hostel_category;
    QPushButton *viewOnMapBtn;
    QWidget *specialFacilitiesBox;
    QLabel *label_special_facilities_1;
    QFrame *line_6;
    QLabel *label_special_facilities;
    QFrame *line;
    QTableWidget *tableWidget;
    QStackedWidget *searchStackedWidget;
    QWidget *search_page;
    QLabel *label;
    QComboBox *search_location;
    QLabel *label_3;
    QComboBox *search_category;
    QPushButton *searchHostelsBtn;
    QWidget *boysHostels_page;
    QLabel *label_4;
    QLineEdit *in_boysHostelName;
    QPushButton *refreshBoysHostelBtn;
    QWidget *girlsHostels_page;
    QLineEdit *in_girlsHostelName;
    QLabel *label_5;
    QPushButton *refreshGirlsHostelBtn;
    QLabel *label_noHostels;
    QWidget *login_page;
    QLabel *label_loginHead;
    QFrame *line_login;
    QFrame *login_frame;
    QLabel *label_login;
    QPushButton *loginBtn;
    QPushButton *login_cancelBtn;
    QFrame *frame_login_password;
    QLabel *label_login_password;
    QLineEdit *in_login_pswrd;
    QFrame *frame_login_mobileNo;
    QLineEdit *in_login_mobileNo;
    QLabel *label_login_mobileNo;
    QCheckBox *checkBox_login_pswrd;
    QLabel *label_2;
    QPushButton *createOneBtn;
    QLabel *label_pic_login;
    QLabel *label_7;
    QWidget *signUp_page;
    QLabel *label_signUpHead;
    QFrame *signUp_frame;
    QLabel *label_create_an_account;
    QPushButton *signUpBtn;
    QPushButton *signUp_cancelBtn;
    QFrame *frame_password;
    QLabel *label_password;
    QLineEdit *in_pswrd;
    QFrame *frame_confirmPassword;
    QLabel *label_confirmPassword;
    QLineEdit *in_confirm_pswrd;
    QFrame *frame_fullname;
    QLineEdit *in_fullname;
    QLabel *label_fullname;
    QFrame *frame_mobileNo;
    QLineEdit *in_mobileNo;
    QLabel *label_mobileNo;
    QCheckBox *checkBox_signUp_pswrd;
    QLabel *label_pswrdRules;
    QLabel *label_pic_signUp;
    QFrame *line_signUp;
    QLabel *label_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/icons/logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"	font-size: 12pt;\n"
"}\n"
"QMessageBox QPushButton {\n"
"	width: 40px;\n"
"	height: 25px;\n"
"}\n"
"QPushButtonActive{\n"
"	font-weight: 600;\n"
"	background: rgb(255, 255, 125);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("*{\n"
"	font-size: 11pt;\n"
"	padding: 0;\n"
"	margin: 0;\n"
"}\n"
"#centralWidget{\n"
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
"#mainBodyContainer, #leftMenuContainer{\n"
"	border: 1.5px solid #f4f4f4;\n"
"}\n"
"#centralWidget .QPushButton{\n"
"background: transparent;\n"
"border-radius: 5px;\n"
"font-size: 14pt;\n"
"text-align: left;\n"
"padding: 8px;\n"
"}\n"
"#centralWidget .QPushButton:hover{\n"
"font-weight: 600;\n"
"background: rgb(255, 255, 125);\n"
"}\n"
""));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        leftMenuContainer = new QWidget(centralWidget);
        leftMenuContainer->setObjectName(QString::fromUtf8("leftMenuContainer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftMenuContainer->sizePolicy().hasHeightForWidth());
        leftMenuContainer->setSizePolicy(sizePolicy);
        leftMenuContainer->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(leftMenuContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainMenuContainer = new QFrame(leftMenuContainer);
        mainMenuContainer->setObjectName(QString::fromUtf8("mainMenuContainer"));
        sizePolicy.setHeightForWidth(mainMenuContainer->sizePolicy().hasHeightForWidth());
        mainMenuContainer->setSizePolicy(sizePolicy);
        mainMenuContainer->setMinimumSize(QSize(0, 300));
        mainMenuContainer->setMaximumSize(QSize(16777215, 16777215));
        mainMenuContainer->setFrameShape(QFrame::StyledPanel);
        mainMenuContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(mainMenuContainer);
        verticalLayout_8->setSpacing(8);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_8->setContentsMargins(0, 10, 0, 10);
        hostelFinderBtn = new QPushButton(mainMenuContainer);
        hostelFinderBtn->setObjectName(QString::fromUtf8("hostelFinderBtn"));
        hostelFinderBtn->setMinimumSize(QSize(0, 50));
        hostelFinderBtn->setCursor(QCursor(Qt::PointingHandCursor));
        hostelFinderBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"text-align: center;\n"
"font-size: 20px;\n"
"}\n"
"#hostelFinderBtn:hover{\n"
"	border: none;\n"
"}"));
        hostelFinderBtn->setIcon(icon);
        hostelFinderBtn->setIconSize(QSize(30, 30));

        verticalLayout_8->addWidget(hostelFinderBtn);

        label_mainMenu = new QLabel(mainMenuContainer);
        label_mainMenu->setObjectName(QString::fromUtf8("label_mainMenu"));
        sizePolicy.setHeightForWidth(label_mainMenu->sizePolicy().hasHeightForWidth());
        label_mainMenu->setSizePolicy(sizePolicy);
        label_mainMenu->setMinimumSize(QSize(0, 40));
        label_mainMenu->setMaximumSize(QSize(16777215, 16777215));
        label_mainMenu->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_8->addWidget(label_mainMenu);

        line_mainMenu = new QFrame(mainMenuContainer);
        line_mainMenu->setObjectName(QString::fromUtf8("line_mainMenu"));
        line_mainMenu->setFrameShape(QFrame::HLine);
        line_mainMenu->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line_mainMenu);

        mainMenuSubContainer = new QFrame(mainMenuContainer);
        mainMenuSubContainer->setObjectName(QString::fromUtf8("mainMenuSubContainer"));
        mainMenuSubContainer->setStyleSheet(QString::fromUtf8(""));
        mainMenuSubContainer->setFrameShape(QFrame::StyledPanel);
        mainMenuSubContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mainMenuSubContainer);
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 5, 0, 20);
        searchHostelsMenuBtn = new QPushButton(mainMenuSubContainer);
        searchHostelsMenuBtn->setObjectName(QString::fromUtf8("searchHostelsMenuBtn"));
        searchHostelsMenuBtn->setMinimumSize(QSize(0, 50));
        searchHostelsMenuBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/icons/search.svg"), QSize(), QIcon::Normal, QIcon::Off);
        searchHostelsMenuBtn->setIcon(icon1);
        searchHostelsMenuBtn->setIconSize(QSize(24, 24));
        searchHostelsMenuBtn->setCheckable(true);
        searchHostelsMenuBtn->setAutoDefault(false);

        verticalLayout_2->addWidget(searchHostelsMenuBtn);

        boysHostelsMenuBtn = new QPushButton(mainMenuSubContainer);
        boysHostelsMenuBtn->setObjectName(QString::fromUtf8("boysHostelsMenuBtn"));
        boysHostelsMenuBtn->setMinimumSize(QSize(0, 50));
        boysHostelsMenuBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/assets/icons/boy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        boysHostelsMenuBtn->setIcon(icon2);
        boysHostelsMenuBtn->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(boysHostelsMenuBtn);

        girlsHostelsMenuBtn = new QPushButton(mainMenuSubContainer);
        girlsHostelsMenuBtn->setObjectName(QString::fromUtf8("girlsHostelsMenuBtn"));
        girlsHostelsMenuBtn->setMinimumSize(QSize(0, 50));
        girlsHostelsMenuBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/icons/girl.svg"), QSize(), QIcon::Normal, QIcon::Off);
        girlsHostelsMenuBtn->setIcon(icon3);
        girlsHostelsMenuBtn->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(girlsHostelsMenuBtn);

        loginMenuBtn = new QPushButton(mainMenuSubContainer);
        loginMenuBtn->setObjectName(QString::fromUtf8("loginMenuBtn"));
        loginMenuBtn->setMinimumSize(QSize(0, 50));
        loginMenuBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/assets/icons/user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        loginMenuBtn->setIcon(icon4);
        loginMenuBtn->setIconSize(QSize(24, 24));
        loginMenuBtn->setCheckable(true);

        verticalLayout_2->addWidget(loginMenuBtn);

        signUpMenuBtn = new QPushButton(mainMenuSubContainer);
        signUpMenuBtn->setObjectName(QString::fromUtf8("signUpMenuBtn"));
        signUpMenuBtn->setMinimumSize(QSize(0, 50));
        signUpMenuBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/assets/icons/user-plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        signUpMenuBtn->setIcon(icon5);
        signUpMenuBtn->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(signUpMenuBtn);

        exitBtn = new QPushButton(mainMenuSubContainer);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setMinimumSize(QSize(0, 50));
        exitBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/assets/icons/x-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        exitBtn->setIcon(icon6);
        exitBtn->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(exitBtn);


        verticalLayout_8->addWidget(mainMenuSubContainer);


        verticalLayout->addWidget(mainMenuContainer);

        footerContainer = new QFrame(leftMenuContainer);
        footerContainer->setObjectName(QString::fromUtf8("footerContainer"));
        footerContainer->setStyleSheet(QString::fromUtf8("padding: 2px;"));
        footerContainer->setFrameShape(QFrame::StyledPanel);
        footerContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(footerContainer);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 6, 0, -1);
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
        label_footer->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_footer);


        verticalLayout->addWidget(footerContainer, 0, Qt::AlignBottom);


        gridLayout_2->addWidget(leftMenuContainer, 0, 0, 1, 1);

        mainBodyContainer = new QWidget(centralWidget);
        mainBodyContainer->setObjectName(QString::fromUtf8("mainBodyContainer"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainBodyContainer->sizePolicy().hasHeightForWidth());
        mainBodyContainer->setSizePolicy(sizePolicy1);
        mainBodyContainer->setMinimumSize(QSize(300, 0));
        mainBodyContainer->setLayoutDirection(Qt::LeftToRight);
        mainBodyContainer->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(mainBodyContainer);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(mainBodyContainer);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy2);
        stackedWidget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	text-align : center;\n"
"	border: 1.5px solid black;\n"
"}\n"
""));
        home_page = new QWidget();
        home_page->setObjectName(QString::fromUtf8("home_page"));
        verticalLayout_4 = new QVBoxLayout(home_page);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(home_page);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame_left = new QFrame(frame);
        frame_left->setObjectName(QString::fromUtf8("frame_left"));
        sizePolicy.setHeightForWidth(frame_left->sizePolicy().hasHeightForWidth());
        frame_left->setSizePolicy(sizePolicy);
        frame_left->setFrameShape(QFrame::StyledPanel);
        frame_left->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_left);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_upSpacing = new QLabel(frame_left);
        label_upSpacing->setObjectName(QString::fromUtf8("label_upSpacing"));

        verticalLayout_6->addWidget(label_upSpacing);

        label_heading = new QLabel(frame_left);
        label_heading->setObjectName(QString::fromUtf8("label_heading"));
        sizePolicy.setHeightForWidth(label_heading->sizePolicy().hasHeightForWidth());
        label_heading->setSizePolicy(sizePolicy);
        label_heading->setMinimumSize(QSize(0, 0));
        label_heading->setMaximumSize(QSize(16777215, 50));
        label_heading->setStyleSheet(QString::fromUtf8("font: 18pt 600;"));
        label_heading->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_heading);

        label_subHeading = new QLabel(frame_left);
        label_subHeading->setObjectName(QString::fromUtf8("label_subHeading"));
        label_subHeading->setMaximumSize(QSize(16777215, 50));
        label_subHeading->setStyleSheet(QString::fromUtf8("font: 14pt \"Comic Sans MS\";"));
        label_subHeading->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_subHeading);

        label_downSpacing = new QLabel(frame_left);
        label_downSpacing->setObjectName(QString::fromUtf8("label_downSpacing"));

        verticalLayout_6->addWidget(label_downSpacing);


        horizontalLayout_2->addWidget(frame_left);

        frame_right = new QFrame(frame);
        frame_right->setObjectName(QString::fromUtf8("frame_right"));
        sizePolicy.setHeightForWidth(frame_right->sizePolicy().hasHeightForWidth());
        frame_right->setSizePolicy(sizePolicy);
        frame_right->setFrameShape(QFrame::StyledPanel);
        frame_right->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_right);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_pic_home = new QLabel(frame_right);
        label_pic_home->setObjectName(QString::fromUtf8("label_pic_home"));
        sizePolicy.setHeightForWidth(label_pic_home->sizePolicy().hasHeightForWidth());
        label_pic_home->setSizePolicy(sizePolicy);
        label_pic_home->setMinimumSize(QSize(550, 0));

        verticalLayout_7->addWidget(label_pic_home, 0, Qt::AlignHCenter);


        horizontalLayout_2->addWidget(frame_right);


        verticalLayout_4->addWidget(frame);

        stackedWidget->addWidget(home_page);
        searchHostels_page = new QWidget();
        searchHostels_page->setObjectName(QString::fromUtf8("searchHostels_page"));
        label_searchHostelsHead = new QLabel(searchHostels_page);
        label_searchHostelsHead->setObjectName(QString::fromUtf8("label_searchHostelsHead"));
        label_searchHostelsHead->setGeometry(QRect(70, -10, 251, 61));
        label_searchHostelsHead->setStyleSheet(QString::fromUtf8("font-size : 16pt;"));
        label_searchHostelsHead->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line_searchHostels = new QFrame(searchHostels_page);
        line_searchHostels->setObjectName(QString::fromUtf8("line_searchHostels"));
        line_searchHostels->setGeometry(QRect(70, 30, 150, 21));
        line_searchHostels->setMinimumSize(QSize(125, 0));
        line_searchHostels->setFrameShape(QFrame::HLine);
        line_searchHostels->setFrameShadow(QFrame::Sunken);
        backBtn = new QPushButton(searchHostels_page);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setGeometry(QRect(10, 10, 41, 31));
        backBtn->setCursor(QCursor(Qt::PointingHandCursor));
        backBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/assets/icons/arrow-left.svg"), QSize(), QIcon::Normal, QIcon::Off);
        backBtn->setIcon(icon7);
        backBtn->setIconSize(QSize(24, 24));
        hostelInfo_frame = new QFrame(searchHostels_page);
        hostelInfo_frame->setObjectName(QString::fromUtf8("hostelInfo_frame"));
        hostelInfo_frame->setGeometry(QRect(610, 10, 411, 581));
        hostelInfo_frame->setFrameShape(QFrame::StyledPanel);
        hostelInfo_frame->setFrameShadow(QFrame::Raised);
        label_prices = new QLabel(hostelInfo_frame);
        label_prices->setObjectName(QString::fromUtf8("label_prices"));
        label_prices->setGeometry(QRect(210, 230, 151, 79));
        label_prices->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_hostel_facilities = new QLabel(hostelInfo_frame);
        label_hostel_facilities->setObjectName(QString::fromUtf8("label_hostel_facilities"));
        label_hostel_facilities->setGeometry(QRect(11, 340, 181, 181));
        label_hostel_facilities->setMinimumSize(QSize(0, 0));
        label_hostel_facilities->setMaximumSize(QSize(16777215, 16777215));
        label_hostel_facilities->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_hostel_location_2 = new QLabel(hostelInfo_frame);
        label_hostel_location_2->setObjectName(QString::fromUtf8("label_hostel_location_2"));
        label_hostel_location_2->setGeometry(QRect(10, 30, 191, 31));
        label_hostel_location_2->setStyleSheet(QString::fromUtf8("font: 600 12pt;"));
        label_hostel_location_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_sharing_options_2 = new QLabel(hostelInfo_frame);
        label_sharing_options_2->setObjectName(QString::fromUtf8("label_sharing_options_2"));
        label_sharing_options_2->setGeometry(QRect(11, 200, 191, 21));
        label_sharing_options_2->setStyleSheet(QString::fromUtf8("font: 600 12pt;"));
        label_sharing_options_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_prices_2 = new QLabel(hostelInfo_frame);
        label_prices_2->setObjectName(QString::fromUtf8("label_prices_2"));
        label_prices_2->setGeometry(QRect(210, 200, 151, 21));
        label_prices_2->setStyleSheet(QString::fromUtf8("font: 600 12pt;"));
        label_prices_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        line_2 = new QFrame(hostelInfo_frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(11, 220, 131, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(hostelInfo_frame);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(210, 220, 61, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_hostel_facilities_2 = new QLabel(hostelInfo_frame);
        label_hostel_facilities_2->setObjectName(QString::fromUtf8("label_hostel_facilities_2"));
        label_hostel_facilities_2->setGeometry(QRect(10, 310, 141, 20));
        label_hostel_facilities_2->setMinimumSize(QSize(0, 0));
        label_hostel_facilities_2->setMaximumSize(QSize(16777215, 20));
        label_hostel_facilities_2->setStyleSheet(QString::fromUtf8("font: 600 12pt;"));
        label_hostel_facilities_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        line_4 = new QFrame(hostelInfo_frame);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(10, 330, 131, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(hostelInfo_frame);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(10, 520, 391, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_hostel_image = new QLabel(hostelInfo_frame);
        label_hostel_image->setObjectName(QString::fromUtf8("label_hostel_image"));
        label_hostel_image->setGeometry(QRect(209, 30, 181, 160));
        label_hostel_image->setStyleSheet(QString::fromUtf8("border: 0px solid black;"));
        label_hostel_image->setAlignment(Qt::AlignCenter);
        label_hostel_location = new QLabel(hostelInfo_frame);
        label_hostel_location->setObjectName(QString::fromUtf8("label_hostel_location"));
        label_hostel_location->setGeometry(QRect(10, 50, 191, 31));
        label_hostel_location->setStyleSheet(QString::fromUtf8(""));
        label_sharing_options = new QLabel(hostelInfo_frame);
        label_sharing_options->setObjectName(QString::fromUtf8("label_sharing_options"));
        label_sharing_options->setGeometry(QRect(11, 230, 171, 79));
        label_sharing_options->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_hostel_name = new QLabel(hostelInfo_frame);
        label_hostel_name->setObjectName(QString::fromUtf8("label_hostel_name"));
        label_hostel_name->setGeometry(QRect(10, 0, 371, 31));
        label_hostel_name->setStyleSheet(QString::fromUtf8("font: 600 14pt;"));
        label_hostel_name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        layoutWidget = new QWidget(hostelInfo_frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 530, 391, 51));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_owner_name_2 = new QLabel(layoutWidget);
        label_owner_name_2->setObjectName(QString::fromUtf8("label_owner_name_2"));
        label_owner_name_2->setStyleSheet(QString::fromUtf8("font: 600 12pt;"));

        gridLayout_3->addWidget(label_owner_name_2, 0, 0, 1, 1);

        label_contact_no_2 = new QLabel(layoutWidget);
        label_contact_no_2->setObjectName(QString::fromUtf8("label_contact_no_2"));
        label_contact_no_2->setStyleSheet(QString::fromUtf8("font: 600 12pt;"));

        gridLayout_3->addWidget(label_contact_no_2, 1, 0, 1, 1);

        label_owner_name = new QLabel(layoutWidget);
        label_owner_name->setObjectName(QString::fromUtf8("label_owner_name"));

        gridLayout_3->addWidget(label_owner_name, 0, 1, 1, 2);

        label_contact_no = new QLabel(layoutWidget);
        label_contact_no->setObjectName(QString::fromUtf8("label_contact_no"));

        gridLayout_3->addWidget(label_contact_no, 1, 1, 1, 2);

        label_availableBeds = new QLabel(hostelInfo_frame);
        label_availableBeds->setObjectName(QString::fromUtf8("label_availableBeds"));
        label_availableBeds->setGeometry(QRect(130, 170, 31, 21));
        label_totalBeds = new QLabel(hostelInfo_frame);
        label_totalBeds->setObjectName(QString::fromUtf8("label_totalBeds"));
        label_totalBeds->setGeometry(QRect(100, 140, 31, 21));
        label_availableBeds_2 = new QLabel(hostelInfo_frame);
        label_availableBeds_2->setObjectName(QString::fromUtf8("label_availableBeds_2"));
        label_availableBeds_2->setGeometry(QRect(12, 170, 111, 21));
        label_availableBeds_2->setStyleSheet(QString::fromUtf8("font: 600 12pt;"));
        label_totalBeds_2 = new QLabel(hostelInfo_frame);
        label_totalBeds_2->setObjectName(QString::fromUtf8("label_totalBeds_2"));
        label_totalBeds_2->setGeometry(QRect(12, 140, 81, 21));
        label_totalBeds_2->setStyleSheet(QString::fromUtf8("font: 600 12pt;"));
        label_hostel_category_2 = new QLabel(hostelInfo_frame);
        label_hostel_category_2->setObjectName(QString::fromUtf8("label_hostel_category_2"));
        label_hostel_category_2->setGeometry(QRect(12, 110, 71, 21));
        label_hostel_category_2->setStyleSheet(QString::fromUtf8("font: 600 12pt;\n"
""));
        label_hostel_category = new QLabel(hostelInfo_frame);
        label_hostel_category->setObjectName(QString::fromUtf8("label_hostel_category"));
        label_hostel_category->setGeometry(QRect(90, 110, 61, 21));
        label_hostel_category->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        viewOnMapBtn = new QPushButton(hostelInfo_frame);
        viewOnMapBtn->setObjectName(QString::fromUtf8("viewOnMapBtn"));
        viewOnMapBtn->setGeometry(QRect(10, 70, 101, 41));
        viewOnMapBtn->setCursor(QCursor(Qt::PointingHandCursor));
        viewOnMapBtn->setStyleSheet(QString::fromUtf8("*{\n"
"border: none;\n"
"color: rgb(85, 170, 255);\n"
"font-size : 12pt;\n"
"text-align: left;\n"
"padding:1px;\n"
"}\n"
":hover{\n"
"	background : transparent;\n"
"	text-decoration: underline;\n"
"}\n"
""));
        specialFacilitiesBox = new QWidget(hostelInfo_frame);
        specialFacilitiesBox->setObjectName(QString::fromUtf8("specialFacilitiesBox"));
        specialFacilitiesBox->setGeometry(QRect(210, 310, 191, 211));
        label_special_facilities_1 = new QLabel(specialFacilitiesBox);
        label_special_facilities_1->setObjectName(QString::fromUtf8("label_special_facilities_1"));
        label_special_facilities_1->setGeometry(QRect(0, 0, 141, 20));
        label_special_facilities_1->setMinimumSize(QSize(0, 0));
        label_special_facilities_1->setMaximumSize(QSize(16777215, 20));
        label_special_facilities_1->setStyleSheet(QString::fromUtf8("font: 600 12pt;"));
        label_special_facilities_1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        line_6 = new QFrame(specialFacilitiesBox);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(0, 20, 131, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_special_facilities = new QLabel(specialFacilitiesBox);
        label_special_facilities->setObjectName(QString::fromUtf8("label_special_facilities"));
        label_special_facilities->setGeometry(QRect(0, 30, 191, 181));
        label_special_facilities->setMinimumSize(QSize(0, 0));
        label_special_facilities->setMaximumSize(QSize(16777215, 16777215));
        label_special_facilities->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_availableBeds->raise();
        label_totalBeds->raise();
        label_availableBeds_2->raise();
        label_totalBeds_2->raise();
        label_hostel_category_2->raise();
        label_hostel_category->raise();
        label_hostel_image->raise();
        label_hostel_location->raise();
        label_sharing_options->raise();
        layoutWidget->raise();
        label_prices->raise();
        label_hostel_facilities->raise();
        label_hostel_location_2->raise();
        label_sharing_options_2->raise();
        label_prices_2->raise();
        line_2->raise();
        line_3->raise();
        label_hostel_facilities_2->raise();
        line_4->raise();
        line_5->raise();
        label_hostel_name->raise();
        viewOnMapBtn->raise();
        specialFacilitiesBox->raise();
        line = new QFrame(searchHostels_page);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(600, -10, 3, 800));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        tableWidget = new QTableWidget(searchHostels_page);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 100, 581, 491));
        tableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setSortingEnabled(false);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        searchStackedWidget = new QStackedWidget(searchHostels_page);
        searchStackedWidget->setObjectName(QString::fromUtf8("searchStackedWidget"));
        searchStackedWidget->setGeometry(QRect(10, 50, 581, 41));
        search_page = new QWidget();
        search_page->setObjectName(QString::fromUtf8("search_page"));
        label = new QLabel(search_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 151, 31));
        search_location = new QComboBox(search_page);
        search_location->setObjectName(QString::fromUtf8("search_location"));
        search_location->setGeometry(QRect(150, 10, 201, 31));
        search_location->setStyleSheet(QString::fromUtf8(""));
        search_location->setEditable(true);
        label_3 = new QLabel(search_page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 10, 91, 31));
        search_category = new QComboBox(search_page);
        search_category->addItem(QString());
        search_category->addItem(QString());
        search_category->setObjectName(QString::fromUtf8("search_category"));
        search_category->setGeometry(QRect(440, 10, 81, 31));
        search_category->setStyleSheet(QString::fromUtf8(""));
        searchHostelsBtn = new QPushButton(search_page);
        searchHostelsBtn->setObjectName(QString::fromUtf8("searchHostelsBtn"));
        searchHostelsBtn->setGeometry(QRect(530, 10, 41, 31));
        searchHostelsBtn->setCursor(QCursor(Qt::PointingHandCursor));
        searchHostelsBtn->setIcon(icon1);
        searchHostelsBtn->setIconSize(QSize(22, 22));
        searchStackedWidget->addWidget(search_page);
        boysHostels_page = new QWidget();
        boysHostels_page->setObjectName(QString::fromUtf8("boysHostels_page"));
        label_4 = new QLabel(boysHostels_page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 10, 131, 31));
        in_boysHostelName = new QLineEdit(boysHostels_page);
        in_boysHostelName->setObjectName(QString::fromUtf8("in_boysHostelName"));
        in_boysHostelName->setGeometry(QRect(190, 10, 281, 31));
        in_boysHostelName->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-radius: 5px;\n"
"padding-left: 8px;\n"
""));
        in_boysHostelName->setClearButtonEnabled(false);
        refreshBoysHostelBtn = new QPushButton(boysHostels_page);
        refreshBoysHostelBtn->setObjectName(QString::fromUtf8("refreshBoysHostelBtn"));
        refreshBoysHostelBtn->setGeometry(QRect(480, 10, 41, 31));
        refreshBoysHostelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/assets/icons/refresh-cw.svg"), QSize(), QIcon::Normal, QIcon::Off);
        refreshBoysHostelBtn->setIcon(icon8);
        refreshBoysHostelBtn->setIconSize(QSize(22, 22));
        searchStackedWidget->addWidget(boysHostels_page);
        girlsHostels_page = new QWidget();
        girlsHostels_page->setObjectName(QString::fromUtf8("girlsHostels_page"));
        in_girlsHostelName = new QLineEdit(girlsHostels_page);
        in_girlsHostelName->setObjectName(QString::fromUtf8("in_girlsHostelName"));
        in_girlsHostelName->setGeometry(QRect(190, 10, 281, 31));
        in_girlsHostelName->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-radius: 5px;\n"
"padding-left: 8px;\n"
""));
        in_girlsHostelName->setClearButtonEnabled(false);
        label_5 = new QLabel(girlsHostels_page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 10, 131, 31));
        refreshGirlsHostelBtn = new QPushButton(girlsHostels_page);
        refreshGirlsHostelBtn->setObjectName(QString::fromUtf8("refreshGirlsHostelBtn"));
        refreshGirlsHostelBtn->setGeometry(QRect(480, 10, 41, 31));
        refreshGirlsHostelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        refreshGirlsHostelBtn->setIcon(icon8);
        refreshGirlsHostelBtn->setIconSize(QSize(22, 22));
        searchStackedWidget->addWidget(girlsHostels_page);
        label_noHostels = new QLabel(searchHostels_page);
        label_noHostels->setObjectName(QString::fromUtf8("label_noHostels"));
        label_noHostels->setGeometry(QRect(10, 170, 581, 51));
        label_noHostels->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(searchHostels_page);
        login_page = new QWidget();
        login_page->setObjectName(QString::fromUtf8("login_page"));
        label_loginHead = new QLabel(login_page);
        label_loginHead->setObjectName(QString::fromUtf8("label_loginHead"));
        label_loginHead->setGeometry(QRect(30, 20, 251, 61));
        label_loginHead->setStyleSheet(QString::fromUtf8("font-size : 16pt;"));
        label_loginHead->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line_login = new QFrame(login_page);
        line_login->setObjectName(QString::fromUtf8("line_login"));
        line_login->setGeometry(QRect(30, 60, 91, 21));
        line_login->setFrameShape(QFrame::HLine);
        line_login->setFrameShadow(QFrame::Sunken);
        login_frame = new QFrame(login_page);
        login_frame->setObjectName(QString::fromUtf8("login_frame"));
        login_frame->setGeometry(QRect(30, 110, 471, 411));
        login_frame->setStyleSheet(QString::fromUtf8("#login_frame{\n"
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
        login_frame->setFrameShape(QFrame::StyledPanel);
        login_frame->setFrameShadow(QFrame::Raised);
        label_login = new QLabel(login_frame);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setGeometry(QRect(0, 10, 471, 41));
        label_login->setStyleSheet(QString::fromUtf8(""));
        label_login->setAlignment(Qt::AlignCenter);
        loginBtn = new QPushButton(login_frame);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(100, 240, 261, 45));
        loginBtn->setCursor(QCursor(Qt::PointingHandCursor));
        loginBtn->setStyleSheet(QString::fromUtf8(""));
        loginBtn->setAutoDefault(false);
        loginBtn->setFlat(false);
        login_cancelBtn = new QPushButton(login_frame);
        login_cancelBtn->setObjectName(QString::fromUtf8("login_cancelBtn"));
        login_cancelBtn->setGeometry(QRect(100, 300, 261, 45));
        login_cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        frame_login_password = new QFrame(login_frame);
        frame_login_password->setObjectName(QString::fromUtf8("frame_login_password"));
        frame_login_password->setGeometry(QRect(30, 130, 411, 81));
        frame_login_password->setFrameShape(QFrame::StyledPanel);
        frame_login_password->setFrameShadow(QFrame::Raised);
        label_login_password = new QLabel(frame_login_password);
        label_login_password->setObjectName(QString::fromUtf8("label_login_password"));
        label_login_password->setGeometry(QRect(70, 0, 131, 41));
        label_login_password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        in_login_pswrd = new QLineEdit(frame_login_password);
        in_login_pswrd->setObjectName(QString::fromUtf8("in_login_pswrd"));
        in_login_pswrd->setGeometry(QRect(70, 40, 261, 31));
        in_login_pswrd->setAutoFillBackground(false);
        in_login_pswrd->setEchoMode(QLineEdit::Password);
        frame_login_mobileNo = new QFrame(login_frame);
        frame_login_mobileNo->setObjectName(QString::fromUtf8("frame_login_mobileNo"));
        frame_login_mobileNo->setGeometry(QRect(30, 50, 411, 81));
        frame_login_mobileNo->setFrameShape(QFrame::StyledPanel);
        frame_login_mobileNo->setFrameShadow(QFrame::Raised);
        in_login_mobileNo = new QLineEdit(frame_login_mobileNo);
        in_login_mobileNo->setObjectName(QString::fromUtf8("in_login_mobileNo"));
        in_login_mobileNo->setGeometry(QRect(70, 40, 261, 31));
        in_login_mobileNo->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhFormattedNumbersOnly|Qt::ImhPreferNumbers);
        label_login_mobileNo = new QLabel(frame_login_mobileNo);
        label_login_mobileNo->setObjectName(QString::fromUtf8("label_login_mobileNo"));
        label_login_mobileNo->setGeometry(QRect(70, 0, 121, 41));
        label_login_mobileNo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        checkBox_login_pswrd = new QCheckBox(login_frame);
        checkBox_login_pswrd->setObjectName(QString::fromUtf8("checkBox_login_pswrd"));
        checkBox_login_pswrd->setGeometry(QRect(100, 210, 121, 21));
        checkBox_login_pswrd->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox_login_pswrd->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(login_frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 360, 221, 31));
        createOneBtn = new QPushButton(login_frame);
        createOneBtn->setObjectName(QString::fromUtf8("createOneBtn"));
        createOneBtn->setGeometry(QRect(260, 360, 101, 31));
        createOneBtn->setCursor(QCursor(Qt::PointingHandCursor));
        createOneBtn->setStyleSheet(QString::fromUtf8("*{\n"
"border: none;\n"
"color: rgb(85, 170, 255);\n"
"font-size : 12pt;\n"
"padding:1px;\n"
"}\n"
":hover{\n"
"	background : transparent;\n"
"	text-decoration: underline;\n"
"}\n"
""));
        label_pic_login = new QLabel(login_page);
        label_pic_login->setObjectName(QString::fromUtf8("label_pic_login"));
        label_pic_login->setGeometry(QRect(499, 10, 521, 560));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_pic_login->sizePolicy().hasHeightForWidth());
        label_pic_login->setSizePolicy(sizePolicy3);
        label_pic_login->setMinimumSize(QSize(500, 0));
        label_pic_login->setStyleSheet(QString::fromUtf8(""));
        label_7 = new QLabel(login_page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 80, 471, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Comic Sans MS\";"));
        label_7->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(login_page);
        signUp_page = new QWidget();
        signUp_page->setObjectName(QString::fromUtf8("signUp_page"));
        label_signUpHead = new QLabel(signUp_page);
        label_signUpHead->setObjectName(QString::fromUtf8("label_signUpHead"));
        label_signUpHead->setGeometry(QRect(30, 20, 251, 61));
        label_signUpHead->setStyleSheet(QString::fromUtf8("font-size : 16pt;"));
        label_signUpHead->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        signUp_frame = new QFrame(signUp_page);
        signUp_frame->setObjectName(QString::fromUtf8("signUp_frame"));
        signUp_frame->setGeometry(QRect(30, 110, 471, 471));
        signUp_frame->setStyleSheet(QString::fromUtf8("#signUp_frame{\n"
"	background-color: rgba(244, 244, 244, 100);\n"
"	border-radius: 10px;\n"
"}\n"
".QLabel{\n"
"	font-weight: 600;\n"
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
"#label_create_an_account{\n"
"	font: 600 18pt;\n"
"	color: rgb(85, 170, 255)\n"
"}\n"
""));
        signUp_frame->setFrameShape(QFrame::StyledPanel);
        signUp_frame->setFrameShadow(QFrame::Raised);
        label_create_an_account = new QLabel(signUp_frame);
        label_create_an_account->setObjectName(QString::fromUtf8("label_create_an_account"));
        label_create_an_account->setGeometry(QRect(0, 0, 471, 41));
        label_create_an_account->setStyleSheet(QString::fromUtf8(""));
        label_create_an_account->setAlignment(Qt::AlignCenter);
        signUpBtn = new QPushButton(signUp_frame);
        signUpBtn->setObjectName(QString::fromUtf8("signUpBtn"));
        signUpBtn->setGeometry(QRect(110, 270, 261, 45));
        signUpBtn->setCursor(QCursor(Qt::PointingHandCursor));
        signUpBtn->setStyleSheet(QString::fromUtf8(""));
        signUp_cancelBtn = new QPushButton(signUp_frame);
        signUp_cancelBtn->setObjectName(QString::fromUtf8("signUp_cancelBtn"));
        signUp_cancelBtn->setGeometry(QRect(110, 330, 261, 45));
        signUp_cancelBtn->setCursor(QCursor(Qt::PointingHandCursor));
        frame_password = new QFrame(signUp_frame);
        frame_password->setObjectName(QString::fromUtf8("frame_password"));
        frame_password->setGeometry(QRect(30, 140, 411, 51));
        frame_password->setFrameShape(QFrame::StyledPanel);
        frame_password->setFrameShadow(QFrame::Raised);
        label_password = new QLabel(frame_password);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(0, 10, 131, 31));
        label_password->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        in_pswrd = new QLineEdit(frame_password);
        in_pswrd->setObjectName(QString::fromUtf8("in_pswrd"));
        in_pswrd->setGeometry(QRect(140, 10, 251, 31));
        in_pswrd->setAutoFillBackground(false);
        in_pswrd->setEchoMode(QLineEdit::Password);
        frame_confirmPassword = new QFrame(signUp_frame);
        frame_confirmPassword->setObjectName(QString::fromUtf8("frame_confirmPassword"));
        frame_confirmPassword->setGeometry(QRect(30, 190, 411, 51));
        frame_confirmPassword->setFrameShape(QFrame::StyledPanel);
        frame_confirmPassword->setFrameShadow(QFrame::Raised);
        label_confirmPassword = new QLabel(frame_confirmPassword);
        label_confirmPassword->setObjectName(QString::fromUtf8("label_confirmPassword"));
        label_confirmPassword->setGeometry(QRect(0, 10, 131, 31));
        label_confirmPassword->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        in_confirm_pswrd = new QLineEdit(frame_confirmPassword);
        in_confirm_pswrd->setObjectName(QString::fromUtf8("in_confirm_pswrd"));
        in_confirm_pswrd->setGeometry(QRect(140, 10, 251, 31));
        in_confirm_pswrd->setAutoFillBackground(false);
        in_confirm_pswrd->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        in_confirm_pswrd->setEchoMode(QLineEdit::Password);
        frame_fullname = new QFrame(signUp_frame);
        frame_fullname->setObjectName(QString::fromUtf8("frame_fullname"));
        frame_fullname->setGeometry(QRect(30, 40, 411, 51));
        frame_fullname->setFrameShape(QFrame::StyledPanel);
        frame_fullname->setFrameShadow(QFrame::Raised);
        in_fullname = new QLineEdit(frame_fullname);
        in_fullname->setObjectName(QString::fromUtf8("in_fullname"));
        in_fullname->setGeometry(QRect(140, 10, 251, 31));
        label_fullname = new QLabel(frame_fullname);
        label_fullname->setObjectName(QString::fromUtf8("label_fullname"));
        label_fullname->setGeometry(QRect(0, 10, 131, 31));
        label_fullname->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_mobileNo = new QFrame(signUp_frame);
        frame_mobileNo->setObjectName(QString::fromUtf8("frame_mobileNo"));
        frame_mobileNo->setGeometry(QRect(30, 90, 411, 51));
        frame_mobileNo->setFrameShape(QFrame::StyledPanel);
        frame_mobileNo->setFrameShadow(QFrame::Raised);
        in_mobileNo = new QLineEdit(frame_mobileNo);
        in_mobileNo->setObjectName(QString::fromUtf8("in_mobileNo"));
        in_mobileNo->setGeometry(QRect(140, 10, 251, 31));
        in_mobileNo->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhFormattedNumbersOnly|Qt::ImhPreferNumbers);
        label_mobileNo = new QLabel(frame_mobileNo);
        label_mobileNo->setObjectName(QString::fromUtf8("label_mobileNo"));
        label_mobileNo->setGeometry(QRect(0, 10, 131, 31));
        label_mobileNo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        checkBox_signUp_pswrd = new QCheckBox(signUp_frame);
        checkBox_signUp_pswrd->setObjectName(QString::fromUtf8("checkBox_signUp_pswrd"));
        checkBox_signUp_pswrd->setGeometry(QRect(170, 240, 121, 21));
        checkBox_signUp_pswrd->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox_signUp_pswrd->setStyleSheet(QString::fromUtf8(":hover{\n"
"none;\n"
"}\n"
""));
        label_pswrdRules = new QLabel(signUp_frame);
        label_pswrdRules->setObjectName(QString::fromUtf8("label_pswrdRules"));
        label_pswrdRules->setGeometry(QRect(70, 380, 341, 81));
        label_pswrdRules->setStyleSheet(QString::fromUtf8("font: 600 10pt \"Segoe UI\";\n"
"color: rgb(170, 85, 255);"));
        label_pic_signUp = new QLabel(signUp_page);
        label_pic_signUp->setObjectName(QString::fromUtf8("label_pic_signUp"));
        label_pic_signUp->setGeometry(QRect(490, 10, 521, 560));
        sizePolicy3.setHeightForWidth(label_pic_signUp->sizePolicy().hasHeightForWidth());
        label_pic_signUp->setSizePolicy(sizePolicy3);
        label_pic_signUp->setMinimumSize(QSize(500, 0));
        label_pic_signUp->setStyleSheet(QString::fromUtf8(""));
        line_signUp = new QFrame(signUp_page);
        line_signUp->setObjectName(QString::fromUtf8("line_signUp"));
        line_signUp->setGeometry(QRect(30, 55, 91, 31));
        line_signUp->setFrameShape(QFrame::HLine);
        line_signUp->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(signUp_page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 80, 471, 21));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Comic Sans MS\";"));
        label_6->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(signUp_page);

        verticalLayout_3->addWidget(stackedWidget);


        gridLayout_2->addWidget(mainBodyContainer, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        searchHostelsMenuBtn->setDefault(false);
        stackedWidget->setCurrentIndex(1);
        search_location->setCurrentIndex(-1);
        loginBtn->setDefault(false);
        signUpBtn->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hostel Finder ", nullptr));
        hostelFinderBtn->setText(QCoreApplication::translate("MainWindow", "Hostel Finder", nullptr));
        label_mainMenu->setText(QCoreApplication::translate("MainWindow", "Main Menu", nullptr));
        searchHostelsMenuBtn->setText(QCoreApplication::translate("MainWindow", "Search Hostels", nullptr));
        boysHostelsMenuBtn->setText(QCoreApplication::translate("MainWindow", "Boys Hostels", nullptr));
        girlsHostelsMenuBtn->setText(QCoreApplication::translate("MainWindow", "Girls Hostels", nullptr));
        loginMenuBtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signUpMenuBtn->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        exitBtn->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_footer->setText(QCoreApplication::translate("MainWindow", "Developed By BCT 2077 Group H Students", nullptr));
        label_upSpacing->setText(QString());
        label_heading->setText(QCoreApplication::translate("MainWindow", "Welcome to Hostel Finder Application", nullptr));
        label_subHeading->setText(QCoreApplication::translate("MainWindow", "Search Hostels Near You Easily", nullptr));
        label_downSpacing->setText(QString());
        label_pic_home->setText(QString());
        label_searchHostelsHead->setText(QCoreApplication::translate("MainWindow", "Search Hostels", nullptr));
        backBtn->setText(QString());
        label_prices->setText(QString());
        label_hostel_facilities->setText(QString());
        label_hostel_location_2->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        label_sharing_options_2->setText(QCoreApplication::translate("MainWindow", "Sharing Options:", nullptr));
        label_prices_2->setText(QCoreApplication::translate("MainWindow", "Prices:", nullptr));
        label_hostel_facilities_2->setText(QCoreApplication::translate("MainWindow", "Hostel Facilities:", nullptr));
        label_hostel_image->setText(QCoreApplication::translate("MainWindow", "Hostel Photo", nullptr));
        label_hostel_location->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        label_sharing_options->setText(QString());
        label_hostel_name->setText(QCoreApplication::translate("MainWindow", "Hostel Name", nullptr));
        label_owner_name_2->setText(QCoreApplication::translate("MainWindow", "Owner Name:", nullptr));
        label_contact_no_2->setText(QCoreApplication::translate("MainWindow", "Contact No:", nullptr));
        label_owner_name->setText(QString());
        label_contact_no->setText(QString());
        label_availableBeds->setText(QString());
        label_totalBeds->setText(QString());
        label_availableBeds_2->setText(QCoreApplication::translate("MainWindow", "Available Beds:", nullptr));
        label_totalBeds_2->setText(QCoreApplication::translate("MainWindow", "Total Beds:", nullptr));
        label_hostel_category_2->setText(QCoreApplication::translate("MainWindow", "Category:", nullptr));
        label_hostel_category->setText(QString());
        viewOnMapBtn->setText(QCoreApplication::translate("MainWindow", "View on Map", nullptr));
        label_special_facilities_1->setText(QCoreApplication::translate("MainWindow", "Special Facilities:", nullptr));
        label_special_facilities->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Select/Enter Location:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Category:", nullptr));
        search_category->setItemText(0, QCoreApplication::translate("MainWindow", "Boys", nullptr));
        search_category->setItemText(1, QCoreApplication::translate("MainWindow", "Girls", nullptr));

        searchHostelsBtn->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Enter Hostel Name:", nullptr));
        in_boysHostelName->setPlaceholderText(QCoreApplication::translate("MainWindow", "E.g: Youth Boys Hostel", nullptr));
        refreshBoysHostelBtn->setText(QString());
        in_girlsHostelName->setPlaceholderText(QCoreApplication::translate("MainWindow", "E.g: Hamro Girls Hostel", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter Hostel Name:", nullptr));
        refreshGirlsHostelBtn->setText(QString());
        label_noHostels->setText(QCoreApplication::translate("MainWindow", "No any matching hostels found", nullptr));
        label_loginHead->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_login->setText(QCoreApplication::translate("MainWindow", "Enter Login Details", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        login_cancelBtn->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        label_login_password->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        in_login_pswrd->setInputMask(QString());
        in_login_pswrd->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Your Password", nullptr));
        in_login_mobileNo->setText(QString());
        in_login_mobileNo->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Your Registered Mobile No.", nullptr));
        label_login_mobileNo->setText(QCoreApplication::translate("MainWindow", "Mobile No.", nullptr));
        checkBox_login_pswrd->setText(QCoreApplication::translate("MainWindow", "Show Password", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Don't have an account ?", nullptr));
        createOneBtn->setText(QCoreApplication::translate("MainWindow", "Create one", nullptr));
        label_pic_login->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Please login to enter into Dashboard", nullptr));
        label_signUpHead->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        label_create_an_account->setText(QCoreApplication::translate("MainWindow", "Create an Account", nullptr));
        signUpBtn->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        signUp_cancelBtn->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        label_password->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        in_pswrd->setInputMask(QString());
        in_pswrd->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Your Password", nullptr));
        label_confirmPassword->setText(QCoreApplication::translate("MainWindow", "Confirm Password", nullptr));
        in_confirm_pswrd->setInputMask(QString());
        in_confirm_pswrd->setPlaceholderText(QCoreApplication::translate("MainWindow", "Re-Enter Your Password", nullptr));
        in_fullname->setPlaceholderText(QCoreApplication::translate("MainWindow", "E.g: Raj Kumar Shakya", nullptr));
        label_fullname->setText(QCoreApplication::translate("MainWindow", "Full Name", nullptr));
        in_mobileNo->setText(QString());
        in_mobileNo->setPlaceholderText(QCoreApplication::translate("MainWindow", "E.g: 9801200030", nullptr));
        label_mobileNo->setText(QCoreApplication::translate("MainWindow", "Mobile No.", nullptr));
        checkBox_signUp_pswrd->setText(QCoreApplication::translate("MainWindow", "Show Password", nullptr));
        label_pswrdRules->setText(QCoreApplication::translate("MainWindow", "Password must be at least 8 characters long and contain: \n"
"      1 Capital letter (A-Z)\n"
"      1 Number (0-9)\n"
"      1 Special character (@#$&...)", nullptr));
        label_pic_signUp->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Create an owner account to add your Hostel into Search List", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
