#include <QApplication>
#include "mainpage.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    //main
    mainpage w;
    w.show();
    return QApplication::exec();
}
