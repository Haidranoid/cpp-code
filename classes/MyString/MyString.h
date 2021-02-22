#ifndef MYSTRING_H
#define MYSTRING_H

#include <cstring>
#include <iostream>

class MyString {
    friend std::ostream &operator<<(std::ostream &os, const MyString &my_string);

    friend std::istream &operator>>(std::istream &is, MyString &my_string);

private:
    char *str;
public:
    MyString();

    MyString(const char *s);

    MyString(const MyString &source);

    MyString(MyString &&source) noexcept;

    ~MyString();

    MyString &operator=(const MyString &rhs);

    MyString &operator=(MyString &&rhs) noexcept;

    // unary operators
    MyString operator-() const;
//    MyString operator++(); pre increment
//    MyString operator++(int); post increment
//    MyString operator!(int) const;

    // binary operators
    MyString operator+(const MyString &rhs) const;

//    MyString operator-(const MyString &rhs) const;
    bool operator==(const MyString &rhs) const;
//    bool operator<(const MyString &rhs) const;

    char *get_str() const;

    void set_str(char *str);
};


#endif //MYSTRING_H
