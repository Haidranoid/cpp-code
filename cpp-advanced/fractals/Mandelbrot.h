#ifndef MANDELBROT_H
#define MANDELBROT_H

using namespace std;

class Mandelbrot {
public:
    static const int MAX_ITERATIONS = 2000;

public:
    Mandelbrot();

    virtual ~Mandelbrot();

    static int get_iterations(double x, double y);
};


#endif //MANDELBROT_H
