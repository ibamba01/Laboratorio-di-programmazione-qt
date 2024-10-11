//
// Created by Pietro on 10/10/2024.
//

#ifndef LABORATORIO_QTCLOCK_H
#define LABORATORIO_QTCLOCK_H

#include <QDateTime>
#include <QDate>
#include <QTime>
#include <QTimer>
#include <QWidget>
enum class TimeFormat {HMS, HM, HMSA};
enum class DateFormat {DMY, GDM};
class QtClock {

public:
    QtClock();
    ~QtClock();
    void setTime(int h, int m, int s); //faccio passare l'ora e data da mainpage
    void setDate(int d, int m, int y);

    QString showTime() const;
    QString showDate() const;

    void setViewModeTime(TimeFormat f);
    void setViewModeDate(DateFormat f);


private:
    QTime * Time;
    QDate * Date;
    TimeFormat viewModeTime;
    DateFormat viewModeDate;
};


#endif //LABORATORIO_QTCLOCK_H
