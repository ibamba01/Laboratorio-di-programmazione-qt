//
// Created by Pietro on 09/10/2024.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainpage.h" resolved

#include "mainpage.h"
#include "ui_mainpage.h"

//---------costruttore e distruttore----------------
mainpage::mainpage(QWidget *parent) :
        QWidget(parent), ui(new Ui::mainpage), clockKeeper(new QtClock), timerKeeper(new QtTimer), chronometerKeeper(new QtChronometer) {

    ui->setupUi(this);
    updater = new QTimer(this);
    QObject::connect(updater,SIGNAL(timeout()),this,SLOT(Update()));
    updater->start(1000); //aggiorna ogni secondo

}

mainpage::~mainpage() {
    delete ui;
    delete updater;
    delete timerKeeper;
    delete chronometerKeeper;
}

//------------metodi current----------------
void mainpage::currentQTimeToTime(int &h, int &m, int &s) const {
    QTime currentTime = QTime::currentTime();
    int msec = currentTime.msecsSinceStartOfDay();
    s = msec/1000;
    m = s/60;
    h = m/60;
    s=s%60;
    m=m%60;
}
void mainpage::currentQDateToDate(int &d, int &m, int &y) const {
    QDate currentDate = QDate::currentDate();
    d=currentDate.day();
    m=currentDate.month();
    y=currentDate.year();
}

//------------set timer----------------
QString valoretimer;
//10 sec timer
void mainpage::on_Timer1Button_clicked() {
    ui->DisplayTimer->clear();

    valoretimer = "00:00:10";

    if (timerKeeper->isRunning())
        timerKeeper->stopTimer();

    QTime timeInput = QTime::fromString(valoretimer);
    timerKeeper->setTimer(timeInput);
    ui->DisplayTimer->setText(timeInput.toString());
}
//30 sec timer
void mainpage::on_Timer2Button_clicked() {
    ui->DisplayTimer->clear();

    valoretimer = "00:00:30";

    if (timerKeeper->isRunning())
        timerKeeper->stopTimer();

    QTime timeInput = QTime::fromString(valoretimer);
    timerKeeper->setTimer(timeInput);
    ui->DisplayTimer->setText(timeInput.toString());
}
//1 min timer
void mainpage::on_Timer3Button_clicked() {
    ui->DisplayTimer->clear();

    valoretimer = "00:01:00";

    if (timerKeeper->isRunning())
        timerKeeper->stopTimer();

    QTime timeInput = QTime::fromString(valoretimer);
    timerKeeper->setTimer(timeInput);
    ui->DisplayTimer->setText(timeInput.toString());
}
//5 min timer
void mainpage::on_Timer4Button_clicked() {
    ui->DisplayTimer->clear();

    valoretimer = "00:05:00";

    if (timerKeeper->isRunning())
        timerKeeper->stopTimer();

    QTime timeInput = QTime::fromString(valoretimer);
    timerKeeper->setTimer(timeInput);
    ui->DisplayTimer->setText(timeInput.toString());
}
//2 ore timer
void mainpage::on_Timer5Button_clicked() {
    ui->DisplayTimer->clear();

    valoretimer = "02:00:00";

    if (timerKeeper->isRunning())
        timerKeeper->stopTimer();

    QTime timeInput = QTime::fromString(valoretimer);
    timerKeeper->setTimer(timeInput);
    ui->DisplayTimer->setText(timeInput.toString());
}

void mainpage::on_TimerCustomButtom_editingFinished() {
    ui->DisplayTimer->clear();

    if (timerKeeper->isRunning())
        timerKeeper->stopTimer();

    QString input = ui->TimerCustomButtom->text();
    QTime timeInput = QTime::fromString(input);

    if (timeInput.isValid()) {
        timerKeeper->setTimer(timeInput);
        ui->DisplayTimer->setText(timeInput.toString());
    }
    else {
        ui->DisplayTimer->setText("Formato non valido");
    }
    ui->TimerCustomButtom->clear();
}

//------------timer metodi----------------
void mainpage::timeIsUpWarning() {
    timerKeeper->stopTimer();
    ui->DisplayTimer->setText("Finito!");
}
//------------update----------------
void mainpage::Update(){
    int h,m,s;
    //classe QtClock
    currentQTimeToTime(h,m,s);
    clockKeeper->setTime(h,m,s);
    ui->DisplayOra->setText(clockKeeper->showTime());
    //DisplayOra è il nome del label inizializzata a 00:00:00 che viene usata vedere l'ora

    int d,mon,y;
    currentQDateToDate(d,mon,y);
    clockKeeper->setDate(d,mon,y);
    ui->DisplayData->setText(clockKeeper->showDate());
    //DisplayData è il nome del label inizializzata a 00:00:0000 che viene usata vedere i tre tipi di data

    //classe QtTimer
    if (timerKeeper->isRunning())
        ui->DisplayTimer->setText(timerKeeper->GetTimeString());
    //DisplayTimer è il nome del label inizializzata a 00:00:000 che viene usata vedere il tempo rimanente del timer

    //classe QtChronometer
    if (chronometerKeeper->isRunning())
        ui->DisplayCronometro->setText(chronometerKeeper->getTimeString());
   // DisplayCronometro è il nome del label inizializzata a 00:00:00 che viene usata vedere il tempo trascorso del cronometro
}

//--------------Strat e Stop----------------
void mainpage::on_AvviaStopButtonTimer_clicked(){
    if(! timerKeeper->isRunning()){
        timerKeeper->startTimer();
        QObject::connect(timerKeeper->timer,SIGNAL(timeout()),this,SLOT(timeIsUpWarning()));
        // connect ha bisogno di un puntatore di un puntatore come argometo
    }
    else
        timerKeeper->pause();
}
void mainpage::on_AvviaResetButtonCronometro_clicked() {
   if(! chronometerKeeper->isRunning())

        chronometerKeeper->startChronometer();
   else
       chronometerKeeper->restartChronometer();
}



//--------set view mode-----------------
void mainpage::on_RadioData1_clicked() {
    clockKeeper->setViewModeDate(DateFormat::DMY);
    Update();
}


void mainpage::on_RadioData2_clicked() {
    clockKeeper->setViewModeDate(DateFormat::GDM);
    Update();
}


void mainpage::on_RadioOra1_clicked() {
    clockKeeper->setViewModeTime(TimeFormat::HMS);
    Update();
}


void mainpage::on_RadioOra2_clicked() {
    clockKeeper->setViewModeTime(TimeFormat::HM);
    Update();
}


void mainpage::on_RadioOra3_clicked() {
    clockKeeper->setViewModeTime(TimeFormat::HMSA);
    Update();
}


