//
// Created by Pietro on 08/10/2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_QtClock.h" resolved

#include "qtclock.h"
#include "ui_QtClock.h"


QtClock::QtClock(QWidget *parent) :
        QWidget(parent), ui(new Ui::QtClock) {
    ui->setupUi(this);
}

QtClock::~QtClock() {
    delete ui;
}
