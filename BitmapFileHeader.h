#ifndef BITMAPFILEHEADER_H
#define BITMAPFILEHEADER_H

#include <cstdint> // for specific size integers

namespace bitmap {

#pragma pack(push, 2)
    struct BitmapFileHeader {
        char bitmapSignatureBytes[2] = {'B', 'M'};
        uint32_t sizeOfBytesMapFile; // 54 bytes + (width * height * 3 bytes)
        uint32_t reservedBytes = 0;
        uint32_t pixelDataOffsetInBytes; // 54 bytes
    };
#pragma pack(pop)

}


#endif //BITMAPFILEHEADER_H
