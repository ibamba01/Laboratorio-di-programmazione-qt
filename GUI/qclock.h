//
// Created by Pietro on 11/10/2024.
//

#ifndef LABORATORIO_QCLOCK_H
#define LABORATORIO_QCLOCK_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class Qclock; }
QT_END_NAMESPACE

class Qclock : public QWidget {
Q_OBJECT

public:
    explicit Qclock(QWidget *parent = nullptr);

    ~Qclock() override;

private:
    Ui::Qclock *ui;
};


#endif //LABORATORIO_QCLOCK_H
