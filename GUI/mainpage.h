//
// Created by Pietro on 09/10/2024.
//

#ifndef LABORATORIO_MAINPAGE_H
#define LABORATORIO_MAINPAGE_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class mainpage; }
QT_END_NAMESPACE

class mainpage : public QWidget {
Q_OBJECT

public:
    explicit mainpage(QWidget *parent = nullptr);

    ~mainpage() override;

private:
    Ui::mainpage *ui;
};


#endif //LABORATORIO_MAINPAGE_H
