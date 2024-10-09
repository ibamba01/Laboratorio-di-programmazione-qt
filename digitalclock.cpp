//
// Created by Pietro on 09/10/2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Digitalclock.h" resolved

#include <QTime>
#include "digitalclock.h"
#include "ui_Digitalclock.h"


Digitalclock::Digitalclock(QWidget *parent)
        : QLCDNumber(parent)
{
    setSegmentStyle(Filled);

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Digitalclock::showTime);
    timer->start(1000);

    showTime();

    setWindowTitle(tr("Digital Clock"));
    resize(150, 60);
}
void Digitalclock::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if ((time.second() % 2) == 0)
        text[2] = ' ';
    display(text);
}
