//
// Created by Administrator on 2017/7/19.
//

#ifndef C_PROJECT_STRNGBAD_H
#define C_PROJECT_STRNGBAD_H

#include <iostream>

class StringBad {
private:
    char *str;
    int len;
    static int num_strings;
public:
    StringBad(const StringBad &st);

    StringBad(const char *s);

    StringBad();

    ~StringBad();

    friend std::ostream &operator<<(std::ostream &os, const StringBad &st);
};

#endif //C_PROJECT_STRNGBAD_H
