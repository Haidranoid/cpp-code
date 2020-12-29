#ifndef PIXEL_H
#define PIXEL_H

#include <cstdint>

namespace bitmap {
#pragma pack(push, 1)
    struct Pixel {
        uint8_t red;
        uint8_t green;
        uint8_t blue;
    };
#pragma pack(pop)
}

#endif //PIXEL_H
