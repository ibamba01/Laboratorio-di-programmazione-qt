//
// Created by Pietro on 08/10/2024.
//

#include "Timer.h"
#include <chrono>
#include <math.h>
#include <functional>
#include <string>

using namespace std;
using namespace std::chrono;

using namespace std;
using namespace std::chrono;

const int Timer::secPerDay = 60*60*24;
const int Timer::secPerHour = 60*60;
const int Timer::secPerMin = 60;

Timer::Timer() {
    start = steady_clock::now();
    duration = ::duration<int>::zero();
    active = false;
    viewMode = 2;
}



int Timer::getDuration() const{
    if(!active) {
        return (int)round(duration.count()/1000);
    }
    else{
        time_point<steady_clock> now = steady_clock::now();
        float r = ((duration - duration_cast<milliseconds>(now-start)).count()/1000.f);
        int remaining = r >= 0 ? (int)ceil(r) : (int)floor(r);
        if (remaining < 0){
            remaining = 0;
        }
        return remaining;
    }
}

bool Timer::setDuration(const unsigned int seconds) {
    if(!active) {
        if (seconds > 0 && seconds <= secPerDay) {
            duration = ::duration < int, milli > (seconds * 1000);
            return true;
        }
        return false;
    }
    throw bad_function_call();
}



bool Timer::startTimer(){
    if(duration != ::duration<int>::zero()) {
        if (!active || getDuration() < 0) {
            start = steady_clock::now();
            active = true;
            return true;
        }
        return false;
    }
    throw bad_function_call();  //Before starting timer you need to set duration
}

bool Timer::stopTimer() {
    if(active){
        time_point<steady_clock> now = steady_clock::now();
        active = false;
        ::duration<int, milli> remaining = duration - duration_cast<seconds>(now - start);
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
    string s, temp;

    hours = seconds / secPerHour;
    minutes = (seconds - hours*secPerHour) / secPerMin;
    seconds = seconds - hours*secPerHour - minutes*secPerMin;

    switch(viewMode){
        case 1:
            if (hours){
                s = s + to_string(hours) + " h, ";
            }
            if (hours || minutes) {
                s = s + to_string(minutes) + " m, ";
            }
            s = s + to_string(seconds) + " s";
            break;
        case 2:
            s = to_string(hours);
            s += ":";
            s += ((temp = to_string(minutes)).length() == 2) ? temp : "0"+temp;
            s += ":";
            s += ((temp = to_string(seconds)).length() == 2) ? temp : "0"+temp;
            break;
        default:
            s = to_string(getDuration()) + " s";
    }
    if (s.length()%2 == 0){
        s.replace(s.find(" s"), 2, "  s");
    }
    return s;
}
//prova di update
