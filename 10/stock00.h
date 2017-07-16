//
// Created by xianghui on 2017/7/16.
//

#ifndef C_PROJECT_STOCK00_H
#define C_PROJECT_STOCK00_H

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){ total_val = shares * share_val; }

public:
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};
#endif //C_PROJECT_STOCK00_H
