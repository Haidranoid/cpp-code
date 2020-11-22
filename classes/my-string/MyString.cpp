#include "iostream"
#include "cstring"
#include "MyString.h"

using namespace std;

// constructors ---------------------------------

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

// operator overloading -----------------------

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

// Unary operators (++,--,-,!)
MyString MyString::operator-() const{
    return *this;
}

MyString MyString::operator++(){
    return *this;
}

MyString MyString::operator++(int){
    return *this;
}

MyString MyString::operator!(){
    return *this;
}

// member methods -----------------------------
int MyString::get_length() const {
    return std::strlen(this->str);
}

char *MyString::get_str() const {
    return this->str;
}





