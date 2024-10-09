//
// Created by Pietro on 09/10/2024.
//

#include "Clock.h"
#include <ctime>
#include <cstdio>
#include <iostream>// per prova

Clock::Clock() {
    viewMode = 1;
}
void Clock::printprova(string s) const {
    cout << s << endl;
}


void Clock::printDateTime() const {
    time_t now = time(0);//time restituisce il tempo in secondi dal 1 gennaio 1970 come valore di tipo time_t
    tm * ltm = localtime(&now); //localtime converte il tempo in una struttura tm contenente data e ora
    //tm_mon restiuisce un intervallo 0-11 in cui 0 è gennaio
    //tm_year restituisce il numero di anni trascorsi dal 1900
    printf ("Current local time and date: %s", asctime(ltm));
    //asctime utilizza il puntatore della struttura
    // dati per convertire la struttura stessa in una stringa

    //time_t time = mktime(ltm);
    //printf("time: %s", ctime(&time));

}

string Clock::getTime() const {
    time_t now = time(nullptr);
    tm ltm = * localtime(&now);

    ostringstream uscita;

    switch (viewMode) {
        case 1:    uscita << setw(2) << std::setfill('0') << ltm.tm_hour<< ":"<< setw(2) << std::setfill('0') << ltm.tm_min;
            break;
        default: uscita << setw(2) << std::setfill('0') << ltm.tm_hour << ":"<< setw(2) << std::setfill('0')
        << ltm.tm_min << ":" << setw(2) << std::setfill('0') << ltm.tm_sec;
    }

   // uscita = ora + ":" + minuti + ":" + secondi;
    return uscita.str();
}


string Clock::getDate() const {
    time_t now = time(nullptr);
    tm  ltm = * localtime(&now);

    ostringstream uscita;

    uscita << setw(2) << std::setfill('0') << ltm.tm_mday << "/" << setw(2) << std::setfill('0') << 1 + ltm.tm_mon
    << "/" << setw(4) << std::setfill('0') << 1900 + ltm.tm_year;
    return uscita.str();
}


void Clock::setViewMode(int mode) {
    viewMode = mode;
}
int Clock::getViewMode() const {
    return viewMode;
}