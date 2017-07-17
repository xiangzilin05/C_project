#include <iostream>
#include "10/stock00.h"
#include "10/exercise/1/BankAccount.h"
#include "10/exercise/2/person.h"

int main() {
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    cout << "=====================================\n";
    one.show();
    one.formalShow();
    cout << "=====================================\n";
    two.show();
    two.formalShow();
    cout << "=====================================\n";
    three.show();
    three.formalShow();
    return 0;
}