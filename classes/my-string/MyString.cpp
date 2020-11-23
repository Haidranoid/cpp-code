#include "iostream"
#include "cstring"
#include "MyString.h"

using namespace std;

// constructors -----------------------------------------------------

// default constructor
/*MyString::MyString()
        : str{nullptr} {
    this->str = new char[1];
    (*this->str) = '\0';
}*/

// overloaded constructor
MyString::MyString(char *s)
        : str{nullptr} {
    if (s == nullptr) {
        this->str = new char[1];
        *(this->str) = '\0';
        cout << "constructor for: [nullptr]" << endl;
    } else {
        this->str = new char[std::strlen(s) + 1];
        std::strcpy(this->str, s);
        cout << "constructor for: " << this->str << endl;
    }
}

// copy constructor
MyString::MyString(const MyString &source)
        : str(nullptr) {
    this->str = new char[std::strlen(source.str) + 1];
    std::strcpy(this->str, source.str);

    cout << "copy constructor from: " << source.str << endl;
}

// move constructor
MyString::MyString(MyString &&source) noexcept
        : str(source.str) {
    source.str = nullptr;
    cout << "move constructor for: " << this->get_str() << endl;
}

// destructor
MyString::~MyString() {
    if (this->str == nullptr) {
        cout << "destructor for [nullptr] " << endl;
    } else {
        cout << "destructor for: " << this->str << endl;
    }
    delete[] this->str;
}

// insertion and extration operator -----------------------------
std::ostream &operator<<(std::ostream &os, const MyString &rhs) {
    os << rhs.str;
    return os;
}

std::istream &operator>>(std::istream &is, MyString &rhs) {
    char *buff = new char[1000];
    cin >> buff;

    rhs = MyString{buff};
    delete[] buff;

    return is;
}
// assignment overloading -------------------------------------------

// copy assignment
// s2 = s1;  we write this
// s2.operator=(s1); operator= method is called
MyString &MyString::operator=(const MyString &rhs) {
    if (this == &rhs)
        return *this;
    cout << "copy assignment from: " << this->str << " - to: " << rhs.str << endl;

    delete[] this->str;
    this->str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);

    return *this;
}

// move assignment
// s2 = MyString{"Joseph"};  we write this
// s2.operator=(MyString{"Joseph"}); operator= method is called
MyString &MyString::operator=(MyString &&rhs) noexcept {
    if (this == &rhs)
        return *this;
    cout << "move assignment from: " << this->str << " - to: " << rhs.str << endl;

    delete[] this->str;
    this->str = rhs.str;
    rhs.str = nullptr;

    return *this;
}

// operator overloading as non-member function ---------------------

// Unary operators (++,--,-,!)
MyString operator-(const MyString &obj) {
    char *buff = new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (size_t i = 0; i < std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    }

    MyString temp{buff};
    delete[] buff;

    return temp;
}

MyString &operator++(MyString &obj) {
    for (int i = 0; i < std::strlen(obj.str); ++i) {
        obj.str[i] = std::toupper(obj.str[i]);
    }
    return obj;
}

MyString operator++(MyString &obj, int) {
    MyString temp{obj};
    ++obj; // make sure you call the pre-increment
    return temp;
}

// Binary operators (+,-,==,!=,<,>,etc.)
MyString operator+(const MyString &lhs, const MyString &rhs) {
    size_t buff_size = std::strlen(lhs.str) + std::strlen(rhs.str) + 1;
    char *buff = new char[buff_size];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);

    MyString temp{buff};

    delete[] buff;
    return temp;
}

MyString operator*(const MyString &obj, size_t times) {
    MyString temp;
    for (size_t i = 0; i < times; i++) {
        temp = temp + obj;
    }
    return temp;
}

MyString &operator+=(MyString &lhs, const MyString &rhs) {
    lhs = lhs + rhs;
    return lhs;
}

MyString &operator*=(MyString &lhs, size_t times) {
    lhs = lhs * times;
    return lhs;
}

bool operator==(const MyString &lhs, const MyString &rhs) {
    return std::strcmp(lhs.str, rhs.str) == 0;
}

bool operator!=(const MyString &lhs, const MyString &rhs) {
    return std::strcmp(lhs.str, rhs.str) != 0;
}

bool operator<(const MyString &lhs, const MyString &rhs) {
    return std::strcmp(lhs.str,rhs.str) < 0;
}

bool operator>(const MyString &lhs, const MyString &rhs) {
    return std::strcmp(lhs.str,rhs.str) > 0;
}

// operator overloading as member function --------------------------
/*
// Unary operators (++,--,-,!)
MyString MyString::operator-() const {
    char *buff = new char[std::strlen(this->str) + 1];
    std::strcpy(buff, this->str);
    for (size_t i = 0; i < std::strlen(buff); i++) {
        buff[i] = std::tolower(buff[i]);
    }

    MyString temp{buff};
    delete[] buff;

    return temp;
}

MyString &MyString::operator++() {
    for (int i = 0; i < std::strlen(this->str); ++i) {
        this->str[i] = std::toupper(this->str[i]);
    }
    return *this;
}

MyString MyString::operator++(int) {
    MyString temp{*this};
    //++(*this);
    operator++(); // make sure you call the pre-increment
    return temp;
}

// Binary operators (+,-,==,!=,<,>,etc.)
MyString MyString::operator+(const MyString &rhs) const {
    size_t buff_size = std::strlen(this->str) + std::strlen(rhs.str) + 1;
    char *buff = new char[buff_size];
    std::strcpy(buff, this->str);
    std::strcat(buff, rhs.str);

    MyString temp{buff};

    delete[] buff;
    return temp;
}

bool MyString::operator==(const MyString &rhs) const {
    return std::strcmp(this->str, rhs.str) == 0;
}

bool MyString::operator!=(const MyString &rhs) const {
    return std::strcmp(this->str, rhs.str) == 0;
}

bool MyString::operator<(const MyString &rhs) const {
    return std::strlen(this->str) < std::strlen(rhs.str);
}

bool MyString::operator>(const MyString &rhs) const {
    return std::strlen(this->str) > std::strlen(rhs.str);
}

MyString &MyString::operator+=(const MyString &rhs) {
    *this = *this + rhs;
    return *this;
}

MyString MyString::operator*(size_t times) const {
    MyString temp;
    for (size_t i = 0; i < times; i++) {
        temp = temp + *this;
    }
    return temp;
}

MyString &MyString::operator*=(size_t times) {
    *this = *this * times;
    return *this;
}
*/
// member methods ---------------------------------------------------
int MyString::get_length() const {
    return std::strlen(this->str);
}

char *MyString::get_str() const {
    return this->str;
}