//
// Created by Pietro on 09/10/2024.
//

#ifndef LABORATORIO_QTTIMER_H
#define LABORATORIO_QTTIMER_H


#include <QTime>
#include <QTimer>

class QtTimer {
public:
    QtTimer();
    ~QtTimer() = default;

    //controllano che time non sia attivo
    bool startTimer();
    bool stopTimer();
    bool setTimer(QTime time);

    void pause();

    QString GetTimeString() const;

    bool isRunning() const;

private:
    QTimer  timer; //serve per accedere alla funzione timeout di Singal per aggiornare in autimatico il tempo
    // bool active; QTimer ha già un metodo per vedere se è attivo o no
};


#endif //LABORATORIO_QTTIMER_H
