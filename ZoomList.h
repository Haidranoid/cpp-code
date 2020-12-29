#ifndef ZOOMLIST_H
#define ZOOMLIST_H

#include <vector>
#include <utility>
#include "Zoom.h"

class ZoomList {
private:
    double x_center{0};
    double y_center{0};
    double scale{1.0};

    int width{0};
    int height{0};
    std::vector<Zoom> zooms;

public:
    ZoomList() = default;

    ZoomList(int width, int height);

    void add(const Zoom &zoom);

    std::pair<double, double> do_zoom(int x, int y);
};


#endif //ZOOMLIST_H
