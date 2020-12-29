#ifndef BITMAPINFOHEADER_H
#define BITMAPINFOHEADER_H

#include <cstdint>

namespace bitmap {
#pragma pack(push, 2)
    struct BitmapInfoHeader {
        uint32_t sizeOfThisHeaderInBytes = 40;
        int32_t width; // in pixels
        int32_t height; // in pixels
        uint16_t numberOfColorPlanes = 1; // must be 1
        uint16_t bitsPerPixel = 24;
        uint32_t compressionMethod = 0;
        uint32_t rawBitmapDataSize = 0; // generally ignored
        int32_t horizontalResolution = 2400; // in pixel per meter
        int32_t verticalResolution = 2400; // in pixel per meter
        uint32_t colorTableEntries = 0;
        uint32_t importantColors = 0;
    };
#pragma pack(pop)
}


#endif //BITMAPINFOHEADER_H
