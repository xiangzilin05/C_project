#include <iostream>
#include "10/stock00.h"
#include "10/exercise/1/BankAccount.h"
#include "10/exercise/2/person.h"
#include "11/mytime0.h"
#include "11/vector.h"

using namespace VECTOR;

int main() {
    Vector folly(3.0, 4.0);
    cout << folly;
    cout << endl;
    Vector foolery(20.0, 30.0, Vector::Mode::POL);
    cout << foolery;
    return 0;
}