//
// Created by xianghui on 2017/7/17.
//
#include <iostream>
#include <cstring>
#include "person.h"

using namespace std;

Person::Person(const string &ln, const char *fn) {
    lname = ln;
    strcpy(fname, fn);
}

void Person::show() const {
    cout << "First Nmae: " << fname << endl;
    cout << "Last Name: " << lname << endl;
}

void Person::formalShow() const {
    cout << "Full Name: " << lname << "." << fname << endl;
}
