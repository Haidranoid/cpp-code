#include "Complex.h"

namespace numbers {
    std::ostream &operator<<(std::ostream &os, const Complex &complex) {
        os << "Complex ( " << complex.real << ", " << complex.imaginary << " )";
        return os;
    }

    std::istream &operator>>(std::istream &in, Complex &complex) {
        in >> complex.real >> complex.imaginary;
        return in;
    }

    Complex::Complex() : real{0}, imaginary{0} {
    }

    Complex::Complex(double real, double imaginary)
            : real{real}, imaginary{imaginary} {
    }

    Complex::Complex(const Complex &source)
            : real{source.real}, imaginary{source.imaginary} {
        std::cout << "copy constructor" << std::endl;
    }

    Complex &Complex::operator=(const Complex &rhs) {
        if (this == &rhs)
            return *this;

        this->real = rhs.real;
        this->imaginary = rhs.imaginary;

        std::cout << "move assignment" << std::endl;
        return *this;
    }

    double Complex::get_real() const {
        return this->real;
    }

    double Complex::get_imaginary() const {
        return this->imaginary;
    }

    void Complex::set_imaginary(double imaginary) {
        this->imaginary = imaginary;
    }

    void Complex::set_real(double real) {
        this->real = real;
    }

    Complex Complex::operator+(const Complex &rhs) const {
        Complex temp;

        temp.real = this->real + rhs.real;
        temp.imaginary = this->imaginary + rhs.imaginary;

        return temp;
    }

    bool Complex::operator==(const Complex &rhs) const {
        if (this == &rhs)
            return true;
        return this->real == rhs.real && this->imaginary == rhs.imaginary;
    }

    bool Complex::operator!=(const Complex &rhs) const {
        if (this == &rhs)
            return false;
        return this->real != rhs.real && this->imaginary != rhs.imaginary;
    }

    Complex operator+(const Complex &rhs, double d) {
        Complex temp;

        temp.set_real(rhs.get_real() + d);
        temp.set_imaginary(rhs.get_imaginary());

        return temp;
    }

    Complex operator+(double d, const Complex &rhs) {
        Complex temp;

        temp.set_real(rhs.get_real() + d);
        temp.set_imaginary(rhs.get_imaginary());

        return temp;
    }
}

