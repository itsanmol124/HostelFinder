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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *leftMenuContainer;
    QVBoxLayout *verticalLayout;
    QFrame *mainMenuContainer;
    QVBoxLayout *verticalLayout_8;
    QPushButton *hostelFinderBtn;
    QLabel *label_mainMenu;
    QFrame *line_mainMenu;
    QFrame *mainMenuSubContainer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *searchHostelsBtn;
    QPushButton *boysHostelsBtn;
    QPushButton *girlsHostelsBtn;
    QPushButton *loginMenuBtn;
    QPushButton *signUpMenuBtn;
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
    QWidget *dashboard_page;
    QLabel *label_dashboardHead;
    QFrame *line_dashboard;
    QWidget *login_page;
    QLabel *label_loginHead;
    QFrame *line_login;
    QFrame *login_frame;
    QLabel *label_login;
    QPushButton *loginBtn;
    QPushButton *createAccountBtn;
    QFrame *frame_login_password;
    QLabel *label_login_password;
    QLineEdit *in_login_pswrd;
    QToolButton *login_pswdShowBtn;
    QToolButton *login_pswdHideBtn;
    QFrame *frame_login_mobileNo;
    QLineEdit *in_login_mobileNo;
    QLabel *label_login_mobileNo;
    QLabel *label_pic_login;
    QWidget *signUp_page;
    QLabel *label_signUpHead;
    QFrame *signUp_frame;
    QLabel *label_create_an_account;
    QPushButton *signUpBtn;
    QPushButton *signUp_cancelBtn;
    QFrame *frame_password;
    QLabel *label_password;
    QLineEdit *in_pswrd;
    QToolButton *pswdShowBtn;
    QToolButton *pswdHideBtn;
    QFrame *frame_confirmPassword;
    QLabel *label_confirmPassword;
    QLineEdit *in_confirm_pswrd;
    QToolButton *pswdShowBtn_2;
    QToolButton *pswdHideBtn_2;
    QFrame *frame_fullname;
    QLineEdit *in_fullname;
    QLabel *label_fullname;
    QFrame *frame_mobileNo;
    QLineEdit *in_mobileNo;
    QLabel *label_mobileNo;
    QLabel *label_pic_signUp;
    QFrame *line_signUp;

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
"QMessageBox {\n"
"	corner-radius: 5px;\n"
"}\n"
"QMessageBox QPushButton {\n"
"	width: 40px;\n"
"	height: 25px;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("*{\n"
"	font-size: 10pt;\n"
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
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
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
        searchHostelsBtn = new QPushButton(mainMenuSubContainer);
        searchHostelsBtn->setObjectName(QString::fromUtf8("searchHostelsBtn"));
        searchHostelsBtn->setMinimumSize(QSize(0, 50));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/icons/search.svg"), QSize(), QIcon::Normal, QIcon::Off);
        searchHostelsBtn->setIcon(icon1);
        searchHostelsBtn->setIconSize(QSize(24, 24));
        searchHostelsBtn->setAutoDefault(false);

        verticalLayout_2->addWidget(searchHostelsBtn);

        boysHostelsBtn = new QPushButton(mainMenuSubContainer);
        boysHostelsBtn->setObjectName(QString::fromUtf8("boysHostelsBtn"));
        boysHostelsBtn->setMinimumSize(QSize(0, 50));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/assets/icons/boy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        boysHostelsBtn->setIcon(icon2);
        boysHostelsBtn->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(boysHostelsBtn);

        girlsHostelsBtn = new QPushButton(mainMenuSubContainer);
        girlsHostelsBtn->setObjectName(QString::fromUtf8("girlsHostelsBtn"));
        girlsHostelsBtn->setMinimumSize(QSize(0, 50));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/icons/girl.svg"), QSize(), QIcon::Normal, QIcon::Off);
        girlsHostelsBtn->setIcon(icon3);
        girlsHostelsBtn->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(girlsHostelsBtn);

        loginMenuBtn = new QPushButton(mainMenuSubContainer);
        loginMenuBtn->setObjectName(QString::fromUtf8("loginMenuBtn"));
        loginMenuBtn->setMinimumSize(QSize(0, 50));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/assets/icons/user.svg"), QSize(), QIcon::Normal, QIcon::Off);
        loginMenuBtn->setIcon(icon4);
        loginMenuBtn->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(loginMenuBtn);

        signUpMenuBtn = new QPushButton(mainMenuSubContainer);
        signUpMenuBtn->setObjectName(QString::fromUtf8("signUpMenuBtn"));
        signUpMenuBtn->setMinimumSize(QSize(0, 50));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/assets/icons/user-plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        signUpMenuBtn->setIcon(icon5);
        signUpMenuBtn->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(signUpMenuBtn);


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


        horizontalLayout->addWidget(leftMenuContainer, 0, Qt::AlignLeft);

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
        dashboard_page = new QWidget();
        dashboard_page->setObjectName(QString::fromUtf8("dashboard_page"));
        label_dashboardHead = new QLabel(dashboard_page);
        label_dashboardHead->setObjectName(QString::fromUtf8("label_dashboardHead"));
        label_dashboardHead->setGeometry(QRect(30, 20, 251, 61));
        label_dashboardHead->setStyleSheet(QString::fromUtf8("font-size : 16pt;"));
        label_dashboardHead->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line_dashboard = new QFrame(dashboard_page);
        line_dashboard->setObjectName(QString::fromUtf8("line_dashboard"));
        line_dashboard->setGeometry(QRect(30, 60, 125, 21));
        line_dashboard->setMinimumSize(QSize(125, 0));
        line_dashboard->setFrameShape(QFrame::HLine);
        line_dashboard->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(dashboard_page);
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
"	font: 600 12pt;\n"
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
        loginBtn->setGeometry(QRect(100, 250, 261, 45));
        loginBtn->setStyleSheet(QString::fromUtf8(""));
        createAccountBtn = new QPushButton(login_frame);
        createAccountBtn->setObjectName(QString::fromUtf8("createAccountBtn"));
        createAccountBtn->setGeometry(QRect(100, 320, 261, 45));
        frame_login_password = new QFrame(login_frame);
        frame_login_password->setObjectName(QString::fromUtf8("frame_login_password"));
        frame_login_password->setGeometry(QRect(30, 150, 411, 81));
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
        login_pswdShowBtn = new QToolButton(frame_login_password);
        login_pswdShowBtn->setObjectName(QString::fromUtf8("login_pswdShowBtn"));
        login_pswdShowBtn->setGeometry(QRect(290, 40, 41, 31));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/assets/icons/eye.svg"), QSize(), QIcon::Normal, QIcon::Off);
        login_pswdShowBtn->setIcon(icon6);
        login_pswdShowBtn->setIconSize(QSize(20, 20));
        login_pswdHideBtn = new QToolButton(frame_login_password);
        login_pswdHideBtn->setObjectName(QString::fromUtf8("login_pswdHideBtn"));
        login_pswdHideBtn->setGeometry(QRect(290, 40, 41, 31));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/assets/icons/eye-off.svg"), QSize(), QIcon::Normal, QIcon::Off);
        login_pswdHideBtn->setIcon(icon7);
        login_pswdHideBtn->setIconSize(QSize(20, 20));
        frame_login_mobileNo = new QFrame(login_frame);
        frame_login_mobileNo->setObjectName(QString::fromUtf8("frame_login_mobileNo"));
        frame_login_mobileNo->setGeometry(QRect(30, 60, 411, 81));
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
        label_pic_login = new QLabel(login_page);
        label_pic_login->setObjectName(QString::fromUtf8("label_pic_login"));
        label_pic_login->setGeometry(QRect(490, 10, 501, 560));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_pic_login->sizePolicy().hasHeightForWidth());
        label_pic_login->setSizePolicy(sizePolicy2);
        label_pic_login->setMinimumSize(QSize(500, 0));
        label_pic_login->setStyleSheet(QString::fromUtf8(""));
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
        signUp_frame->setGeometry(QRect(30, 110, 471, 411));
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
        label_create_an_account->setGeometry(QRect(0, 10, 471, 41));
        label_create_an_account->setStyleSheet(QString::fromUtf8(""));
        label_create_an_account->setAlignment(Qt::AlignCenter);
        signUpBtn = new QPushButton(signUp_frame);
        signUpBtn->setObjectName(QString::fromUtf8("signUpBtn"));
        signUpBtn->setGeometry(QRect(110, 280, 261, 45));
        signUpBtn->setStyleSheet(QString::fromUtf8(""));
        signUp_cancelBtn = new QPushButton(signUp_frame);
        signUp_cancelBtn->setObjectName(QString::fromUtf8("signUp_cancelBtn"));
        signUp_cancelBtn->setGeometry(QRect(110, 340, 261, 45));
        frame_password = new QFrame(signUp_frame);
        frame_password->setObjectName(QString::fromUtf8("frame_password"));
        frame_password->setGeometry(QRect(30, 150, 411, 51));
        frame_password->setFrameShape(QFrame::StyledPanel);
        frame_password->setFrameShadow(QFrame::Raised);
        label_password = new QLabel(frame_password);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(0, 10, 121, 31));
        label_password->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        in_pswrd = new QLineEdit(frame_password);
        in_pswrd->setObjectName(QString::fromUtf8("in_pswrd"));
        in_pswrd->setGeometry(QRect(130, 10, 261, 31));
        in_pswrd->setAutoFillBackground(false);
        in_pswrd->setEchoMode(QLineEdit::Password);
        pswdShowBtn = new QToolButton(frame_password);
        pswdShowBtn->setObjectName(QString::fromUtf8("pswdShowBtn"));
        pswdShowBtn->setGeometry(QRect(350, 10, 41, 31));
        pswdShowBtn->setIcon(icon6);
        pswdShowBtn->setIconSize(QSize(20, 20));
        pswdHideBtn = new QToolButton(frame_password);
        pswdHideBtn->setObjectName(QString::fromUtf8("pswdHideBtn"));
        pswdHideBtn->setGeometry(QRect(350, 10, 41, 31));
        pswdHideBtn->setIcon(icon7);
        pswdHideBtn->setIconSize(QSize(20, 20));
        frame_confirmPassword = new QFrame(signUp_frame);
        frame_confirmPassword->setObjectName(QString::fromUtf8("frame_confirmPassword"));
        frame_confirmPassword->setGeometry(QRect(30, 200, 411, 51));
        frame_confirmPassword->setFrameShape(QFrame::StyledPanel);
        frame_confirmPassword->setFrameShadow(QFrame::Raised);
        label_confirmPassword = new QLabel(frame_confirmPassword);
        label_confirmPassword->setObjectName(QString::fromUtf8("label_confirmPassword"));
        label_confirmPassword->setGeometry(QRect(0, 10, 121, 31));
        label_confirmPassword->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        in_confirm_pswrd = new QLineEdit(frame_confirmPassword);
        in_confirm_pswrd->setObjectName(QString::fromUtf8("in_confirm_pswrd"));
        in_confirm_pswrd->setGeometry(QRect(130, 10, 261, 31));
        in_confirm_pswrd->setAutoFillBackground(false);
        in_confirm_pswrd->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        in_confirm_pswrd->setEchoMode(QLineEdit::Password);
        pswdShowBtn_2 = new QToolButton(frame_confirmPassword);
        pswdShowBtn_2->setObjectName(QString::fromUtf8("pswdShowBtn_2"));
        pswdShowBtn_2->setGeometry(QRect(350, 10, 41, 31));
        pswdShowBtn_2->setIcon(icon6);
        pswdShowBtn_2->setIconSize(QSize(20, 20));
        pswdHideBtn_2 = new QToolButton(frame_confirmPassword);
        pswdHideBtn_2->setObjectName(QString::fromUtf8("pswdHideBtn_2"));
        pswdHideBtn_2->setGeometry(QRect(350, 10, 41, 31));
        pswdHideBtn_2->setIcon(icon7);
        pswdHideBtn_2->setIconSize(QSize(20, 20));
        frame_fullname = new QFrame(signUp_frame);
        frame_fullname->setObjectName(QString::fromUtf8("frame_fullname"));
        frame_fullname->setGeometry(QRect(30, 50, 411, 51));
        frame_fullname->setFrameShape(QFrame::StyledPanel);
        frame_fullname->setFrameShadow(QFrame::Raised);
        in_fullname = new QLineEdit(frame_fullname);
        in_fullname->setObjectName(QString::fromUtf8("in_fullname"));
        in_fullname->setGeometry(QRect(130, 10, 261, 31));
        label_fullname = new QLabel(frame_fullname);
        label_fullname->setObjectName(QString::fromUtf8("label_fullname"));
        label_fullname->setGeometry(QRect(0, 10, 121, 31));
        label_fullname->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        frame_mobileNo = new QFrame(signUp_frame);
        frame_mobileNo->setObjectName(QString::fromUtf8("frame_mobileNo"));
        frame_mobileNo->setGeometry(QRect(30, 100, 411, 51));
        frame_mobileNo->setFrameShape(QFrame::StyledPanel);
        frame_mobileNo->setFrameShadow(QFrame::Raised);
        in_mobileNo = new QLineEdit(frame_mobileNo);
        in_mobileNo->setObjectName(QString::fromUtf8("in_mobileNo"));
        in_mobileNo->setGeometry(QRect(130, 10, 261, 31));
        in_mobileNo->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhFormattedNumbersOnly|Qt::ImhPreferNumbers);
        label_mobileNo = new QLabel(frame_mobileNo);
        label_mobileNo->setObjectName(QString::fromUtf8("label_mobileNo"));
        label_mobileNo->setGeometry(QRect(0, 10, 121, 31));
        label_mobileNo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_pic_signUp = new QLabel(signUp_page);
        label_pic_signUp->setObjectName(QString::fromUtf8("label_pic_signUp"));
        label_pic_signUp->setGeometry(QRect(480, 10, 501, 560));
        sizePolicy2.setHeightForWidth(label_pic_signUp->sizePolicy().hasHeightForWidth());
        label_pic_signUp->setSizePolicy(sizePolicy2);
        label_pic_signUp->setMinimumSize(QSize(500, 0));
        label_pic_signUp->setStyleSheet(QString::fromUtf8(""));
        line_signUp = new QFrame(signUp_page);
        line_signUp->setObjectName(QString::fromUtf8("line_signUp"));
        line_signUp->setGeometry(QRect(30, 55, 91, 31));
        line_signUp->setFrameShape(QFrame::HLine);
        line_signUp->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(signUp_page);

        verticalLayout_3->addWidget(stackedWidget);


        horizontalLayout->addWidget(mainBodyContainer);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        searchHostelsBtn->setDefault(false);
        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hostel Finder ", nullptr));
#if QT_CONFIG(tooltip)
        hostelFinderBtn->setToolTip(QCoreApplication::translate("MainWindow", "Hostel Finder", nullptr));
#endif // QT_CONFIG(tooltip)
        hostelFinderBtn->setText(QCoreApplication::translate("MainWindow", "Hostel Finder", nullptr));
        label_mainMenu->setText(QCoreApplication::translate("MainWindow", "Main Menu", nullptr));
#if QT_CONFIG(tooltip)
        searchHostelsBtn->setToolTip(QCoreApplication::translate("MainWindow", "Search hostels around you", nullptr));
#endif // QT_CONFIG(tooltip)
        searchHostelsBtn->setText(QCoreApplication::translate("MainWindow", "Search Hostels", nullptr));
#if QT_CONFIG(tooltip)
        boysHostelsBtn->setToolTip(QCoreApplication::translate("MainWindow", "See Boys hostels around you", nullptr));
#endif // QT_CONFIG(tooltip)
        boysHostelsBtn->setText(QCoreApplication::translate("MainWindow", "Boys Hostels", nullptr));
#if QT_CONFIG(tooltip)
        girlsHostelsBtn->setToolTip(QCoreApplication::translate("MainWindow", "See Girls hostels around you", nullptr));
#endif // QT_CONFIG(tooltip)
        girlsHostelsBtn->setText(QCoreApplication::translate("MainWindow", "Girls Hostels", nullptr));
#if QT_CONFIG(tooltip)
        loginMenuBtn->setToolTip(QCoreApplication::translate("MainWindow", "Manage your hostel information", nullptr));
#endif // QT_CONFIG(tooltip)
        loginMenuBtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
#if QT_CONFIG(tooltip)
        signUpMenuBtn->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Create an account to list your hostel</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        signUpMenuBtn->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        label_footer->setText(QCoreApplication::translate("MainWindow", "Developed By BCT 2077 Group H Students", nullptr));
        label_upSpacing->setText(QString());
        label_heading->setText(QCoreApplication::translate("MainWindow", "Welcome to Hostel Finder Application", nullptr));
        label_subHeading->setText(QCoreApplication::translate("MainWindow", "Search Hostels Near You Easily", nullptr));
        label_downSpacing->setText(QString());
        label_pic_home->setText(QString());
        label_dashboardHead->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        label_loginHead->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_login->setText(QCoreApplication::translate("MainWindow", "Enter Login Details", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        createAccountBtn->setText(QCoreApplication::translate("MainWindow", "Create an account", nullptr));
        label_login_password->setText(QCoreApplication::translate("MainWindow", "Enter Password", nullptr));
        in_login_pswrd->setInputMask(QString());
        in_login_pswrd->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Your Password", nullptr));
        login_pswdShowBtn->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        login_pswdHideBtn->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        in_login_mobileNo->setText(QString());
        in_login_mobileNo->setPlaceholderText(QCoreApplication::translate("MainWindow", "E.g: 9801200030", nullptr));
        label_login_mobileNo->setText(QCoreApplication::translate("MainWindow", "Enter Mobile No", nullptr));
        label_pic_login->setText(QString());
        label_signUpHead->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        label_create_an_account->setText(QCoreApplication::translate("MainWindow", "Create an account", nullptr));
        signUpBtn->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        signUp_cancelBtn->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        label_password->setText(QCoreApplication::translate("MainWindow", "Enter Password", nullptr));
        in_pswrd->setInputMask(QString());
        in_pswrd->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Your Password", nullptr));
        pswdShowBtn->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pswdHideBtn->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_confirmPassword->setText(QCoreApplication::translate("MainWindow", "Confirm Password", nullptr));
        in_confirm_pswrd->setInputMask(QString());
        in_confirm_pswrd->setPlaceholderText(QCoreApplication::translate("MainWindow", "Confirm Your Password", nullptr));
        pswdShowBtn_2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pswdHideBtn_2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        in_fullname->setPlaceholderText(QCoreApplication::translate("MainWindow", "E.g: Raj Kumar Shakya", nullptr));
        label_fullname->setText(QCoreApplication::translate("MainWindow", "Enter Full Name", nullptr));
        in_mobileNo->setText(QString());
        in_mobileNo->setPlaceholderText(QCoreApplication::translate("MainWindow", "E.g: 9801200030", nullptr));
        label_mobileNo->setText(QCoreApplication::translate("MainWindow", "Enter Mobile No", nullptr));
        label_pic_signUp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
