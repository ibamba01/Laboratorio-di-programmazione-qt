//
// Created by Pietro on 10/10/2024.
//

#ifndef LABORATORIO_QTCLOCK_H
#define LABORATORIO_QTCLOCK_H

#include <QDate>
#include <QTime>
#include <QWidget>

enum class TimeFormat {HMS, HM, HMSA};
enum class DateFormat {DMY, GDM, GMA};
class QtClock {

public:
    QtClock();
    ~QtClock();
    bool setTime(int h, int m, int s); //faccio passare l'ora e data da mainpage
    bool setDate(int d, int m, int y);
    void setTime1(int h, int m, int s);

    QString showTime() const;
    QString showDate() const;
    bool currentTime(int  hours, int  min, int  sec);
    bool currentDate(int  year, int  month, int  day);

    void setViewModeTime(TimeFormat f);
    void setViewModeDate(DateFormat f);


private:
    QTime  Time;
    QDate  Date;
    TimeFormat viewModeTime;
    DateFormat viewModeDate;
};


#endif //LABORATORIO_QTCLOCK_H
