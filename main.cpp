#include <iostream>
#include "10/stock00.h"

int main() {
//    std::cout << "Hello, World!" << std::endl;
    {
        Stock fluffy_the_cat("NanoSmart", 20, 12.50);
        fluffy_the_cat.show();
        fluffy_the_cat.buy(15, 18.125);
        fluffy_the_cat.show();
    }

    Stock first = Stock();
    Stock *prelief = new Stock("指针", 30, 80);
    first = *prelief;
    first.show();

    delete(prelief);
    return 0;
}