/********************************************************************************
** Form generated from reading UI file 's_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S_MENU_H
#define UI_S_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_S_Menu
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *S_Menu)
    {
        if (S_Menu->objectName().isEmpty())
            S_Menu->setObjectName(QString::fromUtf8("S_Menu"));
        S_Menu->resize(400, 300);
        label = new QLabel(S_Menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 140, 91, 31));
        pushButton = new QPushButton(S_Menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(114, 180, 111, 24));

        retranslateUi(S_Menu);

        QMetaObject::connectSlotsByName(S_Menu);
    } // setupUi

    void retranslateUi(QWidget *S_Menu)
    {
        S_Menu->setWindowTitle(QCoreApplication::translate("S_Menu", "Form", nullptr));
        label->setText(QCoreApplication::translate("S_Menu", "S_MEnu bro", nullptr));
        pushButton->setText(QCoreApplication::translate("S_Menu", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class S_Menu: public Ui_S_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S_MENU_H
