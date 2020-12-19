#ifndef _MYSTRING_H
#define _MYSTRING_H

class MyString {
    // operator overloading as non- member function ----------------
/*

    // Unary operators (++,--,-,!)
    friend MyString operator-(const MyString &obj);

    friend MyString &operator++(MyString &obj);

    friend MyString operator++(MyString &obj, int);

    // Binary operators (+,-,==,!=,<,>,etc.)
    friend MyString operator+(const MyString &lhs, const MyString &rhs);

    friend MyString operator*(const MyString &obj, size_t times);

    friend MyString &operator+=(MyString &lhs, const MyString &rhs);

    friend MyString &operator*=(MyString &lhs, size_t times);

    friend bool operator==(const MyString &lhs, const MyString &rhs);

    friend bool operator!=(const MyString &lhs, const MyString &rhs);

    friend bool operator<(const MyString &lhs, const MyString &rhs);

    friend bool operator>(const MyString &lhs, const MyString &rhs);
*/

    // insertion and extration operator -----------------------------

    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);

    friend std::istream &operator>>(std::istream &is, MyString &rhs);

private:
    char *str;

public:
    // constructors -----------------------------------------------

    // default constructor
    //MyString();

    // overloaded constructor
    MyString(char *s = nullptr);

    // copy constructor
    MyString(const MyString &source);

    // move constructor
    MyString(MyString &&source) noexcept;

    // destructor
    ~MyString();

    // assignment overloading ---------------------------------------

    // copy assignment
    // s2 = s1;  we write this
    // s2.operator=(s1); operator= method is called
    MyString &operator=(const MyString &rhs);

    // move assignment
    // s2 = MyString{"Joseph"};  we write this
    // s2.operator=(MyString{"Joseph"}); operator= method is called
    MyString &operator=(MyString &&rhs) noexcept;

    // operator overloading as member function ----------------------

    // Unary operators (++,--,-,!)
    MyString operator-() const;

    MyString &operator++(); // pre-increment

    MyString operator++(int); // post-increment

    // Binary operators (+,-,==,!=,<,>,etc.)
    bool operator==(const MyString &rhs) const;

    bool operator!=(const MyString &rhs) const;

    bool operator<(const MyString &rhs) const;

    bool operator>(const MyString &rhs) const;

    MyString operator+(const MyString &rhs) const;

    MyString &operator+=(const MyString &rhs);

    MyString operator*(size_t times) const;

    MyString &operator*=(size_t times);

    // member methods ------------------------------------------------
    int get_length() const;

    char *get_str() const;

};


#endif //_MYSTRING_H
