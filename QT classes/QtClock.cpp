//
// Created by Pietro on 10/10/2024.
//

#include "QtClock.h"

QtClock::QtClock() : Time(new QTime), Date(new QDate), viewModeTime(TimeFormat::HMS), viewModeDate(DateFormat::DMY) {
}

QtClock::~QtClock() {
    delete Time, Date;
}
void QtClock::setTime(int h, int m, int s) {
    Time->setHMS(h, m, s);
}
void QtClock::setDate(int y, int m, int d) {
    Date->setDate(y, m, d);
}

QString QtClock::showTime() const {
     QString uscita;
    switch (viewModeTime) {
        case TimeFormat::HMS:
            uscita="hh:mm:ss";
            break;
        case TimeFormat::HM:
            uscita="hh:mm";
            break;
        case TimeFormat::HMSA:
            uscita= "hh:mm:ss a";
            break;
    }
    return Time ->toString(uscita);
}

QString QtClock::showDate() const {
    QString uscita;
    switch (viewModeDate) {
        case DateFormat::DMY:
            uscita="dd/MM/yyyy";
            break;
        case DateFormat::GDM:
            uscita="ggggggggg dd mm";
            break;
    }
    return Date ->toString(uscita);
}

void QtClock::setViewModeTime(TimeFormat timeFormat) {
    viewModeTime = timeFormat;
}
void QtClock::setViewModeDate(DateFormat dateFormat) {
    viewModeDate = dateFormat;
}