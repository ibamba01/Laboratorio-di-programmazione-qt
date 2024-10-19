//
// Created by Pietro on 12/10/2024.
//
#include "gtest/gtest.h"
#include "../QtClock.h"


TEST(TimeTest, setTimeTest) {
    QtClock t;
    ASSERT_NO_THROW(t.setTime(10,24,20));
    t.setViewModeTime(TimeFormat::HMS);
    ASSERT_EQ(t.showTime(),"10:24:20");
    t.setTime(0,0,0);
    ASSERT_EQ(t.showTime(),"00:00:00");
    ASSERT_FALSE(t.setTime(-12,0,0)); //ora negativa settime deve ritornare false
    ASSERT_FALSE(t.setTime(25,44,0)); //ora fuori dall intervallo 0-23 devere ritornare false
}

TEST(TimeTest, currentTimeTest){
    QtClock t;
    int h,m,s;
    ASSERT_NO_THROW(t.currentTime(h,m,s));
    ASSERT_TRUE(t.currentTime(h,m,s));
}

TEST(TimeTest, showTimeTest){
    QtClock t;
    t.setTime(17,48,22);

    t.setViewModeTime(TimeFormat::HMS);
    ASSERT_EQ(t.showTime(),"17:48:22");
    t.setViewModeTime(TimeFormat::HM);
    ASSERT_EQ(t.showTime(),"17:48");
    t.setViewModeTime(TimeFormat::HMSA);
    ASSERT_EQ(t.showTime(),"5:48:22 pm");
}

TEST(TimeTest,changeTimeFormattest){
    QtClock t1,t2;
    t1.setTime(14,14,14);
    t2.setTime(14,14,14);
    t2.setViewModeTime(TimeFormat::HM);
    ASSERT_FALSE(t1.showTime()==t2.showTime());
}
TEST(DateTest, setDateTest){
    QtClock d;

    ASSERT_NO_THROW(d.setDate(2024,10,12));
    d.setViewModeDate(DateFormat::DMY);
    ASSERT_EQ(d.showDate(),"12/10/24");

    ASSERT_FALSE(d.setDate(2024,10,0)); //giorno 0 non esiste
    ASSERT_FALSE(d.setDate(2002, 2, 30)); //Feb 30 does not exist
}

TEST(DateTest, currentDateTest) {
    QtClock d;
    int y, m, day;
    ASSERT_NO_THROW(d.currentDate(y, m, day));
    ASSERT_TRUE(d.currentDate(y, m, day));
}

TEST(DateTest, showDateTest){
    QtClock d;

    d.setDate(2024,10,12);
    ASSERT_EQ(d.showDate(),"12/10/24");

    d.setViewModeDate(DateFormat::GDM);
    ASSERT_EQ(d.showDate(),"Sat 12 Oct");

    d.setViewModeDate(DateFormat::GMA);
    ASSERT_EQ(d.showDate(),"Saturday October 2024");
}
//test

TEST(DateTest, changeDateFormatTest){
    QtClock d1;
    d1.setDate(2024,10,12);
    QtClock d2;
    d2.setDate(2024,10,12);
    d2.setViewModeDate(DateFormat::DMY);
    ASSERT_TRUE(d1.showDate()==d2.showDate());
}


