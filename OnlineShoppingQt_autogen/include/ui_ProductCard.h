/********************************************************************************
** Form generated from reading UI file 'ProductCard.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTCARD_H
#define UI_PRODUCTCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductCard
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *lblName;
    QLabel *lblCategory;
    QLabel *lblPrice;
    QPushButton *btnAddToCart;

    void setupUi(QWidget *ProductCard)
    {
        if (ProductCard->objectName().isEmpty())
            ProductCard->setObjectName("ProductCard");
        ProductCard->resize(1005, 684);
        verticalLayout_2 = new QVBoxLayout(ProductCard);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lblName = new QLabel(ProductCard);
        lblName->setObjectName("lblName");

        verticalLayout->addWidget(lblName);

        lblCategory = new QLabel(ProductCard);
        lblCategory->setObjectName("lblCategory");

        verticalLayout->addWidget(lblCategory);

        lblPrice = new QLabel(ProductCard);
        lblPrice->setObjectName("lblPrice");

        verticalLayout->addWidget(lblPrice);

        btnAddToCart = new QPushButton(ProductCard);
        btnAddToCart->setObjectName("btnAddToCart");

        verticalLayout->addWidget(btnAddToCart);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ProductCard);

        QMetaObject::connectSlotsByName(ProductCard);
    } // setupUi

    void retranslateUi(QWidget *ProductCard)
    {
        ProductCard->setWindowTitle(QCoreApplication::translate("ProductCard", "Form", nullptr));
        lblName->setText(QString());
        lblCategory->setText(QString());
        lblPrice->setText(QString());
        btnAddToCart->setText(QCoreApplication::translate("ProductCard", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductCard: public Ui_ProductCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTCARD_H
