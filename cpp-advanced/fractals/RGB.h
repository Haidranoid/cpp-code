
#ifndef MOVE_H_RGB_H
#define MOVE_H_RGB_H


class RGB {
public:
    double r;
    double g;
    double b;
public:
    RGB(double r, double g, double b);

    RGB operator-(const RGB &rhs) const;

    virtual ~RGB() = default;
};


#endif //MOVE_H_RGB_H
