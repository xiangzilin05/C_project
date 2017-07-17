//
// Created by xianghui on 2017/7/16.
//

#ifndef C_PROJECT_STOCK00_H
#define C_PROJECT_STOCK00_H

#include <string>
using namespace std;

class Stock
{
private:
    string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){ total_val = shares * share_val; }

public:
    Stock();
//    Stock(const string & co = "Error", long n = 0, double pr = 0.0);
    Stock(const string & co, long n = 0, double pr = 0.0);
    ~Stock();
//    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    double total() const { return total_val; }
    void show() const;
};
#endif //C_PROJECT_STOCK00_H
