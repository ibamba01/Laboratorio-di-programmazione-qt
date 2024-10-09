//
// Created by Pietro on 08/10/2024.
//

#include "Timer.h"
#include <chrono>
#include <cmath>
#include <functional>
#include <string>

using namespace std;
using namespace std::chrono;

using namespace std;
using namespace std::chrono;

const int Timer::secPerDay = 86400;
const int Timer::secPerHour = 3600;
const int Timer::secPerMin = 60;

Timer::Timer() {
    start = steady_clock::now(); //posso togliere start qui e farlo partire solo con start timer
    duration = ::duration<int>::zero();// zero() è una funzione statica che restituisce un oggetto duration con valore 0
    active = false;
    viewMode = 1;
}


int Timer::getDuration() const{
    if(!active) {//active false
        return static_cast<int>(round(duration.count() / 1000.0));
    }
    else{
        time_point<steady_clock> now = steady_clock::now();
        milliseconds elapsed = chrono::duration_cast<chrono::milliseconds>(now - start);//deve fare il cast per now
        milliseconds remaining = (duration - elapsed);

        int remainingSeconds = static_cast<int>(ceil(remaining.count() / 1000.0));
        if (remainingSeconds < 0) {
            remainingSeconds = 0;
        }
        return remainingSeconds;
    }
}

bool Timer::setDuration(const unsigned int seconds) {//non deve funzionare se il timer è attivo
    if(!active) {
        if (seconds > 0 && seconds <= secPerDay) { //limito la durata massima a 24 ore
            duration = ::duration < int, milli > (seconds * 1000); //trasformo i secondi in millisecondi
            return true;
        }
        return false;
    }
    throw bad_function_call();
}


bool Timer::startTimer(){
    if(duration != ::duration<int>::zero()) { //controllo che la duratta sia stata impostata
        if (!active) {
            start = steady_clock::now();
            active = true;
            return true;
        }
        return false;
    }
    throw bad_function_call();
}

bool Timer::stopTimer() {
    if(active){
        time_point<steady_clock> now = steady_clock::now();
        ::duration<int, milli> remaining = duration - chrono::duration_cast<chrono::seconds>(now - start); //remainning è in secondi

        active = false;

        if(remaining.count() > 0) {
            duration = remaining;
            return true;
        }
        return false;
    }
    return false;
}

void Timer::resetTimer() {
    start = steady_clock::now();
}
void Timer::setViewMode(int vm) {viewMode = vm%3;}


//metodi getter
const time_point<steady_clock> &Timer::getStart() const {return start;}
bool Timer::isRunning() const {return active;}
int Timer::getViewMode() const {return viewMode;}

string Timer::getDurationString() {
    int hours, minutes, seconds = getDuration();
    string uscita, temp;

    hours = seconds / secPerHour;
    minutes = (seconds - hours*secPerHour) / secPerMin;
    seconds = seconds - hours*secPerHour - minutes*secPerMin;

    switch(viewMode){
        case 1:
            if (hours){
                uscita = uscita + to_string(hours) + " h, ";
            }
            if (hours || minutes) {
                uscita = uscita + to_string(minutes) + " m, ";
            }
            uscita = uscita + to_string(seconds) + " s";
            break;
        case 2:
            uscita = to_string(hours);
            uscita += ":";
            uscita += ((temp = to_string(minutes)).length() == 2) ? temp : "0"+temp;
            uscita += ":";
            uscita += ((temp = to_string(seconds)).length() == 2) ? temp : "0"+temp;
            break;
        default:
            uscita = to_string(getDuration()) + " s";
    }
    if (uscita.length()%2 == 0){
        uscita.replace(uscita.find(" s"), 2, "  s");
    }
    return uscita;
}
//prova di update
