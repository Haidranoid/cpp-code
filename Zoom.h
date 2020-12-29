#ifndef MOVE_H_ZOOM_H
#define MOVE_H_ZOOM_H

struct Zoom {
    int x{0};
    int y{0};
    double scale{0.0};

    Zoom(int x, int y, double scale) : x{x}, y{y}, scale{scale} {};
};

#endif //MOVE_H_ZOOM_H
