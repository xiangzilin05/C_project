//
// Created by xianghui on 2017/7/17.
//

#ifndef C_PROJECT_BANKACCOUNT_H
#define C_PROJECT_BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
private:
    string mName;
    string mAccount;
    double mSavings;
public:
    BankAccount(const string & name = "no name", const string & account = "000000", double savings = 0.0);
    void show() const;
    double saveMoney(double money);
    double takeMoney(double money);
};

#endif //C_PROJECT_BANKACCOUNT_H
