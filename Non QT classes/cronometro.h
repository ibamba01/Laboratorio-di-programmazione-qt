//
// Created by Pietro on 09/10/2024.
//

#ifndef LABORATORIO_CRONOMETRO_H
#define LABORATORIO_CRONOMETRO_H
#include <chrono>
#include <string>

using namespace  std;
using namespace std::chrono;

class cronometro {
public:
    cronometro();
    int getDuration() const;
    bool setDuration(const unsigned int seconds);

    bool startCronometro();
    bool stopCronometro();
    bool resetCronometro();

    int getTime() const;

    void setViewMode(int mode);
    int getViewMode() const;

private:
    int viewMode;
    bool active;
    time_point<steady_clock> start;
    ::duration<int, milli> duration;
};


#endif //LABORATORIO_CRONOMETRO_H
