//
// Created by Pietro on 09/10/2024.
//

#include "Clock.h"
#include <ctime>
#include <cstdio>

Clock::Clock() {
    viewMode = 1;
}

string Clock::getTime() const {
    time_t now = time(0); //time restituisce il tempo in secondi dal 1 gennaio 1970 come valore di tipo time_t
    tm * ltm = localtime(&now); //localtime converte il tempo in una struttura tm contenente data e ora

    string uscita, ora, minuti, secondi;
    ora = to_string(ltm->tm_hour);
    minuti = to_string(ltm->tm_min);
    secondi = to_string(ltm->tm_sec);

}

void Clock::printDateTime() const {
    time_t now = time(0);
    tm * ltm = localtime(&now);
    printf ("Current local time and date: %s", asctime(ltm));
}