#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

namespace numbers {
    class Complex {
        friend std::ostream &operator<<(std::ostream &os, const Complex &complex);

        friend std::istream &operator>>(std::istream &in, Complex &complex);

    private:
        double real;
        double imaginary;

    public:
        Complex();

        Complex(double real, double imaginary);

        Complex(const Complex &source);

        Complex &operator=(const Complex &rhs);

        Complex operator+(const Complex &rhs) const;

        bool operator==(const Complex &rhs) const;

        bool operator!=(const Complex &rhs) const;

        double get_real() const;

        double get_imaginary() const;

        void set_real(double real);

        void set_imaginary(double imaginary);
    };

    Complex operator+(const Complex &rhs, double d);

    Complex operator+(double d, const Complex &rhs);

}


#endif //COMPLEX_H
