/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *pageLogin;
    QGridLayout *gridLayout;
    QLabel *lblTitle;
    QLabel *lblUsername;
    QLineEdit *txtUsername;
    QLabel *lblPassword;
    QLineEdit *txtPassword;
    QPushButton *btnLogin;
    QPushButton *btnGuest;
    QLabel *lblStatus;
    QWidget *pageDashboard;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnLogout;
    QLabel *lblWelcome;
    QListWidget *listCategories;
    QScrollArea *scrollProducts;
    QWidget *productLayout;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *productsLayout;
    QTableWidget *tableCart;
    QLabel *lblTotal;
    QPushButton *btnCheckout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1011, 875);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        pageLogin = new QWidget();
        pageLogin->setObjectName("pageLogin");
        gridLayout = new QGridLayout(pageLogin);
        gridLayout->setObjectName("gridLayout");
        lblTitle = new QLabel(pageLogin);
        lblTitle->setObjectName("lblTitle");
        QFont font;
        font.setPointSize(18);
        lblTitle->setFont(font);

        gridLayout->addWidget(lblTitle, 0, 0, 1, 2);

        lblUsername = new QLabel(pageLogin);
        lblUsername->setObjectName("lblUsername");
        QFont font1;
        font1.setPointSize(20);
        lblUsername->setFont(font1);

        gridLayout->addWidget(lblUsername, 1, 0, 1, 2);

        txtUsername = new QLineEdit(pageLogin);
        txtUsername->setObjectName("txtUsername");

        gridLayout->addWidget(txtUsername, 2, 0, 1, 2);

        lblPassword = new QLabel(pageLogin);
        lblPassword->setObjectName("lblPassword");
        lblPassword->setFont(font1);

        gridLayout->addWidget(lblPassword, 3, 0, 1, 2);

        txtPassword = new QLineEdit(pageLogin);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(txtPassword, 4, 0, 1, 2);

        btnLogin = new QPushButton(pageLogin);
        btnLogin->setObjectName("btnLogin");

        gridLayout->addWidget(btnLogin, 5, 0, 1, 1);

        btnGuest = new QPushButton(pageLogin);
        btnGuest->setObjectName("btnGuest");

        gridLayout->addWidget(btnGuest, 5, 1, 1, 1);

        lblStatus = new QLabel(pageLogin);
        lblStatus->setObjectName("lblStatus");

        gridLayout->addWidget(lblStatus, 6, 0, 1, 2);

        stackedWidget->addWidget(pageLogin);
        pageDashboard = new QWidget();
        pageDashboard->setObjectName("pageDashboard");
        verticalLayout_2 = new QVBoxLayout(pageDashboard);
        verticalLayout_2->setObjectName("verticalLayout_2");
        btnLogout = new QPushButton(pageDashboard);
        btnLogout->setObjectName("btnLogout");

        verticalLayout_2->addWidget(btnLogout);

        lblWelcome = new QLabel(pageDashboard);
        lblWelcome->setObjectName("lblWelcome");

        verticalLayout_2->addWidget(lblWelcome);

        listCategories = new QListWidget(pageDashboard);
        listCategories->setObjectName("listCategories");

        verticalLayout_2->addWidget(listCategories);

        scrollProducts = new QScrollArea(pageDashboard);
        scrollProducts->setObjectName("scrollProducts");
        scrollProducts->setWidgetResizable(true);
        productLayout = new QWidget();
        productLayout->setObjectName("productLayout");
        productLayout->setGeometry(QRect(0, 0, 973, 221));
        verticalLayoutWidget = new QWidget(productLayout);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(19, 19, 901, 191));
        productsLayout = new QVBoxLayout(verticalLayoutWidget);
        productsLayout->setObjectName("productsLayout");
        productsLayout->setContentsMargins(0, 0, 0, 0);
        scrollProducts->setWidget(productLayout);

        verticalLayout_2->addWidget(scrollProducts);

        tableCart = new QTableWidget(pageDashboard);
        tableCart->setObjectName("tableCart");

        verticalLayout_2->addWidget(tableCart);

        lblTotal = new QLabel(pageDashboard);
        lblTotal->setObjectName("lblTotal");

        verticalLayout_2->addWidget(lblTotal);

        btnCheckout = new QPushButton(pageDashboard);
        btnCheckout->setObjectName("btnCheckout");

        verticalLayout_2->addWidget(btnCheckout);

        stackedWidget->addWidget(pageDashboard);

        horizontalLayout_4->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1011, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblTitle->setText(QCoreApplication::translate("MainWindow", "ONLINE SHOPPING PORTAL", nullptr));
        lblUsername->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        txtUsername->setText(QCoreApplication::translate("MainWindow", "Enter username", nullptr));
        lblPassword->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        txtPassword->setText(QCoreApplication::translate("MainWindow", "Enter password", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        btnGuest->setText(QCoreApplication::translate("MainWindow", "Guest Login", nullptr));
        lblStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btnLogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        lblWelcome->setText(QCoreApplication::translate("MainWindow", "Welcome", nullptr));
        lblTotal->setText(QString());
        btnCheckout->setText(QCoreApplication::translate("MainWindow", "Checkout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
