//
// Created by Pietro on 10/10/2024.
//

#include "QtChronometer.h"
QtChronometer::QtChronometer() {
active = false;
}
QtChronometer::~QtChronometer() {
    delete elapsedTimer;
}

bool QtChronometer::startChronometer(){
    if(!active){
        elapsedTimer->start();
        active = true;
        return true;
    }
    return false;
}

bool QtChronometer::isRunning() {
    if (elapsedTimer->isValid()){
        active = true;
        return active;
    }
    return active;
}
bool QtChronometer::stopChronometer() {
    if (active){
        elapsedTimer->invalidate();
        active = false;
        return true;
    }
    return false;
}
void QtChronometer::restartChronometer() {
    elapsedTimer->restart();
    active = true;
}

QTime QtChronometer::getTime() const {
    if (active) {
        return QTime(0, 0).addMSecs(elapsedTimer->elapsed());
    }
    return QTime(0,0);  // Se il timer non è in esecuzione, restituisce 00:00:00
}

//QString QtChronometer::getTimeString() const {
 //   if (active) {
 //     return  QTime(0,0).addMSecs(elapsedTimer->elapsed()).toString("hh:mm:ss:zzz");
 //   }
//}