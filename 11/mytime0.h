//
// Created by xianghui on 2017/7/18.
//

#ifndef C_PROJECT_MYTIME0_H
#define C_PROJECT_MYTIME0_H

class Time {
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m = 0);
    void addMin(int m);
    void addHr(int h);
    void reset(int h = 0, int m = 0);
    Time sum(const Time & t) const;
    Time operator+(const Time & t) const;
    Time operator-(const Time & t) const;
    Time operator*(double n) const;
    void show() const ;

    friend Time operator*(double m, const Time & t);
};

#endif //C_PROJECT_MYTIME0_H
