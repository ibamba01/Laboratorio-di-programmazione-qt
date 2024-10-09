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
    time_t now = time(0);
    tm ltm = * localtime(&now);

    string uscita, ora, minuti, secondi;
    ora = to_string(ltm.tm_hour);
    minuti = to_string(ltm.tm_min);
    secondi = to_string(ltm.tm_sec);

}

void Clock::printDateTime() const {
    time_t now = time(0);//time restituisce il tempo in secondi dal 1 gennaio 1970 come valore di tipo time_t
    tm * ltm = localtime(&now); //localtime converte il tempo in una struttura tm contenente data e ora
    printf ("Current local time and date: %s", asctime(ltm));
    //time_t time = mktime(ltm);
    //printf("l'ora è: %s", ctime(&time));

}

string Clock::getDate() const {
    time_t now = time(0);
    tm  ltm = * localtime(&now);

    string uscita, giorno, mese, anno;
    giorno = to_string(ltm.tm_mday);
    mese = to_string(1 + ltm.tm_mon); //tm_mon restiuisce un intervallo 0-11 in cui 0 è gennaio
    anno = to_string(1900 + ltm.tm_year); //tm_year restituisce il numero di anni trascorsi dal 1900

}
void Clock::setViewMode(int mode) {
    viewMode = mode;
}
int Clock::getViewMode() const {
    return viewMode;
}