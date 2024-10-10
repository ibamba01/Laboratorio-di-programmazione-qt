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
    void restartTimer();
    QTime getTime() const;
    bool startTimer();
    bool stopTimer();
    bool isRunning();
private:
    QElapsedTimer elapsedTimer;
    bool active;
};


#endif //LABORATORIO_QTCHRONOMETER_H
