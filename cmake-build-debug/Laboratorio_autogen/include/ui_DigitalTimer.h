/********************************************************************************
** Form generated from reading UI file 'digitaltimer.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGITALTIMER_H
#define UI_DIGITALTIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DigitalTimer
{
public:

    void setupUi(QWidget *DigitalTimer)
    {
        if (DigitalTimer->objectName().isEmpty())
            DigitalTimer->setObjectName("DigitalTimer");
        DigitalTimer->resize(400, 300);

        retranslateUi(DigitalTimer);

        QMetaObject::connectSlotsByName(DigitalTimer);
    } // setupUi

    void retranslateUi(QWidget *DigitalTimer)
    {
        DigitalTimer->setWindowTitle(QCoreApplication::translate("DigitalTimer", "DigitalTimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DigitalTimer: public Ui_DigitalTimer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGITALTIMER_H
