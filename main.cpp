#include <QApplication>
#include <QPushButton>
#include <QLCDNumber>
#include "Non QT classes//Clock.h"
#include "QT classes clock/digitalclock.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    //prove
    Clock c;
    c.printDateTime();

    string s = c.getTime();
    c.printprova(s);
    s = c.getDate();
    c.printprova(s);
    //main

    //QPushButton button("Hello world!", nullptr);
   // QLCDNumber clock;
    Digitalclock clock;
    clock.show();
    clock.resize(200, 100);


    //button.resize(200, 100);
   // button.show();
    return QApplication::exec();
}
