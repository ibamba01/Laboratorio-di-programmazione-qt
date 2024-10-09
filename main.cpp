#include <QApplication>
#include <QPushButton>
#include "Clock.h"

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

    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();
    return QApplication::exec();
}
