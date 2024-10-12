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
    ~QtTimer();

    //controllano che time non sia attivo
    bool startTimer();
    bool stopTimer();
    bool setTimer(QTime time);
    bool setTimer(int time);

    void pause();

    QString GetTimeString() const;

    bool isRunning() const;


    QTimer timer; //deve essere un puntatore per accedere alla funzione timeout di Singal per aggiornare in autimatico il tempo
    // risolto passando il riferimento a timer
    // bool active; QTimer ha già un metodo per vedere se è attivo o no

};


#endif //LABORATORIO_QTTIMER_H
