//
// Created by Pietro on 10/10/2024.
//

#ifndef LABORATORIO_QTCHRONOMETER_H
#define LABORATORIO_QTCHRONOMETER_H
#include <QTime>
#include <QTimer>
#include <QElapsedTimer>
class QtChronometer {
public:
    QtChronometer();
    ~QtChronometer();
    void restartChronometer();
    bool startChronometer();
    bool stopChronometer();
    QTime getTime() const;
    bool isRunning();
    QString getTimeString() const;
private:
    QElapsedTimer * elapsedTimer;
    bool active;
};


#endif //LABORATORIO_QTCHRONOMETER_H
