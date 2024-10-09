/********************************************************************************
** Form generated from reading UI file 'digitalclock.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGITALCLOCK_H
#define UI_DIGITALCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Digitalclock
{
public:
    QLCDNumber *Digitalclock_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Digitalclock)
    {
        if (Digitalclock->objectName().isEmpty())
            Digitalclock->setObjectName("Digitalclock");
        Digitalclock->resize(400, 300);
        Digitalclock_2 = new QLCDNumber(Digitalclock);
        Digitalclock_2->setObjectName("Digitalclock_2");
        Digitalclock_2->setGeometry(QRect(120, 90, 141, 81));
        pushButton = new QPushButton(Digitalclock);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 170, 141, 41));

        retranslateUi(Digitalclock);

        QMetaObject::connectSlotsByName(Digitalclock);
    } // setupUi

    void retranslateUi(QWidget *Digitalclock)
    {
        Digitalclock->setWindowTitle(QCoreApplication::translate("Digitalclock", "Digitalclock", nullptr));
        pushButton->setText(QCoreApplication::translate("Digitalclock", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Digitalclock: public Ui_Digitalclock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGITALCLOCK_H
