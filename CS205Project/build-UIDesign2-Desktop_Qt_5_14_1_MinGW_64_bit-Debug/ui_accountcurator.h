/********************************************************************************
** Form generated from reading UI file 'accountcurator.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTCURATOR_H
#define UI_ACCOUNTCURATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accountCurator
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *homeButton;
    QPushButton *mListButton;
    QPushButton *itemsViewedButton;
    QPushButton *myCommentsButton;
    QPushButton *accountButton;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QLabel *label_12;

    void setupUi(QDialog *accountCurator)
    {
        if (accountCurator->objectName().isEmpty())
            accountCurator->setObjectName(QString::fromUtf8("accountCurator"));
        accountCurator->resize(820, 600);
        label = new QLabel(accountCurator);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 161, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Avenir Next Condensed"));
        font.setPointSize(25);
        font.setItalic(false);
        label->setFont(font);
        layoutWidget = new QWidget(accountCurator);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 791, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        homeButton = new QPushButton(layoutWidget);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));

        horizontalLayout->addWidget(homeButton);

        mListButton = new QPushButton(layoutWidget);
        mListButton->setObjectName(QString::fromUtf8("mListButton"));

        horizontalLayout->addWidget(mListButton);

        itemsViewedButton = new QPushButton(layoutWidget);
        itemsViewedButton->setObjectName(QString::fromUtf8("itemsViewedButton"));

        horizontalLayout->addWidget(itemsViewedButton);

        myCommentsButton = new QPushButton(layoutWidget);
        myCommentsButton->setObjectName(QString::fromUtf8("myCommentsButton"));

        horizontalLayout->addWidget(myCommentsButton);

        accountButton = new QPushButton(layoutWidget);
        accountButton->setObjectName(QString::fromUtf8("accountButton"));

        horizontalLayout->addWidget(accountButton);

        groupBox = new QGroupBox(accountCurator);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 140, 401, 421));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Yuanti TC"));
        font1.setPointSize(22);
        groupBox->setFont(font1);
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_5);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(2, QFormLayout::FieldRole, label_7);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(3, QFormLayout::FieldRole, label_9);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(4, QFormLayout::FieldRole, label_11);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton);

        groupBox_2 = new QGroupBox(accountCurator);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(420, 140, 401, 421));
        groupBox_2->setFont(font1);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 50, 161, 16));

        retranslateUi(accountCurator);

        QMetaObject::connectSlotsByName(accountCurator);
    } // setupUi

    void retranslateUi(QDialog *accountCurator)
    {
        accountCurator->setWindowTitle(QCoreApplication::translate("accountCurator", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("accountCurator", "<h1>Account</h1>", nullptr));
        homeButton->setText(QCoreApplication::translate("accountCurator", "Home", nullptr));
        mListButton->setText(QCoreApplication::translate("accountCurator", "Museum list", nullptr));
        itemsViewedButton->setText(QCoreApplication::translate("accountCurator", "Items Viewed", nullptr));
        myCommentsButton->setText(QCoreApplication::translate("accountCurator", "My Comments", nullptr));
        accountButton->setText(QCoreApplication::translate("accountCurator", "Account", nullptr));
        groupBox->setTitle(QCoreApplication::translate("accountCurator", "Account Info", nullptr));
        label_2->setText(QCoreApplication::translate("accountCurator", "<b>Name:</b>", nullptr));
        label_3->setText(QCoreApplication::translate("accountCurator", "getName", nullptr));
        label_4->setText(QCoreApplication::translate("accountCurator", "<b>Email:</b>", nullptr));
        label_5->setText(QCoreApplication::translate("accountCurator", "getEmail", nullptr));
        label_6->setText(QCoreApplication::translate("accountCurator", "<b>Username:</b>", nullptr));
        label_7->setText(QCoreApplication::translate("accountCurator", "getUsername", nullptr));
        label_8->setText(QCoreApplication::translate("accountCurator", "<b>Password:</b>", nullptr));
        label_9->setText(QCoreApplication::translate("accountCurator", "getPassword", nullptr));
        label_10->setText(QCoreApplication::translate("accountCurator", "<b>Account Type:</b>", nullptr));
        label_11->setText(QCoreApplication::translate("accountCurator", "getAccountType", nullptr));
        pushButton->setText(QCoreApplication::translate("accountCurator", "Edit", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("accountCurator", "My Museums", nullptr));
        label_12->setText(QCoreApplication::translate("accountCurator", "List Museums here", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accountCurator: public Ui_accountCurator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTCURATOR_H