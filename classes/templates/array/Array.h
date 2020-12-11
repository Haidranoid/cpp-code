#ifndef _ARRAY_H
#define _ARRAY_H

#include <iostream>

template<typename T, int N>
class Array {
    friend std::ostream &operator<<(std::ostream &os, const Array<T, N> &arr) {
        os << "[ ";
        for (const auto &val: arr.values)
            os << val << " ";
        os << "]" << std::endl;
        return os;
    }

private:
    int size{N};
    T values[N];

public:
    Array() = default;

    Array(T init_val) {
        for (auto &item: this->values)
            item = init_val;
    }

    void fill(T val) {
        for (auto &item: this->values)
            item = val;
    }

    int get_size() const {
        return this->size;
    }

    //overloaded subscript operator for easy use
    T &operator[](int index) {
        return this->values[index];
    }
};

#endif //_ARRAY_H
