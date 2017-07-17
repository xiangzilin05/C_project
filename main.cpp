#include <iostream>
#include "10/stock00.h"
#include "10/exercise/1/BankAccount.h"

int main() {
    cout << "======================================\n";
    BankAccount bankAccount;
    bankAccount.show();
    cout << "======================================\n";
    BankAccount bankAccount1("ZhangSan", "111111", 8.8);
    bankAccount1.show();
    cout << "======================================\n";
    BankAccount bankAccount2 = BankAccount("LiSi", "222222", 6.6);
    bankAccount2.show();
    cout << "======================================\n";
    bankAccount.saveMoney(100);
    bankAccount.show();
    cout << "======================================\n";
    bankAccount.takeMoney(50);
    bankAccount.show();
    cout << "======================================\n";
    return 0;
}