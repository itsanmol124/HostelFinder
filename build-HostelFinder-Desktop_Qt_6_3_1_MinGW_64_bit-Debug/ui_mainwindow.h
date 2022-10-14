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
    QPushButton *dashboardBtn;
    QPushButton *signUpBtn;
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
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_pic;
    QWidget *signUp_page;
    QLabel *label_signUp;
    QFrame *frame_2;
    QLineEdit *in_username;
    QLabel *label_login_details;
    QLabel *label_username;
    QLineEdit *in_pswrd;
    QLabel *label_password;
    QPushButton *login_btn;
    QPushButton *pushButton;
    QToolButton *pswdShowBtn;
    QToolButton *pswdHideBtn;
    QLabel *label_fullname;
    QLineEdit *in_fullname;
    QLineEdit *in_contactNo;
    QLabel *label_contactNo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/icons/logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"	font: 500 10pt \"Montserrat\";\n"
"	margin: 0;\n"
"	padding: 0;\n"
"}\n"
"#centralWidget{\n"
"	background: #fff;\n"
"}\n"
"#label_mainMenu{\n"
"	font-size: 14pt;\n"
"	font-weight: 600;\n"
"}\n"
"#label_footer{\n"
"	font: 400 8pt \"Montserrat\";\n"
"}\n"
"#mainBodyContainer{\n"
"	border: 1.5px solid #f4f4f4;\n"
"}\n"
"#leftMenuContainer{\n"
"	border: 1.5px solid #f4f4f4;\n"
"}\n"
"QPushButton{\n"
"background: transparent;\n"
"border-radius: 5px;\n"
"font-size: 12pt;\n"
"text-align: left;\n"
"padding: 10px;\n"
"}\n"
"QPushButton:hover{\n"
"font-weight: 600;\n"
"background: rgb(255, 255, 125);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(2);
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
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat")});
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setKerning(true);
        label_mainMenu->setFont(font);
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

        dashboardBtn = new QPushButton(mainMenuSubContainer);
        dashboardBtn->setObjectName(QString::fromUtf8("dashboardBtn"));
        dashboardBtn->setMinimumSize(QSize(0, 50));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/assets/icons/trello.svg"), QSize(), QIcon::Normal, QIcon::Off);
        dashboardBtn->setIcon(icon4);
        dashboardBtn->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(dashboardBtn);

        signUpBtn = new QPushButton(mainMenuSubContainer);
        signUpBtn->setObjectName(QString::fromUtf8("signUpBtn"));
        signUpBtn->setMinimumSize(QSize(0, 50));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/assets/icons/user-plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        signUpBtn->setIcon(icon5);
        signUpBtn->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(signUpBtn);


        verticalLayout_8->addWidget(mainMenuSubContainer);


        verticalLayout->addWidget(mainMenuContainer);

        footerContainer = new QFrame(leftMenuContainer);
        footerContainer->setObjectName(QString::fromUtf8("footerContainer"));
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
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat")});
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        label_footer->setFont(font1);
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
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        stackedWidget = new QStackedWidget(mainBodyContainer);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	text-align : center;\n"
"	border: 1px solid black;\n"
"}"));
        home_page = new QWidget();
        home_page->setObjectName(QString::fromUtf8("home_page"));
        verticalLayout_4 = new QVBoxLayout(home_page);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(home_page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_6->addWidget(label_4);

        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 50));
        label->setStyleSheet(QString::fromUtf8("font-size: 18pt;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label);

        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 50));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"Comic Sans MS\";"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_2);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_6->addWidget(label_3);


        horizontalLayout_2->addWidget(frame_3);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_pic = new QLabel(frame_4);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_pic->sizePolicy().hasHeightForWidth());
        label_pic->setSizePolicy(sizePolicy2);
        label_pic->setMinimumSize(QSize(400, 0));

        verticalLayout_7->addWidget(label_pic);


        horizontalLayout_2->addWidget(frame_4, 0, Qt::AlignRight);


        verticalLayout_4->addWidget(frame);

        stackedWidget->addWidget(home_page);
        signUp_page = new QWidget();
        signUp_page->setObjectName(QString::fromUtf8("signUp_page"));
        label_signUp = new QLabel(signUp_page);
        label_signUp->setObjectName(QString::fromUtf8("label_signUp"));
        label_signUp->setGeometry(QRect(30, 10, 251, 51));
        label_signUp->setStyleSheet(QString::fromUtf8("font-size : 16pt;"));
        frame_2 = new QFrame(signUp_page);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(30, 60, 511, 411));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        in_username = new QLineEdit(frame_2);
        in_username->setObjectName(QString::fromUtf8("in_username"));
        in_username->setGeometry(QRect(100, 140, 261, 31));
        label_login_details = new QLabel(frame_2);
        label_login_details->setObjectName(QString::fromUtf8("label_login_details"));
        label_login_details->setGeometry(QRect(10, 10, 361, 41));
        label_login_details->setStyleSheet(QString::fromUtf8("font-size: 14pt;"));
        label_login_details->setAlignment(Qt::AlignCenter);
        label_username = new QLabel(frame_2);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setGeometry(QRect(20, 140, 111, 31));
        in_pswrd = new QLineEdit(frame_2);
        in_pswrd->setObjectName(QString::fromUtf8("in_pswrd"));
        in_pswrd->setGeometry(QRect(100, 180, 261, 31));
        in_pswrd->setAutoFillBackground(false);
        in_pswrd->setEchoMode(QLineEdit::Password);
        label_password = new QLabel(frame_2);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setGeometry(QRect(20, 180, 81, 31));
        login_btn = new QPushButton(frame_2);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        login_btn->setGeometry(QRect(100, 240, 261, 41));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 290, 261, 41));
        pswdShowBtn = new QToolButton(frame_2);
        pswdShowBtn->setObjectName(QString::fromUtf8("pswdShowBtn"));
        pswdShowBtn->setGeometry(QRect(320, 180, 41, 31));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/assets/icons/eye.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pswdShowBtn->setIcon(icon6);
        pswdShowBtn->setIconSize(QSize(24, 24));
        pswdHideBtn = new QToolButton(frame_2);
        pswdHideBtn->setObjectName(QString::fromUtf8("pswdHideBtn"));
        pswdHideBtn->setGeometry(QRect(320, 180, 41, 31));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/assets/icons/eye-off.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pswdHideBtn->setIcon(icon7);
        pswdHideBtn->setIconSize(QSize(24, 24));
        label_fullname = new QLabel(frame_2);
        label_fullname->setObjectName(QString::fromUtf8("label_fullname"));
        label_fullname->setGeometry(QRect(20, 60, 111, 31));
        in_fullname = new QLineEdit(frame_2);
        in_fullname->setObjectName(QString::fromUtf8("in_fullname"));
        in_fullname->setGeometry(QRect(100, 60, 261, 31));
        in_contactNo = new QLineEdit(frame_2);
        in_contactNo->setObjectName(QString::fromUtf8("in_contactNo"));
        in_contactNo->setGeometry(QRect(100, 100, 261, 31));
        in_contactNo->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhFormattedNumbersOnly|Qt::ImhPreferNumbers);
        label_contactNo = new QLabel(frame_2);
        label_contactNo->setObjectName(QString::fromUtf8("label_contactNo"));
        label_contactNo->setGeometry(QRect(20, 100, 111, 31));
        stackedWidget->addWidget(signUp_page);

        verticalLayout_3->addWidget(stackedWidget);


        horizontalLayout->addWidget(mainBodyContainer);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        searchHostelsBtn->setDefault(false);


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
        dashboardBtn->setToolTip(QCoreApplication::translate("MainWindow", "Manage your hostel information", nullptr));
#endif // QT_CONFIG(tooltip)
        dashboardBtn->setText(QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
#if QT_CONFIG(tooltip)
        signUpBtn->setToolTip(QCoreApplication::translate("MainWindow", "Create new account to list your hostel", nullptr));
#endif // QT_CONFIG(tooltip)
        signUpBtn->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        label_footer->setText(QCoreApplication::translate("MainWindow", "Developed By BCT 2077 Group H Students", nullptr));
        label_4->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Welcome to Hostel Finder Application", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Search Hostels Near You Easily", nullptr));
        label_3->setText(QString());
        label_pic->setText(QString());
        label_signUp->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        in_username->setPlaceholderText(QCoreApplication::translate("MainWindow", "E.g: raj_shakya", nullptr));
        label_login_details->setText(QCoreApplication::translate("MainWindow", "Create an account", nullptr));
        label_username->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        in_pswrd->setInputMask(QString());
        in_pswrd->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Your Password", nullptr));
        label_password->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        login_btn->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        pswdShowBtn->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pswdHideBtn->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_fullname->setText(QCoreApplication::translate("MainWindow", "Full Name", nullptr));
        in_fullname->setPlaceholderText(QCoreApplication::translate("MainWindow", "E.g: Raj Kumar Shakya", nullptr));
        in_contactNo->setText(QString());
        in_contactNo->setPlaceholderText(QCoreApplication::translate("MainWindow", "E.g: 9801200030", nullptr));
        label_contactNo->setText(QCoreApplication::translate("MainWindow", "Contact No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
