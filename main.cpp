#include <QApplication>
#include <QPushButton>
#include <QLCDNumber>
#include "Non QT classes//Clock.h"
#include "Non QT classes//Timer.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    //prove
    Clock c;
    c.printDateTime();

    string s = c.getTime();
    c.printprova(s);
    s = c.getDate();
    c.printprova(s);

    Timer t;
    t.setDuration(1000);
    t.startTimer();
    _sleep(2000);
    t.stopTimer();
    t.printprova(t.getDurationString());

    //main

    //QPushButton button("Hello world!", nullptr);
    //button.resize(200, 100);
   // button.show();
    return QApplication::exec();
}
