//
// Created by Pietro on 09/10/2024.
//

#include <QTimer>
#include "QtTimer.h"


QtTimer::QtTimer() {
}

//QtTimer::~QtTimer() {
  //  delete timer;
//}

bool QtTimer::isRunning() const {
    return timer.isActive();
}

bool QtTimer::startTimer() {
    if (isRunning())
        return false;
    timer.start();
    return true;
}

bool QtTimer::stopTimer(){
    if (!isRunning())
        return false;
    timer.stop();
    return true;
}

bool QtTimer::setTimer(QTime time) { //imposta il timer
    if (isRunning())
        return false;
    timer.setInterval(time.msec());
    return true;
}

void QtTimer::pause() {
    int remainingTime = timer.remainingTime(); //remainingTime ha bisogno che il timer sia attivo
    timer.stop();
    timer.setInterval(remainingTime);
}

QString QtTimer::GetTimeString() const {
    int totalSeconds = timer.remainingTime() / 1000;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60; // % restituisce il resto della divisione
    int seconds = totalSeconds % 60;

    QTime uscita(hours, minutes, seconds);
    return uscita.toString("hh:mm:ss");
}