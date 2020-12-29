#include "FractalCreator.h"
#include "Mandelbrot.h"
#include "ZoomList.h"
#include "Pixel.h"
#include "RGB.h"

using namespace bitmap;

void FractalCreator::run(string name) {
    calculate_iteration();
    calculate_total_iterations();
    calculate_range_totals();
    draw_fractal();

    write_bitmap(name);
}

FractalCreator::FractalCreator(int width, int height)
        : width{width}, height{height}, bmp(width, height), zoomList(width, height) {
    histogram = new int[Mandelbrot::MAX_ITERATIONS]();
    fractal = new int[width * height]();
    zoomList.add(Zoom(width / 2, height / 2, 4.0 / width));
}

void FractalCreator::calculate_iteration() {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            std::pair<double, double> coords = zoomList.do_zoom(x, y);
            int iterations = Mandelbrot::get_iterations(coords.first, coords.second);

            fractal[y * width + x] = iterations;
            if (iterations != Mandelbrot::MAX_ITERATIONS)
                histogram[iterations]++;
        }
    }
}

void FractalCreator::draw_fractal() {


    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {

            int iterations = fractal[y * width + x];

            int range = get_range(iterations);
            int range_total = range_totals[range];
            int range_start = ranges[range];

            RGB &start_color = colors[range];
            RGB &end_color = colors[range + 1];
            RGB color_diff = end_color - start_color;

            uint8_t blue = 0;
            uint8_t green = 0;
            uint8_t red = 0;


            if (iterations != Mandelbrot::MAX_ITERATIONS) {

                int total_pixels = 0;

                for (int i = range_start; i <= iterations; ++i) {
                    total_pixels += histogram[i];
                }

                red = start_color.r + color_diff.r * (double) total_pixels / range_total;
                green = start_color.g + color_diff.g * (double) total_pixels / range_total;
                blue = start_color.b + color_diff.b * (double) total_pixels / range_total;
            }

            Pixel pixel{red, green, blue};

            bmp.set_pixel(x, y, pixel);
        }

    }

}

void FractalCreator::add_zoom(const Zoom &zoom) {
    zoomList.add(zoom);
}

void FractalCreator::write_bitmap(std::string name) {
    bmp.write(name);
}

void FractalCreator::calculate_total_iterations() {
    for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; ++i) {
        total += histogram[i];
    }
}

FractalCreator::~FractalCreator() {
    delete[] histogram;
    delete[] fractal;
}

void FractalCreator::add_range(double range_end, const RGB &rgb) {
    ranges.push_back(range_end * Mandelbrot::MAX_ITERATIONS);
    colors.push_back(rgb);

    if (got_first_range) {
        range_totals.push_back(0);
    }

    got_first_range = true;
}

void FractalCreator::calculate_range_totals() {
    int range_index = 0;

    for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; ++i) {
        int pixels = histogram[i];
        if (i >= ranges[range_index + 1]) {
            range_index++;
        }
        range_totals[range_index] += pixels;
    }
}

int FractalCreator::get_range(int iterations) const {
    int range = 0;
    for (int i = 0; i < ranges.size(); ++i) {
        range = i;
        if (ranges[i] > iterations) {
            break;
        }

    }
    range--;
    assert(range > -1);
    assert(range < ranges.size());
    return range;
}


