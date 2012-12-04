/*******************************************************************************************
  Font name: Terminal
  Font width: 6 (monospaced font)
  Font height: 8
  Data length: 8 bits
  Data format: Little Endian, Column based, Row preferred, Unpacked

  Create time: 13:55 07-09-2009  by BitFontCreator (e-mail: support@iseatech.com)
 *******************************************************************************************/

/*******************************************************************************************
  Data table provides the bitmap data of each character.

  To get the starting data offset of character 'A', you can use the following expression:

     const unsigned char index = index_table['A'];
     const unsigned int offset = offset_table[index];
     const unsigned char *pData = data_table[offset];

 *******************************************************************************************/
 
 
 
const unsigned char font_6x8[768] = {

0x00, 0x02, 0x01, 0x59, 0x09, 0x06, 		//  0		\x00	
0x00, 0x20, 0x55, 0x54, 0x55, 0x78, 		//  1		\x01	�
0x00, 0x38, 0x45, 0x44, 0x45, 0x38, 		//  2		\x02	�
0x00, 0x3C, 0x41, 0x20, 0x7D, 0x00,		//  3		\x03	�
0x00, 0x09, 0x0D, 0x0A, 0x00, 0x00, 		//  4		\x04	hoch 2   (gibt noch l/m2 als 3x Char)
0x00, 0x06, 0x09, 0x09, 0x06, 0x00, 		//  5		\x05	�
0x00, 0x02, 0x01, 0x59, 0x09, 0x06, 		//  6		\x06	
0x3C, 0x42, 0x42, 0x42, 0x3C, 0x18,   		//  7		\x07	Schl�ssel
0x18, 0x18, 0x18, 0x78, 0x18, 0x78, 		//  8		\x08	Schl�ssel
0x00, 0x03, 0xDF, 0xDF, 0x03, 0x00, 		//  9		\x09	Ausrufezeichen
0x00, 0x7F, 0x41, 0x41, 0x41, 0x41, 		// 10		\x0A	Batt
0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 		// 11		\x0B	Batt
0x41, 0x41, 0x7F, 0x1C, 0x1C, 0x00, 		// 12		\x0C	Batt

0x00, 0x00, 0x00, 0x00, 0x00, 0x1C,		//          \x0D	"von" auf 4 Zeichen 
0x20, 0x40, 0x20, 0x1C, 0x00, 0x38, 	
0x44, 0x44, 0x44, 0x38, 0x00, 0x7C, 
0x04, 0x04, 0x78, 0x00, 0x00, 0x00, 

0x00, 0x00, 0x7F, 0x40, 0x00, 0x60, 		//	\x11		l/m2 auf 3x Zeichen
0x1C, 0x03, 0x00, 0x7C, 0x04, 0x78,			//	\x12
0x04, 0x78, 0x00, 0x09, 0x0D, 0x0A,  		//	\x13


0xF8, 0xF8, 0x00, 0xFE, 0x82, 0x82, 		// 21		\x14	..
0xF8, 0xF8, 0x00, 0xFE, 0xFE, 0xFE,  		// 22		\x15	..
0xFE, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 		// 23		\x16	..
0x00, 0x02, 0x01, 0x59, 0x09, 0x06, 		//  
0x24, 0x42, 0x81, 0x81, 0x42, 0x24, 		// 24		\x18	Pfeil hochrunter
0x00, 0xFF, 0x81, 0x81, 0x81, 0xFF,  		// 25		\x19	Balken leer
0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,  		// 26		\x1A	Balken voll
0x22, 0x63, 0x63, 0x63, 0x3E, 0x1C, 		// 27		\x1B	Tool
0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C,  		// 28		\x1C	Tool
0x3E, 0x63, 0x63, 0x63, 0x22, 0x00, 		// 29		\x1D	Tool
0x00, 0x04, 0x0C, 0x1C, 0x0C, 0x04,   		// 30		\x1E	Pfeil runter
0x00, 0x7F, 0x40, 0x00, 0x7F, 0x40,  		// 31		\x1F	Doppel "ll"


/* character 0x20 (' '): (width=6, offset=0) */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

/* character 0x21 ('!'): (width=6, offset=6) */
0x00, 0x00, 0x06, 0x5F, 0x06, 0x00, 

/* character 0x22 ('"'): (width=6, offset=12) */
0x00, 0x07, 0x03, 0x00, 0x07, 0x03, 

/* character 0x23 ('#'): (width=6, offset=18) */
0x00, 0x24, 0x7E, 0x24, 0x7E, 0x24, 

/* character 0x24 ('$'): (width=6, offset=24) */
0x00, 0x24, 0x2B, 0x6A, 0x12, 0x00, 

/* character 0x25 ('%'): (width=6, offset=30) */
0x00, 0x63, 0x13, 0x08, 0x64, 0x63, 

/* character 0x26 ('&'): (width=6, offset=36) */
0x00, 0x36, 0x49, 0x56, 0x20, 0x50, 

/* character 0x27 ('''): (width=6, offset=42) */
0x00, 0x00, 0x07, 0x03, 0x00, 0x00, 

/* character 0x28 ('('): (width=6, offset=48) */
0x00, 0x00, 0x3E, 0x41, 0x00, 0x00, 

/* character 0x29 (')'): (width=6, offset=54) */
0x00, 0x00, 0x41, 0x3E, 0x00, 0x00, 

/* character 0x2A ('*'): (width=6, offset=60) */
0x00, 0x08, 0x3E, 0x1C, 0x3E, 0x08, 

/* character 0x2B ('+'): (width=6, offset=66) */
0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, 

/* character 0x2C (','): (width=6, offset=72) */
0x00, 0x00, 0xE0, 0x60, 0x00, 0x00, 

/* character 0x2D ('-'): (width=6, offset=78) */
0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 

/* character 0x2E ('.'): (width=6, offset=84) */
0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 

/* character 0x2F ('/'): (width=6, offset=90) */
0x00, 0x20, 0x10, 0x08, 0x04, 0x02, 

/* character 0x30 ('0'): (width=6, offset=96) */
0x00, 0x3E, 0x51, 0x49, 0x45, 0x3E, 

/* character 0x31 ('1'): (width=6, offset=102) */
0x00, 0x00, 0x42, 0x7F, 0x40, 0x00, 

/* character 0x32 ('2'): (width=6, offset=108) */
0x00, 0x62, 0x51, 0x49, 0x49, 0x46, 

/* character 0x33 ('3'): (width=6, offset=114) */
0x00, 0x22, 0x49, 0x49, 0x49, 0x36, 

/* character 0x34 ('4'): (width=6, offset=120) */
0x00, 0x18, 0x14, 0x12, 0x7F, 0x10, 

/* character 0x35 ('5'): (width=6, offset=126) */
0x00, 0x2F, 0x49, 0x49, 0x49, 0x31, 

/* character 0x36 ('6'): (width=6, offset=132) */
0x00, 0x3C, 0x4A, 0x49, 0x49, 0x30, 

/* character 0x37 ('7'): (width=6, offset=138) */
0x00, 0x01, 0x71, 0x09, 0x05, 0x03, 

/* character 0x38 ('8'): (width=6, offset=144) */
0x00, 0x36, 0x49, 0x49, 0x49, 0x36, 

/* character 0x39 ('9'): (width=6, offset=150) */
0x00, 0x06, 0x49, 0x49, 0x29, 0x1E, 

/* character 0x3A (':'): (width=6, offset=156) */
0x00, 0x00, 0x6C, 0x6C, 0x00, 0x00, 

/* character 0x3B (';'): (width=6, offset=162) */
0x00, 0x00, 0xEC, 0x6C, 0x00, 0x00, 

/* character 0x3C ('<'): (width=6, offset=168) */
0x00, 0x08, 0x14, 0x22, 0x41, 0x00, 

/* character 0x3D ('='): (width=6, offset=174) */
0x00, 0x24, 0x24, 0x24, 0x24, 0x24, 

/* character 0x3E ('>'): (width=6, offset=180) */
0x00, 0x00, 0x41, 0x22, 0x14, 0x08, 

/* character 0x3F ('?'): (width=6, offset=186) */
0x00, 0x02, 0x01, 0x59, 0x09, 0x06, 

/* character 0x40 ('@'): (width=6, offset=192) */
0x00, 0x3E, 0x41, 0x5D, 0x55, 0x1E, 

/* character 0x41 ('A'): (width=6, offset=198) */
0x00, 0x7E, 0x11, 0x11, 0x11, 0x7E, 

/* character 0x42 ('B'): (width=6, offset=204) */
0x00, 0x7F, 0x49, 0x49, 0x49, 0x36, 

/* character 0x43 ('C'): (width=6, offset=210) */
0x00, 0x3E, 0x41, 0x41, 0x41, 0x22, 

/* character 0x44 ('D'): (width=6, offset=216) */
0x00, 0x7F, 0x41, 0x41, 0x41, 0x3E, 

/* character 0x45 ('E'): (width=6, offset=222) */
0x00, 0x7F, 0x49, 0x49, 0x49, 0x41, 

/* character 0x46 ('F'): (width=6, offset=228) */
0x00, 0x7F, 0x09, 0x09, 0x09, 0x01, 

/* character 0x47 ('G'): (width=6, offset=234) */
0x00, 0x3E, 0x41, 0x49, 0x49, 0x7A, 

/* character 0x48 ('H'): (width=6, offset=240) */
0x00, 0x7F, 0x08, 0x08, 0x08, 0x7F, 

/* character 0x49 ('I'): (width=6, offset=246) */
0x00, 0x00, 0x41, 0x7F, 0x41, 0x00, 

/* character 0x4A ('J'): (width=6, offset=252) */
0x00, 0x30, 0x40, 0x40, 0x40, 0x3F, 

/* character 0x4B ('K'): (width=6, offset=258) */
0x00, 0x7F, 0x08, 0x14, 0x22, 0x41, 

/* character 0x4C ('L'): (width=6, offset=264) */
0x00, 0x7F, 0x40, 0x40, 0x40, 0x40, 

/* character 0x4D ('M'): (width=6, offset=270) */
0x00, 0x7F, 0x02, 0x04, 0x02, 0x7F, 

/* character 0x4E ('N'): (width=6, offset=276) */
0x00, 0x7F, 0x02, 0x04, 0x08, 0x7F, 

/* character 0x4F ('O'): (width=6, offset=282) */
0x00, 0x3E, 0x41, 0x41, 0x41, 0x3E, 

/* character 0x50 ('P'): (width=6, offset=288) */
0x00, 0x7F, 0x09, 0x09, 0x09, 0x06, 

/* character 0x51 ('Q'): (width=6, offset=294) */
0x00, 0x3E, 0x41, 0x51, 0x21, 0x5E, 

/* character 0x52 ('R'): (width=6, offset=300) */
0x00, 0x7F, 0x09, 0x09, 0x19, 0x66, 

/* character 0x53 ('S'): (width=6, offset=306) */
0x00, 0x26, 0x49, 0x49, 0x49, 0x32, 

/* character 0x54 ('T'): (width=6, offset=312) */
0x00, 0x01, 0x01, 0x7F, 0x01, 0x01, 

/* character 0x55 ('U'): (width=6, offset=318) */
0x00, 0x3F, 0x40, 0x40, 0x40, 0x3F, 

/* character 0x56 ('V'): (width=6, offset=324) */
0x00, 0x1F, 0x20, 0x40, 0x20, 0x1F, 

/* character 0x57 ('W'): (width=6, offset=330) */
0x00, 0x3F, 0x40, 0x3C, 0x40, 0x3F, 

/* character 0x58 ('X'): (width=6, offset=336) */
0x00, 0x63, 0x14, 0x08, 0x14, 0x63, 

/* character 0x59 ('Y'): (width=6, offset=342) */
0x00, 0x07, 0x08, 0x70, 0x08, 0x07, 

/* character 0x5A ('Z'): (width=6, offset=348) */
0x00, 0x71, 0x49, 0x45, 0x43, 0x00, 

/* character 0x5B ('['): (width=6, offset=354) */
0x00, 0x00, 0x7F, 0x41, 0x41, 0x00, 

/* character 0x5C ('\'): (width=6, offset=360) */
0x00, 0x02, 0x04, 0x08, 0x10, 0x20, 

/* character 0x5D (']'): (width=6, offset=366) */
0x00, 0x00, 0x41, 0x41, 0x7F, 0x00, 

/* character 0x5E ('^'): (width=6, offset=372) */
0x00, 0x04, 0x02, 0x01, 0x02, 0x04, 

/* character 0x5F ('_'): (width=6, offset=378) */
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 

/* character 0x60 ('`'): (width=6, offset=384) */
0x00, 0x00, 0x03, 0x07, 0x00, 0x00, 

/* character 0x61 ('a'): (width=6, offset=390) */
0x00, 0x20, 0x54, 0x54, 0x54, 0x78, 

/* character 0x62 ('b'): (width=6, offset=396) */
0x00, 0x7F, 0x44, 0x44, 0x44, 0x38, 

/* character 0x63 ('c'): (width=6, offset=402) */
0x00, 0x38, 0x44, 0x44, 0x44, 0x28, 

/* character 0x64 ('d'): (width=6, offset=408) */
0x00, 0x38, 0x44, 0x44, 0x44, 0x7F, 

/* character 0x65 ('e'): (width=6, offset=414) */
0x00, 0x38, 0x54, 0x54, 0x54, 0x08, 

/* character 0x66 ('f'): (width=6, offset=420) */
0x00, 0x08, 0x7E, 0x09, 0x09, 0x00, 

/* character 0x67 ('g'): (width=6, offset=426) */
0x00, 0x18, 0xA4, 0xA4, 0xA4, 0x7C, 

/* character 0x68 ('h'): (width=6, offset=432) */
0x00, 0x7F, 0x04, 0x04, 0x78, 0x00, 

/* character 0x69 ('i'): (width=6, offset=438) */
0x00, 0x00, 0x00, 0x7D, 0x40, 0x00, 

/* character 0x6A ('j'): (width=6, offset=444) */
0x00, 0x40, 0x80, 0x84, 0x7D, 0x00, 

/* character 0x6B ('k'): (width=6, offset=450) */
0x00, 0x7F, 0x10, 0x28, 0x44, 0x00, 

/* character 0x6C ('l'): (width=6, offset=456) */
0x00, 0x00, 0x00, 0x7F, 0x40, 0x00, 

/* character 0x6D ('m'): (width=6, offset=462) */
0x00, 0x7C, 0x04, 0x18, 0x04, 0x78, 

/* character 0x6E ('n'): (width=6, offset=468) */
0x00, 0x7C, 0x04, 0x04, 0x78, 0x00, 

/* character 0x6F ('o'): (width=6, offset=474) */
0x00, 0x38, 0x44, 0x44, 0x44, 0x38, 

/* character 0x70 ('p'): (width=6, offset=480) */
0x00, 0xFC, 0x44, 0x44, 0x44, 0x38, 

/* character 0x71 ('q'): (width=6, offset=486) */
0x00, 0x38, 0x44, 0x44, 0x44, 0xFC, 

/* character 0x72 ('r'): (width=6, offset=492) */
0x00, 0x44, 0x78, 0x44, 0x04, 0x08, 

/* character 0x73 ('s'): (width=6, offset=498) */
0x00, 0x08, 0x54, 0x54, 0x54, 0x20, 

/* character 0x74 ('t'): (width=6, offset=504) */
0x00, 0x04, 0x3E, 0x44, 0x24, 0x00, 

/* character 0x75 ('u'): (width=6, offset=510) */
0x00, 0x3C, 0x40, 0x20, 0x7C, 0x00, 

/* character 0x76 ('v'): (width=6, offset=516) */
0x00, 0x1C, 0x20, 0x40, 0x20, 0x1C, 

/* character 0x77 ('w'): (width=6, offset=522) */
0x00, 0x3C, 0x60, 0x30, 0x60, 0x3C, 

/* character 0x78 ('x'): (width=6, offset=528) */
0x00, 0x6C, 0x10, 0x10, 0x6C, 0x00, 

/* character 0x79 ('y'): (width=6, offset=534) */
0x00, 0x9C, 0xA0, 0x60, 0x3C, 0x00, 

/* character 0x7A ('z'): (width=6, offset=540) */
0x00, 0x64, 0x54, 0x54, 0x4C, 0x00, 

/* character 0x7B ('{'): (width=6, offset=546) */
0x00, 0x08, 0x3E, 0x41, 0x41, 0x00, 

/* character 0x7C ('|'): (width=6, offset=552) */
0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 

/* character 0x7D ('}'): (width=6, offset=558) */
0x00, 0x00, 0x41, 0x41, 0x3E, 0x08, 

/* character 0x7E ('~'): (width=6, offset=564) */
/*0x00, 0x02, 0x01, 0x02, 0x01, 0x00, */
0x40, 0x40, 0x0, 0x0, 0x40, 0x40,

/* character 0x7F (''): (width=6, offset=570) */
0x00, 0x3C, 0x26, 0x23, 0x26, 0x3C,

};
