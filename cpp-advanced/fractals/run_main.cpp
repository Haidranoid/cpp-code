#include <iostream>
#include <cstdint>
#include <cmath>
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"
#include "Bitmap.h"
#include "Pixel.h"
#include "Mandelbrot.h"
#include "ZoomList.h"
#include "Zoom.h"
#include "FractalCreator.h"

using namespace std;
using namespace bitmap;

int run_main() {
/*    cout << sizeof(BitmapFileHeader) << endl;
    cout << sizeof(BitmapInfoHeader) << endl;
    cout << sizeof(Pixel) << endl;*/


    FractalCreator fractalCreator(800, 600);
    fractalCreator.add_range(0, RGB(0, 0, 0));
    fractalCreator.add_range(0.3, RGB(255, 0, 0));
    fractalCreator.add_range(0.5, RGB(255, 255, 0));
    fractalCreator.add_range(1.0, RGB(255, 255, 255));

    fractalCreator.add_zoom(Zoom(295, 202, 0.1));
    fractalCreator.add_zoom(Zoom(312, 304, 0.1));

    fractalCreator.run("../bitmap_test.bmp");
    cout << "Finished." << endl;


    return 0;
}
