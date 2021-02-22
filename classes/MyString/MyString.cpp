#include "MyString.h"

MyString::MyString() {
    this->str = new char[1];
    *this->str = '\0';
};

MyString::MyString(const char *s) {
    this->str = new char[strlen(s) + 1];
    strcpy(this->str, s);
}

MyString::MyString(const MyString &s)
        : MyString(s.str) {
}

MyString::~MyString() {
    delete[] this->str;
}

MyString &MyString::operator=(const MyString &rhs) {
    std::cout << "copy assignment" << std::endl;
    if (this == &rhs)
        return *this;

    delete[] this->str;

    this->str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);

    return *this;
}

char *MyString::get_str() const {
    return this->str;
}

void MyString::set_str(char *str) {
    this->str = str;
}
