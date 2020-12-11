#ifndef _ITEM_H
#define _ITEM_H

#include <iostream>
#include <string>

// Template classes are typically completely contained in header files
// So, we would have the template class in item.h and no item.cpp file
// would be used
template<typename T>
class Item {
private:
    std::string name;
    T value;
public:
    Item(std::string name, T value)
            : name{name}, value{value} {}

    std::string get_name() const {
        return this->name;
    }

    T get_value() const {
        return this->value;
    }
};

template<typename T1, typename T2>
struct My_Pair {
    T1 first;
    T2 second;
};

#endif //_ITEM_H
