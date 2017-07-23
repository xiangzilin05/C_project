#include <iostream>
#include "11/mytime0.h"
#include "11/vector.h"
#include "12/stringbad/strngbad.h"
#include "11/stonewt.h"

//using namespace VECTOR;
using namespace std;

void callme1(StringBad &);

void callme2(StringBad);

void display(const Stonewt &st, int n);

int main() {
    {
//        Stonewt poppins(9,2.8);
//        double p_wt = poppins;
//        cout << "p_wt: " << p_wt << endl;
//        cout << "poppins int: " << int(poppins);
        cout << "Starting an inner block. \n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leave Bowl for Dollars");
        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;
        callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        callme2(headline2);
        cout << "headline2: " << headline2 << endl;
        cout << "Initialize one object to another:\n";
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another:\n";
        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";
    }
    cout << "End of main()\n";
    return 0;
}

void display(const Stonewt &st, int n){
    for (int i = 0; i < n; ++i) {
        cout << "Wow! ";
        st.show_stn();
    }
}

void callme1(StringBad &rsb) {
    cout << "StringBad passed by reference:\n";
    cout << "   \"" << rsb << "\"\n";
}

void callme2(StringBad sb) {
    cout << "StringBad passed by value:\n";
    cout << "   \"" << sb << "\"\n";
}