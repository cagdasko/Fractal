/*
 * BitmapFileHeader.h
 *
 *  Created on: Feb 14, 2022
 *      Author: cagdask
 */

#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

#include <cstdint>

namespace ck {
#pragma pack(2)

struct BitmapFileHeader {
	char header[2] { 'B', 'M' };
	int32_t fileSize;
	int32_t reserved { 0 };
	int32_t dataOffset;
};

}

#endif /* BITMAPFILEHEADER_H_ */
