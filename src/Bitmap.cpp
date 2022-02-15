/*
 * Bitmap.cpp
 *
 *  Created on: Feb 15, 2022
 *      Author: cagdask
 */

#include "Bitmap.h"
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"

namespace ck {

Bitmap::Bitmap(int width, int height) :
		m_width(width), m_height(height), m_pPixels(
				new uint8_t[3 * width * height] { }) {
// TODO Auto-generated constructor stub

}

bool Bitmap::write(string filename) {
	BitmapFileHeader fileHeader;
	BitmapInfoHeader infoHeader;

	fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader)
			+ m_width * m_height * 3;
	fileHeader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

	infoHeader.width = m_width;
	infoHeader.height = m_height;

	return false;
}

void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {

}

Bitmap::~Bitmap() {
// TODO Auto-generated destructor stub
}

} /* namespace ck */
