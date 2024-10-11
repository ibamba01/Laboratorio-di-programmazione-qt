//
// Created by Pietro on 09/10/2024.
//

#ifndef LABORATORIO_MAINPAGE_H
#define LABORATORIO_MAINPAGE_H

#include <QMainWindow>
#include <QTimer>
#include "mainpage.h"
#include <memory>
#include "QT classes/QtClock.h"
#include "QT classes/QtTimer.h"
#include "QT classes/QtChronometer.h"




QT_BEGIN_NAMESPACE
namespace Ui { class mainpage; }
QT_END_NAMESPACE

using namespace std;


class mainpage : public QWidget {
Q_OBJECT

public:
    explicit mainpage(QWidget *parent = nullptr);

    ~mainpage() override;

    void currentQTimeToTime(int& h, int &m, int&s) const;
    void currentQDateToDate(int& d,int& m,int& y) const;


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
    void on_AvviaStopButtonTimer_clicked();
    void on_AvviaResetButtonCronometro_clicked();




private:
    Ui::mainpage *ui;
    QTimer *updater;
    QtTimer *timerKeeper;
    unique_ptr<QtClock> clockKeeper;
    unique_ptr<QtChronometer> chronometerKeeper;

};


#endif //LABORATORIO_MAINPAGE_H
