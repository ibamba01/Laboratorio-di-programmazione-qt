//
// Created by Pietro on 09/10/2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainpage.h" resolved

#include "mainpage.h"
#include "ui_mainpage.h"


mainpage::mainpage(QWidget *parent) :
        QWidget(parent), ui(new Ui::mainpage) {
    ui->setupUi(this);
}

mainpage::~mainpage() {
    delete ui;
}
