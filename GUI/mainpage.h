//
// Created by Pietro on 09/10/2024.
//

#ifndef LABORATORIO_MAINPAGE_H
#define LABORATORIO_MAINPAGE_H

#include <QMainWindow>
#include <QTimer>
#include "mainpage.h"
#include "../QtTimer.h"
#include "../QtChronometer.h"
#include "../QtClock.h"



QT_BEGIN_NAMESPACE
namespace Ui { class mainpage; }
QT_END_NAMESPACE

using namespace std;


class mainpage : public QWidget {
Q_OBJECT

public:
    explicit mainpage(QWidget *parent = nullptr);

    ~mainpage() override;

    void currentQTimeToTime(int& hours, int & min, int & sec) const;
    void currentQDateToDate(int& day, int& month ,int& year) const;
    void setUp();


private slots:
    void Update();
    void timeIsUpWarning();
    void on_Timer1Button_clicked();
    void on_Timer2Button_clicked();
    void on_Timer3Button_clicked();
    void on_Timer4Button_clicked();
    void on_Timer5Button_clicked();
    void on_TimerCustomButtom_editingFinished();
    void on_RadioOra1_clicked();
    void on_RadioOra2_clicked();
    void on_RadioOra3_clicked();
    void on_RadioData1_clicked();
    void on_RadioData2_clicked();
    void on_RadioData3_clicked();
    void on_AvviaStopButtonTimer_clicked();
    void on_AvviaStopButtonCronometro_clicked();
    void on_GiroButton_clicked();
    void on_ResetCronometro_clicked();
    void delay();

private:
    Ui::mainpage * ui;
    QTimer * updater;
    QtTimer timerKeeper;
    QtChronometer chronometerKeeper;
    QtClock clockKeeper;
};


#endif //LABORATORIO_MAINPAGE_H
