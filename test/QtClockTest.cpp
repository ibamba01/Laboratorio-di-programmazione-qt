//
// Created by Pietro on 12/10/2024.
//
#include "gtest/gtest.h"
#include "../QtClock.h"


TEST(TimeTest,setTime) {
    QtClock t;
    ASSERT_NO_THROW(t.setTime(10,24,20));
    t.setViewModeTime(TimeFormat::HMS);
    ASSERT_EQ(t.showTime(),"10:24:20");
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
