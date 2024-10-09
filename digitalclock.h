//
// Created by Pietro on 09/10/2024.
//

#ifndef LABORATORIO_DIGITALCLOCK_H
#define LABORATORIO_DIGITALCLOCK_H

#include <QWidget>
#include <QLCDNumber>
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui { class Digitalclock; }
QT_END_NAMESPACE

class Digitalclock : public QLCDNumber {
Q_OBJECT

public:
    Digitalclock(QWidget *parent = nullptr);

private slots:
    void showTime();
};


#endif //LABORATORIO_DIGITALCLOCK_H
