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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QWidget *dashboard_centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *leftMenuContainer;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QPushButton *hostelFinderBtn;
    QLabel *label_mainMenu;
    QFrame *line_mainMenu;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *searchHostelsBtn;
    QPushButton *searchHostelsBtn_4;
    QPushButton *searchHostelsBtn_2;
    QPushButton *searchHostelsBtn_6;
    QPushButton *searchHostelsBtn_5;
    QPushButton *logOutBtn;
    QFrame *footerContainer;
    QVBoxLayout *verticalLayout_5;
    QFrame *line_footer;
    QLabel *label_footer;
    QWidget *bodyContainer;

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
"QPushButton{\n"
"background: transparent;\n"
"border-radius: 5px;\n"
"font-size: 14pt;\n"
"text-align: left;\n"
"padding: 8px;\n"
"}\n"
"QPushButton:hover{\n"
"font-weight: 600;\n"
"background: rgb(255, 255, 125);\n"
"}"));
        horizontalLayout = new QHBoxLayout(dashboard_centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        leftMenuContainer = new QWidget(dashboard_centralWidget);
        leftMenuContainer->setObjectName(QString::fromUtf8("leftMenuContainer"));
        verticalLayout = new QVBoxLayout(leftMenuContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(leftMenuContainer);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        hostelFinderBtn = new QPushButton(frame);
        hostelFinderBtn->setObjectName(QString::fromUtf8("hostelFinderBtn"));
        hostelFinderBtn->setMinimumSize(QSize(0, 50));
        hostelFinderBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"text-align: center;\n"
"font-size: 20px;\n"
"}\n"
"#hostelFinderBtn:hover{\n"
"	border: none;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/icons/grid.svg"), QSize(), QIcon::Normal, QIcon::Off);
        hostelFinderBtn->setIcon(icon1);
        hostelFinderBtn->setIconSize(QSize(30, 30));

        verticalLayout_2->addWidget(hostelFinderBtn, 0, Qt::AlignTop);

        label_mainMenu = new QLabel(frame);
        label_mainMenu->setObjectName(QString::fromUtf8("label_mainMenu"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_mainMenu->sizePolicy().hasHeightForWidth());
        label_mainMenu->setSizePolicy(sizePolicy);
        label_mainMenu->setMinimumSize(QSize(0, 40));
        label_mainMenu->setMaximumSize(QSize(16777215, 16777215));
        label_mainMenu->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(label_mainMenu);

        line_mainMenu = new QFrame(frame);
        line_mainMenu->setObjectName(QString::fromUtf8("line_mainMenu"));
        line_mainMenu->setFrameShape(QFrame::HLine);
        line_mainMenu->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_mainMenu);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 5, 0, 20);
        searchHostelsBtn = new QPushButton(frame_2);
        searchHostelsBtn->setObjectName(QString::fromUtf8("searchHostelsBtn"));
        searchHostelsBtn->setMinimumSize(QSize(0, 50));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/assets/icons/plus-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        searchHostelsBtn->setIcon(icon2);
        searchHostelsBtn->setIconSize(QSize(24, 24));
        searchHostelsBtn->setAutoDefault(false);

        verticalLayout_3->addWidget(searchHostelsBtn);

        searchHostelsBtn_4 = new QPushButton(frame_2);
        searchHostelsBtn_4->setObjectName(QString::fromUtf8("searchHostelsBtn_4"));
        searchHostelsBtn_4->setMinimumSize(QSize(0, 50));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/assets/icons/file-text.svg"), QSize(), QIcon::Normal, QIcon::Off);
        searchHostelsBtn_4->setIcon(icon3);
        searchHostelsBtn_4->setIconSize(QSize(24, 24));
        searchHostelsBtn_4->setAutoDefault(false);

        verticalLayout_3->addWidget(searchHostelsBtn_4);

        searchHostelsBtn_2 = new QPushButton(frame_2);
        searchHostelsBtn_2->setObjectName(QString::fromUtf8("searchHostelsBtn_2"));
        searchHostelsBtn_2->setMinimumSize(QSize(0, 50));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/assets/icons/divide-circle.svg"), QSize(), QIcon::Normal, QIcon::Off);
        searchHostelsBtn_2->setIcon(icon4);
        searchHostelsBtn_2->setIconSize(QSize(24, 24));
        searchHostelsBtn_2->setAutoDefault(false);

        verticalLayout_3->addWidget(searchHostelsBtn_2);

        searchHostelsBtn_6 = new QPushButton(frame_2);
        searchHostelsBtn_6->setObjectName(QString::fromUtf8("searchHostelsBtn_6"));
        searchHostelsBtn_6->setMinimumSize(QSize(0, 50));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/assets/icons/user-minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        searchHostelsBtn_6->setIcon(icon5);
        searchHostelsBtn_6->setIconSize(QSize(24, 24));
        searchHostelsBtn_6->setAutoDefault(false);

        verticalLayout_3->addWidget(searchHostelsBtn_6);

        searchHostelsBtn_5 = new QPushButton(frame_2);
        searchHostelsBtn_5->setObjectName(QString::fromUtf8("searchHostelsBtn_5"));
        searchHostelsBtn_5->setMinimumSize(QSize(0, 50));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/assets/icons/edit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        searchHostelsBtn_5->setIcon(icon6);
        searchHostelsBtn_5->setIconSize(QSize(24, 24));
        searchHostelsBtn_5->setAutoDefault(false);

        verticalLayout_3->addWidget(searchHostelsBtn_5);

        logOutBtn = new QPushButton(frame_2);
        logOutBtn->setObjectName(QString::fromUtf8("logOutBtn"));
        logOutBtn->setMinimumSize(QSize(0, 50));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/assets/icons/log-out.svg"), QSize(), QIcon::Normal, QIcon::Off);
        logOutBtn->setIcon(icon7);
        logOutBtn->setIconSize(QSize(24, 24));
        logOutBtn->setAutoDefault(false);

        verticalLayout_3->addWidget(logOutBtn);


        verticalLayout_2->addWidget(frame_2);

        footerContainer = new QFrame(frame);
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
        label_footer->setStyleSheet(QString::fromUtf8(""));
        label_footer->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_footer);


        verticalLayout_2->addWidget(footerContainer, 0, Qt::AlignBottom);


        verticalLayout->addWidget(frame);


        horizontalLayout->addWidget(leftMenuContainer, 0, Qt::AlignLeft);

        bodyContainer = new QWidget(dashboard_centralWidget);
        bodyContainer->setObjectName(QString::fromUtf8("bodyContainer"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bodyContainer->sizePolicy().hasHeightForWidth());
        bodyContainer->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(bodyContainer);

        dashboard->setCentralWidget(dashboard_centralWidget);

        retranslateUi(dashboard);

        searchHostelsBtn->setDefault(false);
        searchHostelsBtn_4->setDefault(false);
        searchHostelsBtn_2->setDefault(false);
        searchHostelsBtn_6->setDefault(false);
        searchHostelsBtn_5->setDefault(false);
        logOutBtn->setDefault(false);


        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "Hostel Finder", nullptr));
        hostelFinderBtn->setText(QCoreApplication::translate("dashboard", "Dashboard", nullptr));
        label_mainMenu->setText(QCoreApplication::translate("dashboard", "Main Menu", nullptr));
        searchHostelsBtn->setText(QCoreApplication::translate("dashboard", "Add Hostel", nullptr));
        searchHostelsBtn_4->setText(QCoreApplication::translate("dashboard", "View/Edit Hostel Info", nullptr));
        searchHostelsBtn_2->setText(QCoreApplication::translate("dashboard", "Remove Your Hostel", nullptr));
        searchHostelsBtn_6->setText(QCoreApplication::translate("dashboard", "Delete Your Account", nullptr));
        searchHostelsBtn_5->setText(QCoreApplication::translate("dashboard", "Change Password", nullptr));
        logOutBtn->setText(QCoreApplication::translate("dashboard", "Log Out", nullptr));
        label_footer->setText(QCoreApplication::translate("dashboard", "Developed By BCT 2077 Group H Students", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
