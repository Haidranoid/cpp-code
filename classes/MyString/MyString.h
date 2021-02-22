#ifndef MYSTRING_H
#define MYSTRING_H

#include <cstring>
#include <iostream>

class MyString {
private:
    char *str;
public:
    MyString();

    MyString(const char *s);

    MyString(const MyString &s);

    ~MyString();

    MyString &operator=(const MyString &rhs);

    char *get_str() const;

    void set_str(char *str);
};


#endif //MYSTRING_H
