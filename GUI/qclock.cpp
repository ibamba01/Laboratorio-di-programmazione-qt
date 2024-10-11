//
// Created by Pietro on 11/10/2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Qclock.h" resolved

#include "qclock.h"
#include "ui_Qclock.h"


Qclock::Qclock(QWidget *parent) :
        QWidget(parent), ui(new Ui::Qclock) {
    ui->setupUi(this);
}

Qclock::~Qclock() {
    delete ui;
}
