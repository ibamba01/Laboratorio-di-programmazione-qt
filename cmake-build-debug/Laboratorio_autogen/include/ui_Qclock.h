/********************************************************************************
** Form generated from reading UI file 'qclock.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCLOCK_H
#define UI_QCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qclock
{
public:
    QPushButton *PremituttiBtn;
    QPushButton *premuto1;
    QPushButton *premuto2;
    QPushButton *premuto3;
    QPushButton *pushButton;
    QCheckBox *checkBox;

    void setupUi(QWidget *Qclock)
    {
        if (Qclock->objectName().isEmpty())
            Qclock->setObjectName("Qclock");
        Qclock->resize(400, 300);
        PremituttiBtn = new QPushButton(Qclock);
        PremituttiBtn->setObjectName("PremituttiBtn");
        PremituttiBtn->setGeometry(QRect(0, 20, 75, 24));
        premuto1 = new QPushButton(Qclock);
        premuto1->setObjectName("premuto1");
        premuto1->setGeometry(QRect(300, 80, 91, 31));
        premuto2 = new QPushButton(Qclock);
        premuto2->setObjectName("premuto2");
        premuto2->setGeometry(QRect(300, 10, 91, 31));
        premuto3 = new QPushButton(Qclock);
        premuto3->setObjectName("premuto3");
        premuto3->setGeometry(QRect(300, 40, 91, 41));
        pushButton = new QPushButton(Qclock);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 90, 75, 24));
        checkBox = new QCheckBox(Qclock);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 200, 78, 20));

        retranslateUi(Qclock);
        QObject::connect(PremituttiBtn, &QPushButton::clicked, premuto2, qOverload<>(&QPushButton::animateClick));
        QObject::connect(PremituttiBtn, &QPushButton::clicked, premuto1, qOverload<>(&QPushButton::animateClick));
        QObject::connect(PremituttiBtn, &QPushButton::clicked, premuto3, qOverload<>(&QPushButton::animateClick));
        QObject::connect(premuto1, &QPushButton::clicked, pushButton, qOverload<>(&QPushButton::animateClick));
        QObject::connect(pushButton, &QPushButton::clicked, checkBox, qOverload<>(&QCheckBox::toggle));

        QMetaObject::connectSlotsByName(Qclock);
    } // setupUi

    void retranslateUi(QWidget *Qclock)
    {
        Qclock->setWindowTitle(QCoreApplication::translate("Qclock", "Qclock", nullptr));
        PremituttiBtn->setText(QCoreApplication::translate("Qclock", "premo tutto", nullptr));
        premuto1->setText(QCoreApplication::translate("Qclock", "vengo premuto", nullptr));
        premuto2->setText(QCoreApplication::translate("Qclock", "vengo premuto", nullptr));
        premuto3->setText(QCoreApplication::translate("Qclock", "vengo premuto", nullptr));
        pushButton->setText(QCoreApplication::translate("Qclock", "cateno", nullptr));
        checkBox->setText(QCoreApplication::translate("Qclock", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qclock: public Ui_Qclock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCLOCK_H
