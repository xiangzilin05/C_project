//
// Created by xianghui on 2017/7/17.
//
#include <iostream>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount(const string &name, const string &account, double savings) {
    mName = name;
    mAccount = account;
    mSavings = savings;
}

void BankAccount::show() const {
    cout << "Name: " << mName << endl;
    cout << "Account: " << mAccount << endl;
    cout << "Savings: " << mSavings << endl;
}

double BankAccount::saveMoney(double money) {
    return mSavings += money;
}

double BankAccount::takeMoney(double money) {
    return mSavings -= money;
}
