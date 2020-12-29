#ifndef BITMAP_H
#define BITMAP_H

#include <string>
#include <cstdint>
#include <memory>
#include "Pixel.h"
#include "RGB.h"

using namespace std;

namespace bitmap {

    class Bitmap {
    private:
        int m_width{0};
        int m_height{0};
        uint8_t *m_ptr_pixels{nullptr};

    public:
        Bitmap() = default;

        Bitmap(int width, int height);

        virtual ~Bitmap();

        virtual bool write(string filename);

        virtual void set_pixel(int x, int y, Pixel pixel);
    };

}

#endif //BITMAP_H
