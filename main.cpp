#include <iostream>
#include "10/stock00.h"
#include "10/exercise/1/BankAccount.h"
#include "10/exercise/2/person.h"
#include "11/mytime0.h"

int main() {
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = ";
    planning.show();
    cout << endl;

    cout << "coding time = ";
    coding.show();
    cout << endl;

    cout << "fixing time = ";
    fixing.show();
    cout << endl;

    total = coding.sum(fixing);
    cout << "coding.sum(fixing) = ";
    total.show();
    cout << endl;

    total = coding + fixing;
    cout << "coding + fixing = ";
    total.show();
    cout << endl;

    total = fixing - coding;
    cout << "fixing - coding = ";
    total.show();
    cout << endl;

    total = coding * 2;
    cout << "coding * 2 = ";
    total.show();
    cout << endl;

    return 0;
}