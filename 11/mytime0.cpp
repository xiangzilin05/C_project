//
// Created by xianghui on 2017/7/18.
//

#include <iostream>
#include "mytime0.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::addMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::addHr(int h) {
    hours += h;
}

void Time::reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time Time::sum(const Time &t) const {
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator+(const Time &t) const {
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator-(const Time &t) const {
    Time diff;
    int tot1, tot2;
    tot1 = t.minutes + t.hours * 60;
    tot2 = minutes + hours * 60;
    diff.hours = (tot2 - tot1) / 60;
    diff.minutes = (tot2 - tot1) % 60;
    return diff;
}

Time Time::operator*(double n) const {
    Time result;
    long totalMinutes = hours * n * 60 + minutes * n;
    result.hours = totalMinutes / 60;
    result.minutes = totalMinutes % 60;
    return result;
}


void Time::show() const {
    std::cout << hours << " hours, " << minutes << " minutes";
}

inline Time operator*(double m, const Time &t) {
//    Time result;
//    result = t * m;
//    return result;
    return t * m;
}

ostream & operator<<(ostream &os, const Time &t) {
    return os << t.hours << " hours, " << t.minutes << " minutes";
}













