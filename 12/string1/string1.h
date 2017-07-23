//
// Created by xianghui on 2017/7/23.
//

#ifndef C_PROJECT_STRING1_H
#define C_PROJECT_STRING1_H

#include <ostream>

class String {
private:
    char *str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    String(const char *s);

    String();

    String(const String &st);

    ~String();

    int length() const { return len; }


    String &operator=(const String &st);

    String &operator=(const char *ch);

    char &operator[](int i);

    const char &operator[](int i) const;


    friend bool operator<(const String &st, const String &st2);

    friend bool operator>(const String &st, const String &st2);

    friend bool operator==(const String &st, const String &st2);

    friend std::ostream &operator<<(std::ostream &os, const String &st);

    friend std::istream &operator>>(std::istream &is, String &st);


    static int HowMany();
};

#endif //C_PROJECT_STRING1_H
