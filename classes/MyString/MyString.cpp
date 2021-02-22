#include "MyString.h"

MyString::MyString() {
    this->str = new char[1];
    *this->str = '\0';
};

MyString::MyString(const char *s) {
    this->str = new char[strlen(s) + 1];
    strcpy(this->str, s);
}

MyString::MyString(const MyString &source)
        : MyString(source.str) {
}

MyString::MyString(MyString &&source) noexcept
        : str{source.str} {
    source = nullptr;
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

MyString &MyString::operator=(MyString &&rhs) noexcept {
    std::cout << "move assignment" << std::endl;
    if (this == &rhs)
        return *this;

    delete[] this->str;

    this->str = rhs.str;
    rhs.str = nullptr;

    return *this;
}

MyString MyString::operator-() const {
    char *buff = new char[strlen(this->str) + 1];
    strcpy(buff, this->str);

    for (int i = 0; i < strlen(buff); i++) {
        buff[i] = tolower(buff[i]);
    }

    MyString temp{buff};
    delete[] buff;

    return temp;
}

MyString MyString::operator+(const MyString &rhs) const {
    size_t size = strlen(this->str) + strlen(rhs.str) + 1;
    char *buff = new char[size];

    strcpy(buff, this->str);
    strcat(buff, rhs.str);

    MyString temp{buff};
    delete[] buff;

    return temp;
}

bool MyString::operator==(const MyString &rhs) const {
    return strcmp(this->str, rhs.str) == 0;
}


char *MyString::get_str() const {
    return this->str;
}

void MyString::set_str(char *str) {
    this->str = str;
}

std::ostream &operator<<(std::ostream &os, const MyString &my_string) {
    os << my_string.str;
    return os;
}

std::istream &operator>>(std::istream &is, MyString &my_string) {
    char *buff = new char[1000];
    is >> buff;
    my_string = MyString{buff};
    delete[] buff;
    return is;
}
