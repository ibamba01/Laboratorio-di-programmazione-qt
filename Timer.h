//
// Created by Pietro on 08/10/2024.
//

#ifndef LABORATORIO_TIMER_H
#define LABORATORIO_TIMER_H


#include <chrono>
#include <exception>
#include <string>

using namespace std;
using namespace std::chrono;

class Timer {
public:
    Timer();
    //utilizzo const per evitare che la funzione modifichi l'oggetto
    const time_point<steady_clock> &getStart() const;

    bool setDuration(unsigned int seconds);
    int getDuration() const;

    string getDurationString();

    bool isRunning() const;

    int getViewMode() const;
    void setViewMode(int vm);

    bool startTimer();
    bool stopTimer();
    void resetTimer();

private:
    time_point<steady_clock> start;
    ::duration<int, milli> duration;
    bool active;
    int viewMode;

    static const int secPerDay, secPerHour, secPerMin;
};



#endif //LABORATORIO_TIMER_H
