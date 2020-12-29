#ifndef FRACTALCREATOR_H
#define FRACTALCREATOR_H

#include <string>
#include <vector>
#include "Zoom.h"
#include "memory"
#include "Bitmap.h"
#include "ZoomList.h"

using namespace bitmap;

class FractalCreator {
private:
    int width;
    int height;
    int *histogram;
    int *fractal;
    Bitmap bmp;
    ZoomList zoomList;
    int total{0};
    vector<double> ranges;
    vector<RGB> colors;
    vector<int> range_totals;
    bool got_first_range{false};

    void calculate_iteration();

    void calculate_total_iterations();

    void calculate_range_totals();

    void draw_fractal();


    void write_bitmap(std::string name);


public:
    FractalCreator(int width, int height);

    virtual ~FractalCreator();

    void add_zoom(const Zoom &zoom);

    void add_range(double range_end, const RGB &rgb);

    int get_range(int iterations) const;

    void run(string name);
};


#endif //FRACTALCREATOR_H
