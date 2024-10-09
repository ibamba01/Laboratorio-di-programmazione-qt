//
// Created by Pietro on 08/10/2024.
//

#ifndef LABORATORIO_QTCLOCK_H
#define LABORATORIO_QTCLOCK_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class QtClock; }
QT_END_NAMESPACE

class QtClock : public QWidget {
Q_OBJECT

public:
    explicit QtClock(QWidget *parent = nullptr);

    ~QtClock() override;

private:
    Ui::QtClock *ui;
};


#endif //LABORATORIO_QTCLOCK_H
