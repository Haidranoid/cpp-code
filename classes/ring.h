#ifndef RING_H
#define RING_H

#include <iostream>

using namespace std;

template<class T>
class ring {
private:
    T *m_values;
    int m_size;
    int m_position;
public:
    class iterator;

    ring(int m_size) : m_position{0}, m_size{m_size}, m_values{NULL} {
        this->m_values = new T[m_size];
    }

    ~ring() {
        delete[] m_values;
    }

    int size() {
        return this->m_size;
    }

    void add(T value) {
        m_values[this->m_position++] = value;

        if (this->m_position == this->m_size)
            this->m_position = 0;
    }

    T &get(int pos) {
        return this->m_values[pos];
    }

    T &operator[](int pos) {
        return this->m_values[pos];
    }

    ring<T>::iterator begin() {
        return ring<T>::iterator(0, *this);
    }

    ring<T>::iterator end() {
        return ring<T>::iterator(m_size, *this);
    }
};

template<class T>
class ring<T>::iterator {
private:
    int pos{};
    ring &m_ring;
public:
    iterator(int pos, ring &mRing) : pos(pos), m_ring(mRing) {
    }

    T &operator*() {
        return this->m_ring.get(this->pos);
    }

    iterator &operator++() {
        this->pos++;
        return *this;
    }

    iterator &operator++(int) {
        this->pos++;
        return *this;
    }

    bool operator!=(const iterator &rhs) const {
        return this->pos != rhs.pos;
    }
};


#endif //RING_H
