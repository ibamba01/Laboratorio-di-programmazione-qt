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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainpage
{
public:
    QPushButton *AvviaResetButtonCronometro;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *OraLabel;
    QLabel *DisplayOra;
    QLabel *TimerLabel;
    QPushButton *AvviaStopButtonTimer;
    QLabel *DisplayTimer;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *DataLabel;
    QLabel *DisplayData;
    QLabel *OrologioLable;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *RadioData1;
    QRadioButton *RadioData2;
    QRadioButton *RadioData3;
    QLabel *DataVisLabel;
    QLabel *DisplayCronometro;
    QLabel *CronometroLable;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *RadioOra1;
    QRadioButton *RadioOra3;
    QRadioButton *RadioOra2;
    QLabel *OraVisLabel;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *Timer1Button;
    QPushButton *Timer2Button;
    QPushButton *Timer3Button;
    QPushButton *Timer4Button;
    QPushButton *Timer5Button;
    QLineEdit *TimerCustomButtom;

    void setupUi(QWidget *mainpage)
    {
        if (mainpage->objectName().isEmpty())
            mainpage->setObjectName("mainpage");
        mainpage->resize(404, 281);
        AvviaResetButtonCronometro = new QPushButton(mainpage);
        AvviaResetButtonCronometro->setObjectName("AvviaResetButtonCronometro");
        AvviaResetButtonCronometro->setGeometry(QRect(182, 70, 161, 24));
        verticalLayoutWidget_4 = new QWidget(mainpage);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(162, 200, 160, 80));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        OraLabel = new QLabel(verticalLayoutWidget_4);
        OraLabel->setObjectName("OraLabel");

        verticalLayout_4->addWidget(OraLabel);

        DisplayOra = new QLabel(verticalLayoutWidget_4);
        DisplayOra->setObjectName("DisplayOra");
        DisplayOra->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(DisplayOra);

        TimerLabel = new QLabel(mainpage);
        TimerLabel->setObjectName("TimerLabel");
        TimerLabel->setGeometry(QRect(2, 0, 91, 31));
        AvviaStopButtonTimer = new QPushButton(mainpage);
        AvviaStopButtonTimer->setObjectName("AvviaStopButtonTimer");
        AvviaStopButtonTimer->setGeometry(QRect(2, 150, 171, 24));
        DisplayTimer = new QLabel(mainpage);
        DisplayTimer->setObjectName("DisplayTimer");
        DisplayTimer->setGeometry(QRect(0, 30, 161, 31));
        DisplayTimer->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayoutWidget_3 = new QWidget(mainpage);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(2, 200, 160, 80));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        DataLabel = new QLabel(verticalLayoutWidget_3);
        DataLabel->setObjectName("DataLabel");

        verticalLayout_3->addWidget(DataLabel);

        DisplayData = new QLabel(verticalLayoutWidget_3);
        DisplayData->setObjectName("DisplayData");
        DisplayData->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(DisplayData);

        OrologioLable = new QLabel(mainpage);
        OrologioLable->setObjectName("OrologioLable");
        OrologioLable->setGeometry(QRect(2, 180, 81, 16));
        verticalLayoutWidget_2 = new QWidget(mainpage);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(292, 120, 94, 74));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        RadioData1 = new QRadioButton(verticalLayoutWidget_2);
        RadioData1->setObjectName("RadioData1");

        verticalLayout_2->addWidget(RadioData1);

        RadioData2 = new QRadioButton(verticalLayoutWidget_2);
        RadioData2->setObjectName("RadioData2");

        verticalLayout_2->addWidget(RadioData2);

        RadioData3 = new QRadioButton(verticalLayoutWidget_2);
        RadioData3->setObjectName("RadioData3");

        verticalLayout_2->addWidget(RadioData3);

        DataVisLabel = new QLabel(mainpage);
        DataVisLabel->setObjectName("DataVisLabel");
        DataVisLabel->setGeometry(QRect(282, 100, 111, 16));
        DisplayCronometro = new QLabel(mainpage);
        DisplayCronometro->setObjectName("DisplayCronometro");
        DisplayCronometro->setGeometry(QRect(182, 30, 161, 31));
        DisplayCronometro->setAlignment(Qt::AlignmentFlag::AlignCenter);
        CronometroLable = new QLabel(mainpage);
        CronometroLable->setObjectName("CronometroLable");
        CronometroLable->setGeometry(QRect(170, 10, 81, 16));
        verticalLayoutWidget = new QWidget(mainpage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(180, 120, 62, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        RadioOra1 = new QRadioButton(verticalLayoutWidget);
        RadioOra1->setObjectName("RadioOra1");

        verticalLayout->addWidget(RadioOra1);

        RadioOra3 = new QRadioButton(verticalLayoutWidget);
        RadioOra3->setObjectName("RadioOra3");

        verticalLayout->addWidget(RadioOra3);

        RadioOra2 = new QRadioButton(verticalLayoutWidget);
        RadioOra2->setObjectName("RadioOra2");

        verticalLayout->addWidget(RadioOra2);

        OraVisLabel = new QLabel(mainpage);
        OraVisLabel->setObjectName("OraVisLabel");
        OraVisLabel->setGeometry(QRect(172, 100, 101, 16));
        formLayoutWidget = new QWidget(mainpage);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(2, 60, 161, 91));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        Timer1Button = new QPushButton(formLayoutWidget);
        Timer1Button->setObjectName("Timer1Button");

        formLayout->setWidget(0, QFormLayout::LabelRole, Timer1Button);

        Timer2Button = new QPushButton(formLayoutWidget);
        Timer2Button->setObjectName("Timer2Button");

        formLayout->setWidget(0, QFormLayout::FieldRole, Timer2Button);

        Timer3Button = new QPushButton(formLayoutWidget);
        Timer3Button->setObjectName("Timer3Button");

        formLayout->setWidget(1, QFormLayout::LabelRole, Timer3Button);

        Timer4Button = new QPushButton(formLayoutWidget);
        Timer4Button->setObjectName("Timer4Button");

        formLayout->setWidget(1, QFormLayout::FieldRole, Timer4Button);

        Timer5Button = new QPushButton(formLayoutWidget);
        Timer5Button->setObjectName("Timer5Button");

        formLayout->setWidget(2, QFormLayout::LabelRole, Timer5Button);

        TimerCustomButtom = new QLineEdit(formLayoutWidget);
        TimerCustomButtom->setObjectName("TimerCustomButtom");

        formLayout->setWidget(2, QFormLayout::FieldRole, TimerCustomButtom);


        retranslateUi(mainpage);

        QMetaObject::connectSlotsByName(mainpage);
    } // setupUi

    void retranslateUi(QWidget *mainpage)
    {
        mainpage->setWindowTitle(QCoreApplication::translate("mainpage", "mainpage", nullptr));
        AvviaResetButtonCronometro->setText(QCoreApplication::translate("mainpage", "Avvia/Reset", nullptr));
        OraLabel->setText(QCoreApplication::translate("mainpage", "Ora", nullptr));
        DisplayOra->setText(QCoreApplication::translate("mainpage", "00:00:0000", nullptr));
        TimerLabel->setText(QCoreApplication::translate("mainpage", "Timer", nullptr));
        AvviaStopButtonTimer->setText(QCoreApplication::translate("mainpage", "Avvia/Stop", nullptr));
        DisplayTimer->setText(QCoreApplication::translate("mainpage", "00:00:00", nullptr));
        DataLabel->setText(QCoreApplication::translate("mainpage", "data", nullptr));
        DisplayData->setText(QCoreApplication::translate("mainpage", "00:00:0000", nullptr));
        OrologioLable->setText(QCoreApplication::translate("mainpage", "Orologio", nullptr));
        RadioData1->setText(QCoreApplication::translate("mainpage", "GDM", nullptr));
        RadioData2->setText(QCoreApplication::translate("mainpage", "DMY", nullptr));
        RadioData3->setText(QCoreApplication::translate("mainpage", "GMA", nullptr));
        DataVisLabel->setText(QCoreApplication::translate("mainpage", "Visualizzazione Data", nullptr));
        DisplayCronometro->setText(QCoreApplication::translate("mainpage", "00:00:00", nullptr));
        CronometroLable->setText(QCoreApplication::translate("mainpage", "Cronometro", nullptr));
        RadioOra1->setText(QCoreApplication::translate("mainpage", "HMS", nullptr));
        RadioOra3->setText(QCoreApplication::translate("mainpage", "HMSA", nullptr));
        RadioOra2->setText(QCoreApplication::translate("mainpage", "HM", nullptr));
        OraVisLabel->setText(QCoreApplication::translate("mainpage", "Visualizzazione Ora", nullptr));
        Timer1Button->setText(QCoreApplication::translate("mainpage", "10 sec", nullptr));
        Timer2Button->setText(QCoreApplication::translate("mainpage", "30 sec", nullptr));
        Timer3Button->setText(QCoreApplication::translate("mainpage", "1 min", nullptr));
        Timer4Button->setText(QCoreApplication::translate("mainpage", "30 min", nullptr));
        Timer5Button->setText(QCoreApplication::translate("mainpage", "2 ore", nullptr));
        TimerCustomButtom->setText(QCoreApplication::translate("mainpage", " hh:mm:ss", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainpage: public Ui_mainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
