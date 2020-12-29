#include <fstream>
#include "Bitmap.h"
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"

using namespace bitmap;

namespace bitmap {
    Bitmap::Bitmap(int width, int height) : m_width{width}, m_height{height} {
        m_ptr_pixels = new uint8_t[width * height * 3]();
    }

    bool Bitmap::write(string filename) {

        BitmapFileHeader bmpFile;
        BitmapInfoHeader bmpInfo;

        bmpFile.sizeOfBytesMapFile = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) + (m_width * m_height * 3);
        bmpFile.pixelDataOffsetInBytes = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

        bmpInfo.width = m_width;
        bmpInfo.height = m_height;

        ofstream out_file;
        out_file.open(filename.c_str(), ios::out | ios::binary);

        if (!out_file)
            return false;

        out_file.write((char *) &bmpFile, sizeof(bmpFile));
        out_file.write((char *) &bmpInfo, sizeof(bmpInfo));
        out_file.write((char *) m_ptr_pixels, m_width * m_height * 3);

        out_file.close();

        return true;
    }

    Bitmap::~Bitmap() {
        delete[] m_ptr_pixels;
    };


    void Bitmap::set_pixel(int x, int y, Pixel pixel) {
        uint8_t *ptr_pixel = m_ptr_pixels;
        ptr_pixel += ((y * 3) * m_width) + (x * 3);

        ptr_pixel[0] = pixel.blue;
        ptr_pixel[1] = pixel.green;
        ptr_pixel[2] = pixel.red;
    }
}

