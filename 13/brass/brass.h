//
// Created by xianghui on 2017/7/25.
//

#ifndef C_PROJECT_BRASS_H
#define C_PROJECT_BRASS_H

#include <string>

class Brass {
private:
    std::string fullName;
    long acctNUm;
    double mbalance;
public:
    Brass(const std::string &s = "Nullbody", long an = -1,
          double bal = 0.0);

    void deposit(double amt);

    virtual void withdraw(double amt);

    double balance() const;

    virtual void ViewAcct() const;

    virtual ~Brass() {}
};

class BrassPlus : public Brass {
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string &s = "Nullbody", long an = -1,
              double bal = 0.0, double ml = 500, double r = 0.11125);

    BrassPlus(const Brass &ba, double ml = 500, double r = 0.11125);

    virtual void ViewAcct() const;

    virtual void Withdraw(double amt);

    void ResetMax(double m) { maxLoan = m; }

    void ResetRate(double r) { rate = r; };

    void ResetOwes() { owesBank = 0; }
};

#endif //C_PROJECT_BRASS_H





















