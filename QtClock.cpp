//
// Created by Pietro on 10/10/2024.
//

#include "QtClock.h"

QtClock::QtClock(){ //: Time(new QTime), Date(new QDate) {
}

QtClock::~QtClock(){
   // delete Time;
    //delete Date;
}

bool QtClock::setTime(int h, int m, int s) { //deprecato
    return Time.setHMS(h, m, s); //h nel range 0-23, m nel range 0-59, s nel range 0-59 senno ritorna false
    //controllo se l'ora è valida e cosa sucecede se non lo è
}
void QtClock::setTime1(int h, int m, int s) { //deprecato
     Time.setHMS(h, m, s);

}
bool QtClock::setDate(int y, int m, int d) { //deprecato
    return Date.setDate(y, m, d);
}

QString QtClock::showTime() const { // utilizzano i format di Qt
     QString uscita;
    switch (viewModeTime) {
        default: //TimeFormat::HMS;
            uscita="hh:mm:ss";
            break;
        case TimeFormat::HM:
            uscita="hh:mm";
            break;
        case TimeFormat::HMSA:
            uscita= "h:mm:ss a";
            break;
    }
    return Time.toString(uscita);
}

QString QtClock::showDate() const {
    QString uscita;
    switch (viewModeDate) {
        default:// DateFormat::DMY;
            uscita= "d/MM/yy";
            break;
        case DateFormat::GDM: //formato giorno numero mese
            uscita= "ddd dd MMM";
            break;
        case DateFormat::GMA: //formato giorno mese anno
            uscita= "dddd MMMM yyyy";
            break;
    }
    return Date.toString(uscita);
}

void QtClock::setViewModeTime(TimeFormat timeFormat) {
    viewModeTime = timeFormat;
}
void QtClock::setViewModeDate(DateFormat dateFormat) {
    viewModeDate = dateFormat;
}

bool QtClock::currentTime(int hours, int min, int sec)  {
    QTime currentTime = QTime::currentTime();
    int msec = currentTime.msecsSinceStartOfDay();
    sec = msec / 1000;
    min = sec / 60;
    hours = min / 60;
    sec = sec % 60;
    min = min % 60;
    return Time.setHMS(hours,min,sec);
}

bool QtClock::currentDate(int  year, int  month, int  day)  {
    QDate currentDate = QDate::currentDate();
    day = currentDate.day();
    month = currentDate.month();
    year = currentDate.year();
    return Date.setDate(year,month,day);
}