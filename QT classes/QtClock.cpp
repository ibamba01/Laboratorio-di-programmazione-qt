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

void QtClock::setTime(int h, int m, int s) {
    Time.setHMS(h, m, s);
}
void QtClock::setDate(int y, int m, int d) {
    Date.setDate(y, m, d);
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
            uscita= "hh:mm:ss a";
            break;
    }
    return Time.toString(uscita);
}

QString QtClock::showDate() const {
    QString uscita;
    switch (viewModeDate) {
        default:// DateFormat::DMY;
            uscita="dd/MM/yy";
            break;
        case DateFormat::GDM: //formato giorno numero mese
            uscita="dddd dd MMM";
            break;
        case DateFormat::GMA: //formato giorno mese anno
            uscita="dddd MMMM yyyy";
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