//
// Created by Pietro on 09/10/2024.
//

#ifndef LABORATORIO_CLOCK_H
#define LABORATORIO_CLOCK_H

#include <chrono>
#include <exception>
#include <string>

using namespace std;
using namespace std::chrono;

class Clock {
public:
    Clock();

   string getTime() const;
   string getDate() const;

    int getViewMode() const;
    void setViewMode(int vm);
private:
    int viewMode;
};


#endif //LABORATORIO_CLOCK_H
