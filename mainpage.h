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

class mainpage : public QWidget {
Q_OBJECT

public:
    explicit mainpage(QWidget *parent = nullptr);

    ~mainpage() override;

    void currentQTimeToTime(int& h, int &m, int&s) const;
    void currentQDateToDate(int& d,int& m,int& y) const;

private slots:
    void updateInfo();
    void on_Timer1Button_clicked();
    void on_Timer2Button_clicked();
    void on_Timer3Button_clicked();
    void on_Timer4Button_clicked();
    void on_Timer5Button_clicked();



private:
    Ui::mainpage *ui;
    QTimer *updater;
    std::unique_ptr<QtClock> clockKeeper;
    QtTimer *timerKeeper;

};


#endif //LABORATORIO_MAINPAGE_H
