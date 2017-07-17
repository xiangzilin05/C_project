//
// Created by xianghui on 2017/7/16.
//

#include <iostream>
#include "stock00.h"

Stock::Stock() {
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const string &co, long n, double pr) {
    company = co;
    if (n < 0){
        std::cout << "Number of shares can't be negative; "
                  << company << " shares set to 0.\n";
        shares = 0;
    } else{
        shares = n;
    }
    share_val = pr;
    set_tot();
}

Stock::~Stock() {
    cout << "Bye, " << company << "!\n";
}

//void Stock::acquire(const std::string &co, long n, double pr) {
//    company = co;
//    if (n < 0){
//        std::cout << "Number of shares can't be negative; "
//                  << company << " shares set to 0.\n";
//        shares = 0;
//    } else{
//        shares = n;
//    }
//    share_val = pr;
//    set_tot();
//}

void Stock::buy(long num, double price) {
    if (num < 0){
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    } else{
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    using std::cout;
    if (num < 0){
        cout << "Number of shares sold can't be negative. "
                << "Transaction is aborted.\n";
    } else if (num > shares){
        cout << "You can't sell more than you have; "
             << "Transaction is aboreted. \n";
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

const Stock& Stock::topval(const Stock &s) const {
    if (s.total_val > total_val)
        return s;
    else
        return *this;
}

void Stock::show() const {
    std::cout << "Company: " << company
              << " Shares: " << shares << '\n'
              << " Share Price: $" << share_val
              << " Total Worth: $" << total_val << '\n';
}











