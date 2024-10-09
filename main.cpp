#include <QApplication>
#include <QPushButton>
#include "Clock.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Clock c;
    c.getTime();
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();
    return QApplication::exec();
}
