//
// Created by xianghui on 2017/7/17.
//

#ifndef C_PROJECT_PERSON_H
#define C_PROJECT_PERSON_H

#include <string>
using namespace std;

class Person {
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
public:
    Person(){ lname = ""; fname[0] = '\0'; }
    Person(const string &ln, const char * fn = "Heyyou");
    void show() const;
    void formalShow() const;
};

#endif //C_PROJECT_PERSON_H
