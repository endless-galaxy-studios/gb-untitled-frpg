// ///////////////////////
// //                   //
// //  File Attributes  //
// //                   //
// ///////////////////////

// Filename: PokeCenter.png
// Pixel Width: 288px
// Pixel Height: 192px

// /////////////////
// //             //
// //  Constants  //
// //             //
// /////////////////

const int PokeCenter_tile_map_size = 0x0360;
const int PokeCenter_tile_map_width = 0x24;
const int PokeCenter_tile_map_height = 0x18;

const int PokeCenter_tile_data_size = 0x0480;
const int PokeCenter_tile_count = 0x48;

// ////////////////
// //            //
// //  Map Data  //
// //            //
// ////////////////

const unsigned char PokeCenter_map_data[] ={
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x01,0x02,0x03,0x04,0x05,0x03,0x03,0x06,0x07,0x03,0x01,0x02,
  0x03,0x04,0x05,0x03,0x03,0x03,0x03,0x03,0x08,0x09,0x03,0x03,0x08,0x09,0x03,0x03,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x03,0x0A,0x0B,0x03,0x03,0x0C,
  0x0D,0x03,0x01,0x02,0x03,0x0A,0x0B,0x03,0x03,0x03,0x03,0x03,0x0E,0x0F,0x03,0x03,
  0x0E,0x0F,0x03,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x02,0x10,0x11,
  0x12,0x13,0x14,0x15,0x16,0x15,0x01,0x02,0x10,0x11,0x12,0x17,0x16,0x15,0x16,0x15,
  0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x01,0x02,0x10,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1C,0x01,0x02,0x10,0x18,0x19,0x17,
  0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x1E,0x1F,0x20,0x21,0x21,0x21,0x21,0x22,0x21,0x21,0x1E,0x1F,
  0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x23,0x24,0x16,0x15,0x23,0x24,0x21,0x21,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x25,0x26,0x27,0x28,0x27,0x28,0x27,0x28,
  0x27,0x28,0x25,0x26,0x27,0x28,0x27,0x28,0x27,0x28,0x27,0x28,0x28,0x27,0x1D,0x1C,
  0x28,0x27,0x27,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x29,0x15,0x16,0x15,
  0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,
  0x16,0x15,0x16,0x15,0x16,0x15,0x2A,0x2B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x2C,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,
  0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x2D,0x2E,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x2F,0x30,0x31,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,
  0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x32,0x33,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x34,0x35,0x36,0x1C,0x1D,0x1C,0x1D,0x1C,
  0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,
  0x1D,0x1C,0x1D,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x37,0x38,0x14,0x15,
  0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,
  0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x39,0x3A,0x1B,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,
  0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x3B,0x3C,0x3D,0x3C,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,
  0x3D,0x3C,0x3D,0x3C,0x16,0x15,0x16,0x15,0x16,0x15,0x16,0x15,0x3D,0x3C,0x3D,0x3C,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x3F,0x40,0x3F,0x1D,0x1C,0x1D,0x1C,
  0x1D,0x1C,0x1D,0x1C,0x40,0x3F,0x40,0x3F,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,
  0x40,0x3F,0x40,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x42,0x43,0x42,
  0x16,0x15,0x44,0x44,0x44,0x44,0x16,0x15,0x43,0x42,0x43,0x42,0x16,0x15,0x16,0x15,
  0x16,0x15,0x16,0x15,0x43,0x42,0x43,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x45,0x46,0x47,0x46,0x1D,0x1C,0x44,0x44,0x44,0x44,0x1D,0x1C,0x47,0x46,0x47,0x46,
  0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x1D,0x1C,0x47,0x46,0x47,0x46,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

// /////////////////
// //             //
// //  Tile Data  //
// //             //
// /////////////////

const unsigned char PokeCenter_tile_data[] ={
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0xBF,0x80,0xBF,0x80,0xBF,0x80,0xBF,0x80,0xBF,0x80,0xBF,0x80,0xBF,0x80,0xBF,0x80,
  0xFD,0x01,0xFD,0x01,0xFD,0x01,0xFD,0x01,0xFD,0x01,0xFD,0x01,0xFD,0x01,0xFD,0x01,
  0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
  0xFF,0x00,0x1F,0x1F,0x20,0x20,0xE0,0xE0,0xFF,0x20,0x3F,0x2F,0xF8,0xE8,0xBB,0xA8,
  0xFF,0x00,0xF8,0xF8,0x04,0x04,0x07,0x07,0xFC,0x04,0xFC,0xF4,0x1F,0x17,0xFF,0x15,
  0x00,0x00,0x00,0x00,0x03,0x03,0xFC,0x84,0x78,0x08,0x08,0x08,0x78,0x08,0xFC,0x84,
  0x00,0x00,0x00,0x00,0xC0,0xC0,0x3F,0x21,0x1E,0x10,0x10,0x10,0x1E,0x10,0x3F,0x21,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,0xD5,0xAA,0xAA,0xD5,0xD5,0xFF,0xFF,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x55,0x55,0xAB,0xAB,0x55,0x55,0xFF,0xFF,
  0xBA,0xA8,0xBF,0xAF,0xBF,0xA0,0xBF,0xAD,0xA1,0xA1,0x9F,0x9F,0x80,0x80,0xF3,0xF3,
  0x1D,0x15,0xFD,0xF5,0xFD,0x05,0xFD,0xF5,0xF7,0x15,0xFF,0xF9,0x01,0x01,0xCF,0xCF,
  0x03,0x03,0x00,0x00,0x3C,0x3C,0xBC,0xBC,0x30,0x30,0x00,0x00,0x00,0x00,0xFF,0xFF,
  0xC0,0xC0,0x00,0x00,0x3C,0x3C,0x39,0x39,0x3C,0x3C,0x00,0x00,0x00,0x00,0xFF,0xFF,
  0x83,0x80,0x87,0x80,0x8F,0x80,0xFF,0xFF,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0xFF,0x01,0xFF,0x01,0xFF,0x01,0xFF,0xFF,0x03,0x01,0x03,0x01,0x03,0x01,0x03,0x01,
  0xEF,0x00,0xEF,0x01,0xFF,0x1E,0xE0,0x20,0xC4,0x40,0xCF,0x4E,0xD9,0x49,0xF0,0x30,
  0x80,0x80,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,
  0x01,0x01,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,
  0xBF,0x00,0xBE,0x80,0x7D,0x78,0x07,0x04,0x07,0x04,0x06,0x04,0x05,0x04,0x07,0x04,
  0x77,0x00,0xBB,0x00,0xDD,0x00,0xEE,0x00,0xF7,0x00,0xFB,0x00,0x3D,0x00,0xBE,0x00,
  0x22,0x00,0x44,0x00,0x88,0x00,0x10,0x00,0x20,0x00,0x40,0x00,0x87,0x00,0x04,0x00,
  0x88,0x00,0x44,0x00,0x22,0x00,0x11,0x00,0x08,0x00,0x04,0x00,0xC2,0x00,0x41,0x00,
  0xF7,0x00,0xF7,0x80,0xFF,0x78,0x07,0x04,0x23,0x02,0xF3,0x72,0x9B,0x92,0x0F,0x0C,
  0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0xBF,0x80,0x80,0xFF,0x80,0xFF,0xFF,
  0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0xFD,0x01,0x01,0xFF,0x01,0xFF,0xFF,
  0x07,0x04,0x07,0x04,0x05,0x04,0x06,0x04,0x87,0x84,0x7F,0x7C,0x05,0x04,0xFE,0xFC,
  0xBF,0x00,0xBE,0x00,0x3D,0x00,0xFB,0x00,0xF7,0x00,0xEE,0x00,0xDD,0x00,0xBB,0x00,
  0x04,0x00,0x04,0x00,0x87,0x00,0x40,0x00,0x20,0x00,0x10,0x00,0x88,0x00,0x44,0x00,
  0x40,0x00,0x41,0x00,0xC2,0x00,0x04,0x00,0x08,0x00,0x11,0x00,0x22,0x00,0x44,0x00,
  0xFF,0xFF,0x80,0x80,0xFF,0xFF,0xC0,0x80,0xC0,0x80,0xC0,0x80,0xC0,0x80,0xC0,0x80,
  0xFF,0xFF,0x01,0x01,0xFF,0xFF,0x03,0x01,0x03,0x01,0x03,0x01,0x03,0x01,0x03,0x01,
  0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,0xFF,0x00,
  0xFF,0xFF,0x00,0x00,0x1C,0x1C,0x36,0x36,0x5D,0x5D,0xE3,0x41,0x3E,0x22,0xFF,0x1C,
  0x7F,0x7F,0x80,0x80,0xBF,0x80,0xBF,0x80,0xBF,0x80,0xBF,0x80,0x80,0x80,0xFF,0xFF,
  0xFE,0xFE,0x01,0x01,0xFD,0x01,0xFD,0x01,0xFD,0x01,0xFD,0x01,0x01,0x01,0xFF,0xFF,
  0xC0,0x80,0xC0,0x80,0xC0,0x80,0xC0,0x80,0xC0,0x80,0xC0,0x80,0xC0,0x80,0xFF,0xFF,
  0x03,0x01,0x03,0x01,0x03,0x01,0x03,0x01,0x03,0x01,0x03,0x01,0x03,0x01,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0xFF,0xFF,0x03,0x01,0x03,0x01,0x03,0x01,0x03,0x01,0xFF,0xFF,
  0x00,0x00,0x00,0x00,0xFF,0xFF,0xC0,0x80,0xC0,0x80,0xC0,0x80,0xC0,0x80,0xFF,0xFF,
  0x88,0x80,0xC4,0x80,0xA2,0x80,0x91,0x80,0x88,0x80,0x84,0x80,0xC2,0x80,0xC1,0x80,
  0x1F,0x1F,0x20,0x20,0x20,0x20,0x20,0x20,0x3F,0x20,0x3F,0x2F,0xF9,0xE9,0xBF,0xAF,
  0xF8,0xF8,0x04,0x04,0x04,0x04,0x04,0x04,0xFC,0x04,0xFC,0xF4,0xFF,0xF7,0xFF,0xF5,
  0xC0,0x80,0xC1,0x80,0xC2,0x80,0x84,0x80,0x88,0x80,0x91,0x80,0xA2,0x80,0xC4,0x80,
  0xBF,0xAF,0xBF,0xAF,0xBF,0xA0,0xA0,0xA0,0xBF,0xA0,0xA0,0xA0,0x9F,0x9F,0x80,0x80,
  0xFD,0xF5,0xFD,0xF5,0xFD,0x05,0xF5,0xF5,0xFD,0x05,0x07,0x05,0xFF,0xF9,0x01,0x01,
  0xFA,0xF8,0xD5,0x84,0xEF,0x85,0xF7,0x87,0xEF,0x87,0xF7,0x87,0x87,0x87,0xF7,0x87,
  0xBE,0x3E,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xF9,0xF0,0xF0,0x92,0x92,0x80,0x80,
  0x88,0x00,0x44,0x00,0xA2,0x80,0xD1,0xC0,0xC8,0xC0,0x84,0x80,0xC2,0x80,0xC1,0x80,
  0x9F,0x9F,0xE0,0xE0,0xB0,0xA0,0xA0,0xA0,0xBF,0xA0,0xBF,0xBF,0x80,0x80,0xFF,0x7F,
  0xF9,0xF9,0x07,0x07,0x05,0x05,0x05,0x05,0xFD,0x05,0xFD,0xFD,0x01,0x01,0xFF,0xFE,
  0xED,0x85,0xF5,0x84,0xEC,0x84,0xF5,0x84,0xED,0x84,0xF5,0x84,0x85,0x84,0xF5,0x84,
  0x80,0x80,0xE1,0x61,0x4F,0x4F,0x8F,0x8F,0x9D,0x9D,0xF2,0x72,0xFC,0x1C,0xFB,0x03,
  0xBF,0x80,0xBE,0x00,0x3D,0x00,0xFB,0x00,0xF7,0x80,0x6E,0x40,0xDD,0x80,0xBB,0x00,
  0xED,0x84,0xF5,0x84,0xEC,0x84,0xF5,0x84,0xED,0x84,0xF5,0x84,0xFD,0xFC,0x85,0x84,
  0xFD,0x01,0xFB,0x01,0x01,0x01,0xFB,0x01,0xFD,0x01,0xFB,0x01,0xFD,0x01,0xFB,0x01,
  0x85,0x84,0x85,0x84,0x85,0x84,0x87,0x87,0xF8,0xF8,0x80,0x80,0x80,0x80,0xFF,0xFF,
  0xFD,0x01,0xFB,0x01,0xFD,0x01,0xFF,0xFF,0x01,0x01,0x01,0x01,0x01,0x01,0xFE,0xFE,
  0xA8,0xA0,0xDC,0xD8,0xEE,0xE6,0xC7,0x85,0xE3,0xE1,0xD0,0x80,0xE7,0xE7,0xFF,0xF9,
  0x26,0x04,0x5E,0x1A,0xEB,0x63,0xF1,0xA1,0x46,0x06,0x9F,0x91,0xF6,0xC6,0x98,0x98,
  0xA8,0x20,0x5C,0x58,0x6E,0x66,0xC7,0x85,0x63,0x61,0xD0,0x80,0x67,0x67,0xFF,0xF9,
  0xF9,0xE0,0xD1,0x90,0xE3,0xC2,0xC5,0x81,0xEB,0xCB,0xFF,0x9B,0xF5,0xD5,0xFF,0xAB,
  0xDE,0x46,0x0D,0x09,0xA2,0x82,0x81,0x81,0xDB,0xD3,0xFF,0xD9,0xEE,0xEA,0x54,0x54,
  0xF9,0x60,0xD1,0x90,0x63,0x42,0xC5,0x81,0xEB,0xCB,0xFF,0x9B,0x75,0x55,0x7F,0x2B,
  0x89,0x81,0xC4,0x80,0xA2,0x82,0x9F,0x8E,0x94,0x94,0x8E,0x8C,0xBC,0xAC,0xBE,0xAE,
  0x62,0x40,0xC4,0x40,0x48,0x40,0xF0,0x70,0xA8,0x28,0x70,0x30,0xBC,0x34,0x7C,0x74,
  0x89,0x01,0x44,0x00,0x22,0x02,0x1F,0x0E,0x14,0x14,0x0E,0x0C,0x3C,0x2C,0x3E,0x2E,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xAF,0xA7,0xA7,0xA0,0x91,0x90,0x97,0x97,0x93,0x90,0x89,0x88,0xA7,0x87,0xC0,0x80,
  0xF4,0xE4,0xE4,0x04,0x08,0x08,0xE8,0xE8,0x08,0x08,0x10,0x10,0xE0,0xE0,0x14,0x00,
  0x2F,0x27,0x27,0x20,0x11,0x10,0x17,0x17,0x13,0x10,0x09,0x08,0x27,0x07,0x40,0x00
};
