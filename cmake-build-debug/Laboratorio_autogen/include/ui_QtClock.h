/********************************************************************************
** Form generated from reading UI file 'qtclock.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCLOCK_H
#define UI_QTCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtClock
{
public:

    void setupUi(QWidget *QtClock)
    {
        if (QtClock->objectName().isEmpty())
            QtClock->setObjectName("QtClock");
        QtClock->resize(400, 300);

        retranslateUi(QtClock);

        QMetaObject::connectSlotsByName(QtClock);
    } // setupUi

    void retranslateUi(QWidget *QtClock)
    {
        QtClock->setWindowTitle(QCoreApplication::translate("QtClock", "QtClock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtClock: public Ui_QtClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCLOCK_H
