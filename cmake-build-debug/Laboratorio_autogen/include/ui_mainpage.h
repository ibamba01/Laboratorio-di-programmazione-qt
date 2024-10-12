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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainpage
{
public:
    QTabWidget *tabWidget;
    QWidget *ClockTab;
    QLabel *OrologioLable;
    QLabel *OraVisLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *RadioOra1;
    QRadioButton *RadioOra3;
    QRadioButton *RadioOra2;
    QLabel *DataVisLabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *RadioData2;
    QRadioButton *RadioData1;
    QRadioButton *RadioData3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *OraLabel_2;
    QLabel *DisplayOra_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *DataLabel;
    QLabel *DisplayData;
    QWidget *TimerTab;
    QLabel *TimerLabel;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *DisplayTimer;
    QFormLayout *formLayout;
    QPushButton *Timer1Button;
    QPushButton *Timer2Button;
    QPushButton *Timer3Button;
    QPushButton *Timer4Button;
    QPushButton *Timer5Button;
    QLineEdit *TimerCustomButtom;
    QPushButton *AvviaStopButtonTimer;
    QLabel *label;
    QWidget *ChronometerTab;
    QLabel *CronometroLable;
    QPushButton *AvviaResetButtonCronometro;
    QLabel *DisplayCronometro;

    void setupUi(QWidget *mainpage)
    {
        if (mainpage->objectName().isEmpty())
            mainpage->setObjectName("mainpage");
        mainpage->resize(314, 297);
        tabWidget = new QTabWidget(mainpage);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 321, 301));
        tabWidget->setTabPosition(QTabWidget::TabPosition::North);
        tabWidget->setTabShape(QTabWidget::TabShape::Rounded);
        ClockTab = new QWidget();
        ClockTab->setObjectName("ClockTab");
        OrologioLable = new QLabel(ClockTab);
        OrologioLable->setObjectName("OrologioLable");
        OrologioLable->setGeometry(QRect(10, 10, 141, 31));
        QFont font;
        font.setPointSize(12);
        OrologioLable->setFont(font);
        OraVisLabel = new QLabel(ClockTab);
        OraVisLabel->setObjectName("OraVisLabel");
        OraVisLabel->setGeometry(QRect(10, 160, 101, 16));
        verticalLayoutWidget = new QWidget(ClockTab);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(11, 190, 62, 80));
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

        DataVisLabel = new QLabel(ClockTab);
        DataVisLabel->setObjectName("DataVisLabel");
        DataVisLabel->setGeometry(QRect(180, 160, 111, 16));
        verticalLayoutWidget_2 = new QWidget(ClockTab);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(240, 190, 61, 81));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        RadioData2 = new QRadioButton(verticalLayoutWidget_2);
        RadioData2->setObjectName("RadioData2");

        verticalLayout_2->addWidget(RadioData2);

        RadioData1 = new QRadioButton(verticalLayoutWidget_2);
        RadioData1->setObjectName("RadioData1");

        verticalLayout_2->addWidget(RadioData1);

        RadioData3 = new QRadioButton(verticalLayoutWidget_2);
        RadioData3->setObjectName("RadioData3");

        verticalLayout_2->addWidget(RadioData3);

        horizontalLayoutWidget = new QWidget(ClockTab);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 50, 311, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        OraLabel_2 = new QLabel(horizontalLayoutWidget);
        OraLabel_2->setObjectName("OraLabel_2");

        verticalLayout_5->addWidget(OraLabel_2);

        DisplayOra_2 = new QLabel(horizontalLayoutWidget);
        DisplayOra_2->setObjectName("DisplayOra_2");
        DisplayOra_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(DisplayOra_2);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        DataLabel = new QLabel(horizontalLayoutWidget);
        DataLabel->setObjectName("DataLabel");

        verticalLayout_3->addWidget(DataLabel);

        DisplayData = new QLabel(horizontalLayoutWidget);
        DisplayData->setObjectName("DisplayData");
        DisplayData->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(DisplayData);


        horizontalLayout->addLayout(verticalLayout_3);

        tabWidget->addTab(ClockTab, QString());
        TimerTab = new QWidget();
        TimerTab->setObjectName("TimerTab");
        TimerLabel = new QLabel(TimerTab);
        TimerLabel->setObjectName("TimerLabel");
        TimerLabel->setGeometry(QRect(10, 10, 91, 31));
        TimerLabel->setFont(font);
        verticalLayoutWidget_3 = new QWidget(TimerTab);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(70, 60, 160, 171));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        DisplayTimer = new QLabel(verticalLayoutWidget_3);
        DisplayTimer->setObjectName("DisplayTimer");
        QFont font1;
        font1.setPointSize(11);
        DisplayTimer->setFont(font1);
        DisplayTimer->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(DisplayTimer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        Timer1Button = new QPushButton(verticalLayoutWidget_3);
        Timer1Button->setObjectName("Timer1Button");

        formLayout->setWidget(0, QFormLayout::LabelRole, Timer1Button);

        Timer2Button = new QPushButton(verticalLayoutWidget_3);
        Timer2Button->setObjectName("Timer2Button");

        formLayout->setWidget(0, QFormLayout::FieldRole, Timer2Button);

        Timer3Button = new QPushButton(verticalLayoutWidget_3);
        Timer3Button->setObjectName("Timer3Button");

        formLayout->setWidget(1, QFormLayout::LabelRole, Timer3Button);

        Timer4Button = new QPushButton(verticalLayoutWidget_3);
        Timer4Button->setObjectName("Timer4Button");

        formLayout->setWidget(1, QFormLayout::FieldRole, Timer4Button);

        Timer5Button = new QPushButton(verticalLayoutWidget_3);
        Timer5Button->setObjectName("Timer5Button");

        formLayout->setWidget(2, QFormLayout::LabelRole, Timer5Button);

        TimerCustomButtom = new QLineEdit(verticalLayoutWidget_3);
        TimerCustomButtom->setObjectName("TimerCustomButtom");

        formLayout->setWidget(2, QFormLayout::FieldRole, TimerCustomButtom);


        verticalLayout_4->addLayout(formLayout);

        AvviaStopButtonTimer = new QPushButton(verticalLayoutWidget_3);
        AvviaStopButtonTimer->setObjectName("AvviaStopButtonTimer");

        verticalLayout_4->addWidget(AvviaStopButtonTimer);

        label = new QLabel(TimerTab);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 240, 251, 31));
        QFont font2;
        font2.setPointSize(7);
        label->setFont(font2);
        tabWidget->addTab(TimerTab, QString());
        ChronometerTab = new QWidget();
        ChronometerTab->setObjectName("ChronometerTab");
        CronometroLable = new QLabel(ChronometerTab);
        CronometroLable->setObjectName("CronometroLable");
        CronometroLable->setGeometry(QRect(10, 0, 101, 51));
        CronometroLable->setFont(font1);
        AvviaResetButtonCronometro = new QPushButton(ChronometerTab);
        AvviaResetButtonCronometro->setObjectName("AvviaResetButtonCronometro");
        AvviaResetButtonCronometro->setGeometry(QRect(70, 120, 161, 24));
        DisplayCronometro = new QLabel(ChronometerTab);
        DisplayCronometro->setObjectName("DisplayCronometro");
        DisplayCronometro->setGeometry(QRect(70, 90, 161, 31));
        DisplayCronometro->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tabWidget->addTab(ChronometerTab, QString());

        retranslateUi(mainpage);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(mainpage);
    } // setupUi

    void retranslateUi(QWidget *mainpage)
    {
        mainpage->setWindowTitle(QCoreApplication::translate("mainpage", "mainpage", nullptr));
        OrologioLable->setText(QCoreApplication::translate("mainpage", "Orologio", nullptr));
        OraVisLabel->setText(QCoreApplication::translate("mainpage", "Visualizzazione Ora", nullptr));
        RadioOra1->setText(QCoreApplication::translate("mainpage", "HMS", nullptr));
        RadioOra3->setText(QCoreApplication::translate("mainpage", "HMSA", nullptr));
        RadioOra2->setText(QCoreApplication::translate("mainpage", "HM", nullptr));
        DataVisLabel->setText(QCoreApplication::translate("mainpage", "Visualizzazione Data", nullptr));
        RadioData2->setText(QCoreApplication::translate("mainpage", "DMY", nullptr));
        RadioData1->setText(QCoreApplication::translate("mainpage", "GDM", nullptr));
        RadioData3->setText(QCoreApplication::translate("mainpage", "GMA", nullptr));
        OraLabel_2->setText(QCoreApplication::translate("mainpage", "Ora", nullptr));
        DisplayOra_2->setText(QCoreApplication::translate("mainpage", "00:00:0000", nullptr));
        DataLabel->setText(QCoreApplication::translate("mainpage", "data", nullptr));
        DisplayData->setText(QCoreApplication::translate("mainpage", "00:00:0000", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ClockTab), QCoreApplication::translate("mainpage", "Clock", nullptr));
        TimerLabel->setText(QCoreApplication::translate("mainpage", "Timer", nullptr));
        DisplayTimer->setText(QCoreApplication::translate("mainpage", "00:00:00", nullptr));
        Timer1Button->setText(QCoreApplication::translate("mainpage", "10 sec", nullptr));
        Timer2Button->setText(QCoreApplication::translate("mainpage", "30 sec", nullptr));
        Timer3Button->setText(QCoreApplication::translate("mainpage", "1 min", nullptr));
        Timer4Button->setText(QCoreApplication::translate("mainpage", "5 min", nullptr));
        Timer5Button->setText(QCoreApplication::translate("mainpage", "2 ore", nullptr));
        TimerCustomButtom->setText(QCoreApplication::translate("mainpage", " hh:mm:ss", nullptr));
        AvviaStopButtonTimer->setText(QCoreApplication::translate("mainpage", "Avvia/Stop", nullptr));
        label->setText(QCoreApplication::translate("mainpage", "I valori inseriti nel campo devono essere della forma hh:mm:ss", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(TimerTab), QCoreApplication::translate("mainpage", "Timer", nullptr));
        CronometroLable->setText(QCoreApplication::translate("mainpage", "Cronometro", nullptr));
        AvviaResetButtonCronometro->setText(QCoreApplication::translate("mainpage", "Avvia/Reset", nullptr));
        DisplayCronometro->setText(QCoreApplication::translate("mainpage", "00:00:00", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ChronometerTab), QCoreApplication::translate("mainpage", "Chrono", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainpage: public Ui_mainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
