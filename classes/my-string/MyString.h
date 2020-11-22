#ifndef _MYSTRING_H
#define _MYSTRING_H

class MyString {
private:
    char *str;

public:
    // constructors -------------------------------

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

    // operator overloading ----------------------

    // copy assignment
    // s2 = s1;  we write this
    // s2.operator=(s1); operator= method is called
    MyString &operator=(const MyString &rhs);

    // move assignment
    // s2 = MyString{"Joseph"};  we write this
    // s2.operator=(MyString{"Joseph"}); operator= method is called
    MyString &operator=(MyString &&rhs) noexcept;

    // Unary operators (++,--,-,!)
    MyString operator-() const;

    MyString operator++();

    MyString operator++(int);

    MyString operator!();


    // member methods -----------------------------
    int get_length() const;

    char *get_str() const;

};


#endif //_MYSTRING_H
