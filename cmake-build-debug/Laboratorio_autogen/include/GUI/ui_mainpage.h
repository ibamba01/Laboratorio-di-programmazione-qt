/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainpage
{
public:
    QLabel *TimerLabel;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *TensecButtomTimer;
    QPushButton *SixtyButtonTimer;
    QPushButton *OneMinButtonTimer;
    QPushButton *ThyMinButtonTimer;
    QPushButton *TwoHButtonTimer;
    QLineEdit *CustomTimer;
    QLabel *DisplayTimer;
    QLabel *CronometroLable;
    QLabel *DisplayCronometro;
    QPushButton *AvviaResetButtonCronometro;
    QPushButton *AvviaStopButtonTimer;
    QLabel *OrologioLable;
    QLabel *DisplayData;
    QLabel *OrologioOraLable;
    QLabel *DisplayOra;
    QLabel *label;
    QRadioButton *radioOra;
    QRadioButton *radioOra_2;
    QRadioButton *radioOra_3;
    QRadioButton *radioData;
    QRadioButton *RadioData;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *mainpage)
    {
        if (mainpage->objectName().isEmpty())
            mainpage->setObjectName("mainpage");
        mainpage->resize(404, 281);
        TimerLabel = new QLabel(mainpage);
        TimerLabel->setObjectName("TimerLabel");
        TimerLabel->setGeometry(QRect(10, 10, 91, 31));
        formLayoutWidget = new QWidget(mainpage);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 70, 160, 91));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        TensecButtomTimer = new QPushButton(formLayoutWidget);
        TensecButtomTimer->setObjectName("TensecButtomTimer");

        formLayout->setWidget(0, QFormLayout::LabelRole, TensecButtomTimer);

        SixtyButtonTimer = new QPushButton(formLayoutWidget);
        SixtyButtonTimer->setObjectName("SixtyButtonTimer");

        formLayout->setWidget(0, QFormLayout::FieldRole, SixtyButtonTimer);

        OneMinButtonTimer = new QPushButton(formLayoutWidget);
        OneMinButtonTimer->setObjectName("OneMinButtonTimer");

        formLayout->setWidget(1, QFormLayout::LabelRole, OneMinButtonTimer);

        ThyMinButtonTimer = new QPushButton(formLayoutWidget);
        ThyMinButtonTimer->setObjectName("ThyMinButtonTimer");

        formLayout->setWidget(1, QFormLayout::FieldRole, ThyMinButtonTimer);

        TwoHButtonTimer = new QPushButton(formLayoutWidget);
        TwoHButtonTimer->setObjectName("TwoHButtonTimer");

        formLayout->setWidget(2, QFormLayout::LabelRole, TwoHButtonTimer);

        CustomTimer = new QLineEdit(formLayoutWidget);
        CustomTimer->setObjectName("CustomTimer");

        formLayout->setWidget(2, QFormLayout::FieldRole, CustomTimer);

        DisplayTimer = new QLabel(mainpage);
        DisplayTimer->setObjectName("DisplayTimer");
        DisplayTimer->setGeometry(QRect(8, 40, 161, 31));
        DisplayTimer->setAlignment(Qt::AlignmentFlag::AlignCenter);
        CronometroLable = new QLabel(mainpage);
        CronometroLable->setObjectName("CronometroLable");
        CronometroLable->setGeometry(QRect(200, 20, 81, 16));
        DisplayCronometro = new QLabel(mainpage);
        DisplayCronometro->setObjectName("DisplayCronometro");
        DisplayCronometro->setGeometry(QRect(200, 40, 161, 31));
        DisplayCronometro->setAlignment(Qt::AlignmentFlag::AlignCenter);
        AvviaResetButtonCronometro = new QPushButton(mainpage);
        AvviaResetButtonCronometro->setObjectName("AvviaResetButtonCronometro");
        AvviaResetButtonCronometro->setGeometry(QRect(200, 70, 161, 24));
        AvviaStopButtonTimer = new QPushButton(mainpage);
        AvviaStopButtonTimer->setObjectName("AvviaStopButtonTimer");
        AvviaStopButtonTimer->setGeometry(QRect(10, 160, 161, 24));
        OrologioLable = new QLabel(mainpage);
        OrologioLable->setObjectName("OrologioLable");
        OrologioLable->setGeometry(QRect(10, 190, 81, 16));
        DisplayData = new QLabel(mainpage);
        DisplayData->setObjectName("DisplayData");
        DisplayData->setGeometry(QRect(20, 240, 161, 31));
        DisplayData->setAlignment(Qt::AlignmentFlag::AlignCenter);
        OrologioOraLable = new QLabel(mainpage);
        OrologioOraLable->setObjectName("OrologioOraLable");
        OrologioOraLable->setGeometry(QRect(190, 220, 81, 16));
        DisplayOra = new QLabel(mainpage);
        DisplayOra->setObjectName("DisplayOra");
        DisplayOra->setGeometry(QRect(180, 240, 161, 31));
        DisplayOra->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(mainpage);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 220, 49, 16));
        radioOra = new QRadioButton(mainpage);
        radioOra->setObjectName("radioOra");
        radioOra->setGeometry(QRect(190, 130, 92, 20));
        radioOra_2 = new QRadioButton(mainpage);
        radioOra_2->setObjectName("radioOra_2");
        radioOra_2->setGeometry(QRect(190, 160, 92, 20));
        radioOra_3 = new QRadioButton(mainpage);
        radioOra_3->setObjectName("radioOra_3");
        radioOra_3->setGeometry(QRect(190, 190, 92, 20));
        radioData = new QRadioButton(mainpage);
        radioData->setObjectName("radioData");
        radioData->setGeometry(QRect(310, 140, 92, 20));
        RadioData = new QRadioButton(mainpage);
        RadioData->setObjectName("RadioData");
        RadioData->setGeometry(QRect(310, 170, 92, 20));
        label_2 = new QLabel(mainpage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 110, 101, 16));
        label_3 = new QLabel(mainpage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(290, 110, 111, 16));

        retranslateUi(mainpage);
        QObject::connect(TensecButtomTimer, SIGNAL(clicked()), mainpage, SLOT(doit_when_10secbtn_ispressed()));
        QObject::connect(SixtyButtonTimer, SIGNAL(clicked()), mainpage, SLOT(doit_when_60secbtn_ispressed()));
        QObject::connect(ThyMinButtonTimer, SIGNAL(clicked()), mainpage, SLOT(doit_when_30minsecbtn_ispressed()));
        QObject::connect(OneMinButtonTimer, SIGNAL(clicked()), mainpage, SLOT(doit_when_1minbtn_ispressed()));
        QObject::connect(TwoHButtonTimer, SIGNAL(clicked()), mainpage, SLOT(doit_when_2orebtn_ispressed()));

        QMetaObject::connectSlotsByName(mainpage);
    } // setupUi

    void retranslateUi(QWidget *mainpage)
    {
        mainpage->setWindowTitle(QCoreApplication::translate("mainpage", "mainpage", nullptr));
        TimerLabel->setText(QCoreApplication::translate("mainpage", "Timer", nullptr));
        TensecButtomTimer->setText(QCoreApplication::translate("mainpage", "10 sec", nullptr));
        SixtyButtonTimer->setText(QCoreApplication::translate("mainpage", "60 sec", nullptr));
        OneMinButtonTimer->setText(QCoreApplication::translate("mainpage", "1 min", nullptr));
        ThyMinButtonTimer->setText(QCoreApplication::translate("mainpage", "30 min", nullptr));
        TwoHButtonTimer->setText(QCoreApplication::translate("mainpage", "2 ore", nullptr));
        CustomTimer->setText(QCoreApplication::translate("mainpage", "custom", nullptr));
        DisplayTimer->setText(QCoreApplication::translate("mainpage", "00:00:00", nullptr));
        CronometroLable->setText(QCoreApplication::translate("mainpage", "Cronometro", nullptr));
        DisplayCronometro->setText(QCoreApplication::translate("mainpage", "00:00:00", nullptr));
        AvviaResetButtonCronometro->setText(QCoreApplication::translate("mainpage", "Avvia/Reset", nullptr));
        AvviaStopButtonTimer->setText(QCoreApplication::translate("mainpage", "Avvia/Stop", nullptr));
        OrologioLable->setText(QCoreApplication::translate("mainpage", "Orologio", nullptr));
        DisplayData->setText(QCoreApplication::translate("mainpage", "00:00:0000", nullptr));
        OrologioOraLable->setText(QCoreApplication::translate("mainpage", "Ora", nullptr));
        DisplayOra->setText(QCoreApplication::translate("mainpage", "00:00:0000", nullptr));
        label->setText(QCoreApplication::translate("mainpage", "data", nullptr));
        radioOra->setText(QCoreApplication::translate("mainpage", "HMS", nullptr));
        radioOra_2->setText(QCoreApplication::translate("mainpage", "HM", nullptr));
        radioOra_3->setText(QCoreApplication::translate("mainpage", "HMSA", nullptr));
        radioData->setText(QCoreApplication::translate("mainpage", "DMY", nullptr));
        RadioData->setText(QCoreApplication::translate("mainpage", "GDM", nullptr));
        label_2->setText(QCoreApplication::translate("mainpage", "Visualizzazione Ora", nullptr));
        label_3->setText(QCoreApplication::translate("mainpage", "Visualizzazione Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainpage: public Ui_mainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
