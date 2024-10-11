//
// Created by Pietro on 09/10/2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainpage.h" resolved

#include "mainpage.h"
#include "ui_mainpage.h"


mainpage::mainpage(QWidget *parent) :
        QWidget(parent), ui(new Ui::mainpage) {
    ui->setupUi(this);
    updater = new QTimer(this);
    QObject::connect(updater,SIGNAL(timeout()),this,SLOT(updateInfo()));

    updater->start(1000);
}

void mainpage::currentQTimeToTime(int &h, int &m, int &s) const {
    QTime currentTime = QTime::currentTime();
    int msec = currentTime.msecsSinceStartOfDay();
    s = msec/1000;
    m = s/60;
    h = m/60;
    s=s%60;
    m=m%60;
}
void mainpage::currentQDateToDate(int &d, int &m, int &y) const {
    QDate currentDate = QDate::currentDate();
    d=currentDate.day();
    m=currentDate.month();
    y=currentDate.year();
}

int valoretimer;
//10 sec timer
void mainpage::on_Timer1Button_clicked()
{
    valoretimer = 10;
}
//30 sec timer
void mainpage::on_Timer2Button_clicked()
{
    valoretimer = 30;
}
//1 min timer
void mainpage::on_Timer3Button_clicked()
{
    valoretimer = 60;
}
//5 min timer
void mainpage::on_Timer4Button_clicked()
{
    valoretimer = 300;
}
//2 ore timer
void mainpage::on_Timer5Button_clicked()
{
    valoretimer = 7200;
}
void mainpage::updateInfo(){
    int h,m,s;
    currentQTimeToTime(h,m,s);
    clockKeeper->setTime(h,m,s);
   // ui->timeLabel->setText(clockKeeper->showTime());

    int d,mon,y;
    currentQDateToDate(d,mon,y);
    clockKeeper->setDate(d,mon,y);
    //ui->dateLabel->setText(clockKeeper->showDate());

   // if (timerKeeper->isTimerActive())
      //  ui->timerLabel->setText(timerKeeper->GetTimeString());
}

mainpage::~mainpage() {
    delete ui;
    delete updater;
    delete timerKeeper;
}
