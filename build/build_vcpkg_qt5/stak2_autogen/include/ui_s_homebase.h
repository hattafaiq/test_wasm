/********************************************************************************
** Form generated from reading UI file 's_homebase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_S_HOMEBASE_H
#define UI_S_HOMEBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_S_HomeBase
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *S_HomeBase)
    {
        if (S_HomeBase->objectName().isEmpty())
            S_HomeBase->setObjectName(QString::fromUtf8("S_HomeBase"));
        S_HomeBase->resize(600, 395);
        label = new QLabel(S_HomeBase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 170, 71, 21));
        pushButton = new QPushButton(S_HomeBase);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 210, 75, 24));

        retranslateUi(S_HomeBase);

        QMetaObject::connectSlotsByName(S_HomeBase);
    } // setupUi

    void retranslateUi(QWidget *S_HomeBase)
    {
        S_HomeBase->setWindowTitle(QCoreApplication::translate("S_HomeBase", "Form", nullptr));
        label->setText(QCoreApplication::translate("S_HomeBase", "S_HomeBase", nullptr));
        pushButton->setText(QCoreApplication::translate("S_HomeBase", "Masuk", nullptr));
    } // retranslateUi

};

namespace Ui {
    class S_HomeBase: public Ui_S_HomeBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_S_HOMEBASE_H
