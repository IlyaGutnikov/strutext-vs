/** Copyright &copy; 2013, Vladimir Lapshin.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 * \brief  UNNICODE32 code tables for single byte encodes.
 * \author Vladimir Lapshin.
 */

#include "encode/char_unicode32_decoder.h"

namespace strutext { namespace encode {

const uint32_t Cp1251Decoder::table_[256] = {
  0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007,
  0x00000008, 0x00000009, 0x0000000a, 0x0000000b, 0x0000000c, 0x0000000d, 0x0000000e, 0x0000000f,
  0x00000010, 0x00000011, 0x00000012, 0x00000013, 0x00000014, 0x00000015, 0x00000016, 0x00000017,
  0x00000018, 0x00000019, 0x0000001a, 0x0000001b, 0x0000001c, 0x0000001d, 0x0000001e, 0x0000001f,
  0x00000020, 0x00000021, 0x00000022, 0x00000023, 0x00000024, 0x00000025, 0x00000026, 0x00000027,
  0x00000028, 0x00000029, 0x0000002a, 0x0000002b, 0x0000002c, 0x0000002d, 0x0000002e, 0x0000002f,
  0x00000030, 0x00000031, 0x00000032, 0x00000033, 0x00000034, 0x00000035, 0x00000036, 0x00000037,
  0x00000038, 0x00000039, 0x0000003a, 0x0000003b, 0x0000003c, 0x0000003d, 0x0000003e, 0x0000003f,
  0x00000040, 0x00000041, 0x00000042, 0x00000043, 0x00000044, 0x00000045, 0x00000046, 0x00000047,
  0x00000048, 0x00000049, 0x0000004a, 0x0000004b, 0x0000004c, 0x0000004d, 0x0000004e, 0x0000004f,
  0x00000050, 0x00000051, 0x00000052, 0x00000053, 0x00000054, 0x00000055, 0x00000056, 0x00000057,
  0x00000058, 0x00000059, 0x0000005a, 0x0000005b, 0x0000005c, 0x0000005d, 0x0000005e, 0x0000005f,
  0x00000060, 0x00000061, 0x00000062, 0x00000063, 0x00000064, 0x00000065, 0x00000066, 0x00000067,
  0x00000068, 0x00000069, 0x0000006a, 0x0000006b, 0x0000006c, 0x0000006d, 0x0000006e, 0x0000006f,
  0x00000070, 0x00000071, 0x00000072, 0x00000073, 0x00000074, 0x00000075, 0x00000076, 0x00000077,
  0x00000078, 0x00000079, 0x0000007a, 0x0000007b, 0x0000007c, 0x0000007d, 0x0000007e, 0x0000007f,
  0x00000402, 0x00000403, 0x0000201a, 0x00000453, 0x0000201e, 0x00002026, 0x00002020, 0x00002021,
  0x000020ac, 0x00002030, 0x00000409, 0x00002039, 0x0000040a, 0x0000040c, 0x0000040b, 0x0000040f,
  0x00000452, 0x00002018, 0x00002019, 0x0000201c, 0x0000201d, 0x00002022, 0x00002013, 0x00002014,
  0x00000000, 0x00002122, 0x00000459, 0x0000203a, 0x0000045a, 0x0000045c, 0x0000045b, 0x0000045f,
  0x000000a0, 0x0000040e, 0x0000045e, 0x00000408, 0x000000a4, 0x00000490, 0x000000a6, 0x000000a7,
  0x00000401, 0x000000a9, 0x00000404, 0x000000ab, 0x000000ac, 0x000000ad, 0x000000ae, 0x00000407,
  0x000000b0, 0x000000b1, 0x00000406, 0x00000456, 0x00000491, 0x000000b5, 0x000000b6, 0x000000b7,
  0x00000451, 0x00002116, 0x00000454, 0x000000bb, 0x00000458, 0x00000405, 0x00000455, 0x00000457,
  0x00000410, 0x00000411, 0x00000412, 0x00000413, 0x00000414, 0x00000415, 0x00000416, 0x00000417,
  0x00000418, 0x00000419, 0x0000041a, 0x0000041b, 0x0000041c, 0x0000041d, 0x0000041e, 0x0000041f,
  0x00000420, 0x00000421, 0x00000422, 0x00000423, 0x00000424, 0x00000425, 0x00000426, 0x00000427,
  0x00000428, 0x00000429, 0x0000042a, 0x0000042b, 0x0000042c, 0x0000042d, 0x0000042e, 0x0000042f,
  0x00000430, 0x00000431, 0x00000432, 0x00000433, 0x00000434, 0x00000435, 0x00000436, 0x00000437,
  0x00000438, 0x00000439, 0x0000043a, 0x0000043b, 0x0000043c, 0x0000043d, 0x0000043e, 0x0000043f,
  0x00000440, 0x00000441, 0x00000442, 0x00000443, 0x00000444, 0x00000445, 0x00000446, 0x00000447,
  0x00000448, 0x00000449, 0x0000044a, 0x0000044b, 0x0000044c, 0x0000044d, 0x0000044e, 0x0000044f
};

const uint32_t Cp1252Decoder::table_[256] = {
  0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007,
  0x00000008, 0x00000009, 0x0000000a, 0x0000000b, 0x0000000c, 0x0000000d, 0x0000000e, 0x0000000f,
  0x00000010, 0x00000011, 0x00000012, 0x00000013, 0x00000014, 0x00000015, 0x00000016, 0x00000017,
  0x00000018, 0x00000019, 0x0000001a, 0x0000001b, 0x0000001c, 0x0000001d, 0x0000001e, 0x0000001f,
  0x00000020, 0x00000021, 0x00000022, 0x00000023, 0x00000024, 0x00000025, 0x00000026, 0x00000027,
  0x00000028, 0x00000029, 0x0000002a, 0x0000002b, 0x0000002c, 0x0000002d, 0x0000002e, 0x0000002f,
  0x00000030, 0x00000031, 0x00000032, 0x00000033, 0x00000034, 0x00000035, 0x00000036, 0x00000037,
  0x00000038, 0x00000039, 0x0000003a, 0x0000003b, 0x0000003c, 0x0000003d, 0x0000003e, 0x0000003f,
  0x00000040, 0x00000041, 0x00000042, 0x00000043, 0x00000044, 0x00000045, 0x00000046, 0x00000047,
  0x00000048, 0x00000049, 0x0000004a, 0x0000004b, 0x0000004c, 0x0000004d, 0x0000004e, 0x0000004f,
  0x00000050, 0x00000051, 0x00000052, 0x00000053, 0x00000054, 0x00000055, 0x00000056, 0x00000057,
  0x00000058, 0x00000059, 0x0000005a, 0x0000005b, 0x0000005c, 0x0000005d, 0x0000005e, 0x0000005f,
  0x00000060, 0x00000061, 0x00000062, 0x00000063, 0x00000064, 0x00000065, 0x00000066, 0x00000067,
  0x00000068, 0x00000069, 0x0000006a, 0x0000006b, 0x0000006c, 0x0000006d, 0x0000006e, 0x0000006f,
  0x00000070, 0x00000071, 0x00000072, 0x00000073, 0x00000074, 0x00000075, 0x00000076, 0x00000077,
  0x00000078, 0x00000079, 0x0000007a, 0x0000007b, 0x0000007c, 0x0000007d, 0x0000007e, 0x0000007f,
  0x000020ac, 0x00000000, 0x0000201a, 0x00000192, 0x0000201e, 0x00002026, 0x00002020, 0x00002021,
  0x000002c6, 0x00002030, 0x00000160, 0x00002039, 0x00000152, 0x00000000, 0x0000017d, 0x00000000,
  0x00000000, 0x00002018, 0x00002019, 0x0000201c, 0x0000201d, 0x00002022, 0x00002013, 0x00002014,
  0x000002dc, 0x00002122, 0x00000161, 0x0000203a, 0x00000153, 0x00000000, 0x0000017e, 0x00000178,
  0x000000a0, 0x000000a1, 0x000000a2, 0x000000a3, 0x000000a4, 0x000000a5, 0x000000a6, 0x000000a7,
  0x000000a8, 0x000000a9, 0x000000aa, 0x000000ab, 0x000000ac, 0x000000ad, 0x000000ae, 0x000000af,
  0x000000b0, 0x000000b1, 0x000000b2, 0x000000b3, 0x000000b4, 0x000000b5, 0x000000b6, 0x000000b7,
  0x000000b8, 0x000000b9, 0x000000ba, 0x000000bb, 0x000000bc, 0x000000bd, 0x000000be, 0x000000bf,
  0x000000c0, 0x000000c1, 0x000000c2, 0x000000c3, 0x000000c4, 0x000000c5, 0x000000c6, 0x000000c7,
  0x000000c8, 0x000000c9, 0x000000ca, 0x000000cb, 0x000000cc, 0x000000cd, 0x000000ce, 0x000000cf,
  0x000000d0, 0x000000d1, 0x000000d2, 0x000000d3, 0x000000d4, 0x000000d5, 0x000000d6, 0x000000d7,
  0x000000d8, 0x000000d9, 0x000000da, 0x000000db, 0x000000dc, 0x000000dd, 0x000000de, 0x000000df,
  0x000000e0, 0x000000e1, 0x000000e2, 0x000000e3, 0x000000e4, 0x000000e5, 0x000000e6, 0x000000e7,
  0x000000e8, 0x000000e9, 0x000000ea, 0x000000eb, 0x000000ec, 0x000000ed, 0x000000ee, 0x000000ef,
  0x000000f0, 0x000000f1, 0x000000f2, 0x000000f3, 0x000000f4, 0x000000f5, 0x000000f6, 0x000000f7,
  0x000000f8, 0x000000f9, 0x000000fa, 0x000000fb, 0x000000fc, 0x000000fd, 0x000000fe, 0x000000ff
};

const uint32_t Cp1253Decoder::table_[256] = {
  0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007,
  0x00000008, 0x00000009, 0x0000000a, 0x0000000b, 0x0000000c, 0x0000000d, 0x0000000e, 0x0000000f,
  0x00000010, 0x00000011, 0x00000012, 0x00000013, 0x00000014, 0x00000015, 0x00000016, 0x00000017,
  0x00000018, 0x00000019, 0x0000001a, 0x0000001b, 0x0000001c, 0x0000001d, 0x0000001e, 0x0000001f,
  0x00000020, 0x00000021, 0x00000022, 0x00000023, 0x00000024, 0x00000025, 0x00000026, 0x00000027,
  0x00000028, 0x00000029, 0x0000002a, 0x0000002b, 0x0000002c, 0x0000002d, 0x0000002e, 0x0000002f,
  0x00000030, 0x00000031, 0x00000032, 0x00000033, 0x00000034, 0x00000035, 0x00000036, 0x00000037,
  0x00000038, 0x00000039, 0x0000003a, 0x0000003b, 0x0000003c, 0x0000003d, 0x0000003e, 0x0000003f,
  0x00000040, 0x00000041, 0x00000042, 0x00000043, 0x00000044, 0x00000045, 0x00000046, 0x00000047,
  0x00000048, 0x00000049, 0x0000004a, 0x0000004b, 0x0000004c, 0x0000004d, 0x0000004e, 0x0000004f,
  0x00000050, 0x00000051, 0x00000052, 0x00000053, 0x00000054, 0x00000055, 0x00000056, 0x00000057,
  0x00000058, 0x00000059, 0x0000005a, 0x0000005b, 0x0000005c, 0x0000005d, 0x0000005e, 0x0000005f,
  0x00000060, 0x00000061, 0x00000062, 0x00000063, 0x00000064, 0x00000065, 0x00000066, 0x00000067,
  0x00000068, 0x00000069, 0x0000006a, 0x0000006b, 0x0000006c, 0x0000006d, 0x0000006e, 0x0000006f,
  0x00000070, 0x00000071, 0x00000072, 0x00000073, 0x00000074, 0x00000075, 0x00000076, 0x00000077,
  0x00000078, 0x00000079, 0x0000007a, 0x0000007b, 0x0000007c, 0x0000007d, 0x0000007e, 0x0000007f,
  0x000020ac, 0x00000000, 0x0000201a, 0x00000192, 0x0000201e, 0x00002026, 0x00002020, 0x00002021,
  0x00000000, 0x00002030, 0x00000000, 0x00002039, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x00000000, 0x00002018, 0x00002019, 0x0000201c, 0x0000201d, 0x00002022, 0x00002013, 0x00002014,
  0x00000000, 0x00002122, 0x00000000, 0x0000203a, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
  0x000000a0, 0x00000385, 0x00000386, 0x000000a3, 0x000000a4, 0x000000a5, 0x000000a6, 0x000000a7,
  0x000000a8, 0x000000a9, 0x00000000, 0x000000ab, 0x000000ac, 0x000000ad, 0x000000ae, 0x00002015,
  0x000000b0, 0x000000b1, 0x000000b2, 0x000000b3, 0x00000384, 0x000000b5, 0x000000b6, 0x000000b7,
  0x00000388, 0x00000389, 0x0000038a, 0x000000bb, 0x0000038c, 0x000000bd, 0x0000038e, 0x0000038f,
  0x00000390, 0x00000391, 0x00000392, 0x00000393, 0x00000394, 0x00000395, 0x00000396, 0x00000397,
  0x00000398, 0x00000399, 0x0000039a, 0x0000039b, 0x0000039c, 0x0000039d, 0x0000039e, 0x0000039f,
  0x000003a0, 0x000003a1, 0x00000000, 0x000003a3, 0x000003a4, 0x000003a5, 0x000003a6, 0x000003a7,
  0x000003a8, 0x000003a9, 0x000003aa, 0x000003ab, 0x000003ac, 0x000003ad, 0x000003ae, 0x000003af,
  0x000003b0, 0x000003b1, 0x000003b2, 0x000003b3, 0x000003b4, 0x000003b5, 0x000003b6, 0x000003b7,
  0x000003b8, 0x000003b9, 0x000003ba, 0x000003bb, 0x000003bc, 0x000003bd, 0x000003be, 0x000003bf,
  0x000003c0, 0x000003c1, 0x000003c2, 0x000003c3, 0x000003c4, 0x000003c5, 0x000003c6, 0x000003c7,
  0x000003c8, 0x000003c9, 0x000003ca, 0x000003cb, 0x000003cc, 0x000003cd, 0x000003ce, 0x00000000
};

const uint32_t Cp866Decoder::table_[256] = {
  0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007,
  0x00000008, 0x00000009, 0x0000000a, 0x0000000b, 0x0000000c, 0x0000000d, 0x0000000e, 0x0000000f,
  0x00000010, 0x00000011, 0x00000012, 0x00000013, 0x00000014, 0x00000015, 0x00000016, 0x00000017,
  0x00000018, 0x00000019, 0x0000001a, 0x0000001b, 0x0000001c, 0x0000001d, 0x0000001e, 0x0000001f,
  0x00000020, 0x00000021, 0x00000022, 0x00000023, 0x00000024, 0x00000025, 0x00000026, 0x00000027,
  0x00000028, 0x00000029, 0x0000002a, 0x0000002b, 0x0000002c, 0x0000002d, 0x0000002e, 0x0000002f,
  0x00000030, 0x00000031, 0x00000032, 0x00000033, 0x00000034, 0x00000035, 0x00000036, 0x00000037,
  0x00000038, 0x00000039, 0x0000003a, 0x0000003b, 0x0000003c, 0x0000003d, 0x0000003e, 0x0000003f,
  0x00000040, 0x00000041, 0x00000042, 0x00000043, 0x00000044, 0x00000045, 0x00000046, 0x00000047,
  0x00000048, 0x00000049, 0x0000004a, 0x0000004b, 0x0000004c, 0x0000004d, 0x0000004e, 0x0000004f,
  0x00000050, 0x00000051, 0x00000052, 0x00000053, 0x00000054, 0x00000055, 0x00000056, 0x00000057,
  0x00000058, 0x00000059, 0x0000005a, 0x0000005b, 0x0000005c, 0x0000005d, 0x0000005e, 0x0000005f,
  0x00000060, 0x00000061, 0x00000062, 0x00000063, 0x00000064, 0x00000065, 0x00000066, 0x00000067,
  0x00000068, 0x00000069, 0x0000006a, 0x0000006b, 0x0000006c, 0x0000006d, 0x0000006e, 0x0000006f,
  0x00000070, 0x00000071, 0x00000072, 0x00000073, 0x00000074, 0x00000075, 0x00000076, 0x00000077,
  0x00000078, 0x00000079, 0x0000007a, 0x0000007b, 0x0000007c, 0x0000007d, 0x0000007e, 0x0000007f,
  0x00000410, 0x00000411, 0x00000412, 0x00000413, 0x00000414, 0x00000415, 0x00000416, 0x00000417,
  0x00000418, 0x00000419, 0x0000041a, 0x0000041b, 0x0000041c, 0x0000041d, 0x0000041e, 0x0000041f,
  0x00000420, 0x00000421, 0x00000422, 0x00000423, 0x00000424, 0x00000425, 0x00000426, 0x00000427,
  0x00000428, 0x00000429, 0x0000042a, 0x0000042b, 0x0000042c, 0x0000042d, 0x0000042e, 0x0000042f,
  0x00000430, 0x00000431, 0x00000432, 0x00000433, 0x00000434, 0x00000435, 0x00000436, 0x00000437,
  0x00000438, 0x00000439, 0x0000043a, 0x0000043b, 0x0000043c, 0x0000043d, 0x0000043e, 0x0000043f,
  0x00002591, 0x00002592, 0x00002593, 0x00002502, 0x00002524, 0x00002561, 0x00002562, 0x00002556,
  0x00002555, 0x00002563, 0x00002551, 0x00002557, 0x0000255d, 0x0000255c, 0x0000255b, 0x00002510,
  0x00002514, 0x00002534, 0x0000252c, 0x0000251c, 0x00002500, 0x0000253c, 0x0000255e, 0x0000255f,
  0x0000255a, 0x00002554, 0x00002569, 0x00002566, 0x00002560, 0x00002550, 0x0000256c, 0x00002567,
  0x00002568, 0x00002564, 0x00002565, 0x00002559, 0x00002558, 0x00002552, 0x00002553, 0x0000256b,
  0x0000256a, 0x00002518, 0x0000250c, 0x00002588, 0x00002584, 0x0000258c, 0x00002590, 0x00002580,
  0x00000440, 0x00000441, 0x00000442, 0x00000443, 0x00000444, 0x00000445, 0x00000446, 0x00000447,
  0x00000448, 0x00000449, 0x0000044a, 0x0000044b, 0x0000044c, 0x0000044d, 0x0000044e, 0x0000044f,
  0x00000401, 0x00000451, 0x00000404, 0x00000454, 0x00000407, 0x00000457, 0x0000040e, 0x0000045e,
  0x000000b0, 0x00002219, 0x000000b7, 0x0000221a, 0x00002116, 0x000000a4, 0x000025a0, 0x000000a0
};

const uint32_t Iso88591Decoder::table_[256] = {
  0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007,
  0x00000008, 0x00000009, 0x0000000a, 0x0000000b, 0x0000000c, 0x0000000d, 0x0000000e, 0x0000000f,
  0x00000010, 0x00000011, 0x00000012, 0x00000013, 0x00000014, 0x00000015, 0x00000016, 0x00000017,
  0x00000018, 0x00000019, 0x0000001a, 0x0000001b, 0x0000001c, 0x0000001d, 0x0000001e, 0x0000001f,
  0x00000020, 0x00000021, 0x00000022, 0x00000023, 0x00000024, 0x00000025, 0x00000026, 0x00000027,
  0x00000028, 0x00000029, 0x0000002a, 0x0000002b, 0x0000002c, 0x0000002d, 0x0000002e, 0x0000002f,
  0x00000030, 0x00000031, 0x00000032, 0x00000033, 0x00000034, 0x00000035, 0x00000036, 0x00000037,
  0x00000038, 0x00000039, 0x0000003a, 0x0000003b, 0x0000003c, 0x0000003d, 0x0000003e, 0x0000003f,
  0x00000040, 0x00000041, 0x00000042, 0x00000043, 0x00000044, 0x00000045, 0x00000046, 0x00000047,
  0x00000048, 0x00000049, 0x0000004a, 0x0000004b, 0x0000004c, 0x0000004d, 0x0000004e, 0x0000004f,
  0x00000050, 0x00000051, 0x00000052, 0x00000053, 0x00000054, 0x00000055, 0x00000056, 0x00000057,
  0x00000058, 0x00000059, 0x0000005a, 0x0000005b, 0x0000005c, 0x0000005d, 0x0000005e, 0x0000005f,
  0x00000060, 0x00000061, 0x00000062, 0x00000063, 0x00000064, 0x00000065, 0x00000066, 0x00000067,
  0x00000068, 0x00000069, 0x0000006a, 0x0000006b, 0x0000006c, 0x0000006d, 0x0000006e, 0x0000006f,
  0x00000070, 0x00000071, 0x00000072, 0x00000073, 0x00000074, 0x00000075, 0x00000076, 0x00000077,
  0x00000078, 0x00000079, 0x0000007a, 0x0000007b, 0x0000007c, 0x0000007d, 0x0000007e, 0x0000007f,
  0x00000080, 0x00000081, 0x00000082, 0x00000083, 0x00000084, 0x00000085, 0x00000086, 0x00000087,
  0x00000088, 0x00000089, 0x0000008a, 0x0000008b, 0x0000008c, 0x0000008d, 0x0000008e, 0x0000008f,
  0x00000090, 0x00000091, 0x00000092, 0x00000093, 0x00000094, 0x00000095, 0x00000096, 0x00000097,
  0x00000098, 0x00000099, 0x0000009a, 0x0000009b, 0x0000009c, 0x0000009d, 0x0000009e, 0x0000009f,
  0x000000a0, 0x000000a1, 0x000000a2, 0x000000a3, 0x000000a4, 0x000000a5, 0x000000a6, 0x000000a7,
  0x000000a8, 0x000000a9, 0x000000aa, 0x000000ab, 0x000000ac, 0x000000ad, 0x000000ae, 0x000000af,
  0x000000b0, 0x000000b1, 0x000000b2, 0x000000b3, 0x000000b4, 0x000000b5, 0x000000b6, 0x000000b7,
  0x000000b8, 0x000000b9, 0x000000ba, 0x000000bb, 0x000000bc, 0x000000bd, 0x000000be, 0x000000bf,
  0x000000c0, 0x000000c1, 0x000000c2, 0x000000c3, 0x000000c4, 0x000000c5, 0x000000c6, 0x000000c7,
  0x000000c8, 0x000000c9, 0x000000ca, 0x000000cb, 0x000000cc, 0x000000cd, 0x000000ce, 0x000000cf,
  0x000000d0, 0x000000d1, 0x000000d2, 0x000000d3, 0x000000d4, 0x000000d5, 0x000000d6, 0x000000d7,
  0x000000d8, 0x000000d9, 0x000000da, 0x000000db, 0x000000dc, 0x000000dd, 0x000000de, 0x000000df,
  0x000000e0, 0x000000e1, 0x000000e2, 0x000000e3, 0x000000e4, 0x000000e5, 0x000000e6, 0x000000e7,
  0x000000e8, 0x000000e9, 0x000000ea, 0x000000eb, 0x000000ec, 0x000000ed, 0x000000ee, 0x000000ef,
  0x000000f0, 0x000000f1, 0x000000f2, 0x000000f3, 0x000000f4, 0x000000f5, 0x000000f6, 0x000000f7,
  0x000000f8, 0x000000f9, 0x000000fa, 0x000000fb, 0x000000fc, 0x000000fd, 0x000000fe, 0x000000ff
};

const uint32_t Koi8rDecoder::table_[256] = {
  0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007,
  0x00000008, 0x00000009, 0x0000000a, 0x0000000b, 0x0000000c, 0x0000000d, 0x0000000e, 0x0000000f,
  0x00000010, 0x00000011, 0x00000012, 0x00000013, 0x00000014, 0x00000015, 0x00000016, 0x00000017,
  0x00000018, 0x00000019, 0x0000001a, 0x0000001b, 0x0000001c, 0x0000001d, 0x0000001e, 0x0000001f,
  0x00000020, 0x00000021, 0x00000022, 0x00000023, 0x00000024, 0x00000025, 0x00000026, 0x00000027,
  0x00000028, 0x00000029, 0x0000002a, 0x0000002b, 0x0000002c, 0x0000002d, 0x0000002e, 0x0000002f,
  0x00000030, 0x00000031, 0x00000032, 0x00000033, 0x00000034, 0x00000035, 0x00000036, 0x00000037,
  0x00000038, 0x00000039, 0x0000003a, 0x0000003b, 0x0000003c, 0x0000003d, 0x0000003e, 0x0000003f,
  0x00000040, 0x00000041, 0x00000042, 0x00000043, 0x00000044, 0x00000045, 0x00000046, 0x00000047,
  0x00000048, 0x00000049, 0x0000004a, 0x0000004b, 0x0000004c, 0x0000004d, 0x0000004e, 0x0000004f,
  0x00000050, 0x00000051, 0x00000052, 0x00000053, 0x00000054, 0x00000055, 0x00000056, 0x00000057,
  0x00000058, 0x00000059, 0x0000005a, 0x0000005b, 0x0000005c, 0x0000005d, 0x0000005e, 0x0000005f,
  0x00000060, 0x00000061, 0x00000062, 0x00000063, 0x00000064, 0x00000065, 0x00000066, 0x00000067,
  0x00000068, 0x00000069, 0x0000006a, 0x0000006b, 0x0000006c, 0x0000006d, 0x0000006e, 0x0000006f,
  0x00000070, 0x00000071, 0x00000072, 0x00000073, 0x00000074, 0x00000075, 0x00000076, 0x00000077,
  0x00000078, 0x00000079, 0x0000007a, 0x0000007b, 0x0000007c, 0x0000007d, 0x0000007e, 0x0000007f,
  0x00002500, 0x00002502, 0x0000250c, 0x00002510, 0x00002514, 0x00002518, 0x0000251c, 0x00002524,
  0x0000252c, 0x00002534, 0x0000253c, 0x00002580, 0x00002584, 0x00002588, 0x0000258c, 0x00002590,
  0x00002591, 0x00002592, 0x00002593, 0x00002320, 0x000025a0, 0x00002219, 0x0000221a, 0x00002248,
  0x00002264, 0x00002265, 0x000000a0, 0x00002321, 0x000000b0, 0x000000b2, 0x000000b7, 0x000000f7,
  0x00002550, 0x00002551, 0x00002552, 0x00000451, 0x00002553, 0x00002554, 0x00002555, 0x00002556,
  0x00002557, 0x00002558, 0x00002559, 0x0000255a, 0x0000255b, 0x0000255c, 0x0000255d, 0x0000255e,
  0x0000255f, 0x00002560, 0x00002561, 0x00000401, 0x00002562, 0x00002563, 0x00002564, 0x00002565,
  0x00002566, 0x00002567, 0x00002568, 0x00002569, 0x0000256a, 0x0000256b, 0x0000256c, 0x000000a9,
  0x0000044e, 0x00000430, 0x00000431, 0x00000446, 0x00000434, 0x00000435, 0x00000444, 0x00000433,
  0x00000445, 0x00000438, 0x00000439, 0x0000043a, 0x0000043b, 0x0000043c, 0x0000043d, 0x0000043e,
  0x0000043f, 0x0000044f, 0x00000440, 0x00000441, 0x00000442, 0x00000443, 0x00000436, 0x00000432,
  0x0000044c, 0x0000044b, 0x00000437, 0x00000448, 0x0000044d, 0x00000449, 0x00000447, 0x0000044a,
  0x0000042e, 0x00000410, 0x00000411, 0x00000426, 0x00000414, 0x00000415, 0x00000424, 0x00000413,
  0x00000425, 0x00000418, 0x00000419, 0x0000041a, 0x0000041b, 0x0000041c, 0x0000041d, 0x0000041e,
  0x0000041f, 0x0000042f, 0x00000420, 0x00000421, 0x00000422, 0x00000423, 0x00000416, 0x00000412,
  0x0000042c, 0x0000042b, 0x00000417, 0x00000428, 0x0000042d, 0x00000429, 0x00000427, 0x0000042a
};

const uint32_t Koi8ruDecoder::table_[256] = {
  0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007,
  0x00000008, 0x00000009, 0x0000000a, 0x0000000b, 0x0000000c, 0x0000000d, 0x0000000e, 0x0000000f,
  0x00000010, 0x00000011, 0x00000012, 0x00000013, 0x00000014, 0x00000015, 0x00000016, 0x00000017,
  0x00000018, 0x00000019, 0x0000001a, 0x0000001b, 0x0000001c, 0x0000001d, 0x0000001e, 0x0000001f,
  0x00000020, 0x00000021, 0x00000022, 0x00000023, 0x00000024, 0x00000025, 0x00000026, 0x00000027,
  0x00000028, 0x00000029, 0x0000002a, 0x0000002b, 0x0000002c, 0x0000002d, 0x0000002e, 0x0000002f,
  0x00000030, 0x00000031, 0x00000032, 0x00000033, 0x00000034, 0x00000035, 0x00000036, 0x00000037,
  0x00000038, 0x00000039, 0x0000003a, 0x0000003b, 0x0000003c, 0x0000003d, 0x0000003e, 0x0000003f,
  0x00000040, 0x00000041, 0x00000042, 0x00000043, 0x00000044, 0x00000045, 0x00000046, 0x00000047,
  0x00000048, 0x00000049, 0x0000004a, 0x0000004b, 0x0000004c, 0x0000004d, 0x0000004e, 0x0000004f,
  0x00000050, 0x00000051, 0x00000052, 0x00000053, 0x00000054, 0x00000055, 0x00000056, 0x00000057,
  0x00000058, 0x00000059, 0x0000005a, 0x0000005b, 0x0000005c, 0x0000005d, 0x0000005e, 0x0000005f,
  0x00000060, 0x00000061, 0x00000062, 0x00000063, 0x00000064, 0x00000065, 0x00000066, 0x00000067,
  0x00000068, 0x00000069, 0x0000006a, 0x0000006b, 0x0000006c, 0x0000006d, 0x0000006e, 0x0000006f,
  0x00000070, 0x00000071, 0x00000072, 0x00000073, 0x00000074, 0x00000075, 0x00000076, 0x00000077,
  0x00000078, 0x00000079, 0x0000007a, 0x0000007b, 0x0000007c, 0x0000007d, 0x0000007e, 0x0000007f,
  0x00002500, 0x00002502, 0x0000250c, 0x00002510, 0x00002514, 0x00002518, 0x0000251c, 0x00002524,
  0x0000252c, 0x00002534, 0x0000253c, 0x00002580, 0x00002584, 0x00002588, 0x0000258c, 0x00002590,
  0x00002591, 0x00002592, 0x00002593, 0x00002320, 0x000025a0, 0x00002219, 0x0000221a, 0x00002248,
  0x00002264, 0x00002265, 0x000000a0, 0x00002321, 0x000000b0, 0x000000b2, 0x000000b7, 0x000000f7,
  0x00002550, 0x00002551, 0x00002552, 0x00000451, 0x00000454, 0x00002554, 0x00000456, 0x00000457,
  0x00002557, 0x00002558, 0x00002559, 0x0000255a, 0x0000255b, 0x00000491, 0x0000045e, 0x0000255e,
  0x0000255f, 0x00002560, 0x00002561, 0x00000401, 0x00000404, 0x00002563, 0x00000406, 0x00000407,
  0x00002566, 0x00002567, 0x00002568, 0x00002569, 0x0000256a, 0x00000490, 0x0000040e, 0x000000a9,
  0x0000044e, 0x00000430, 0x00000431, 0x00000446, 0x00000434, 0x00000435, 0x00000444, 0x00000433,
  0x00000445, 0x00000438, 0x00000439, 0x0000043a, 0x0000043b, 0x0000043c, 0x0000043d, 0x0000043e,
  0x0000043f, 0x0000044f, 0x00000440, 0x00000441, 0x00000442, 0x00000443, 0x00000436, 0x00000432,
  0x0000044c, 0x0000044b, 0x00000437, 0x00000448, 0x0000044d, 0x00000449, 0x00000447, 0x0000044a,
  0x0000042e, 0x00000410, 0x00000411, 0x00000426, 0x00000414, 0x00000415, 0x00000424, 0x00000413,
  0x00000425, 0x00000418, 0x00000419, 0x0000041a, 0x0000041b, 0x0000041c, 0x0000041d, 0x0000041e,
  0x0000041f, 0x0000042f, 0x00000420, 0x00000421, 0x00000422, 0x00000423, 0x00000416, 0x00000412,
  0x0000042c, 0x0000042b, 0x00000417, 0x00000428, 0x0000042d, 0x00000429, 0x00000427, 0x0000042a
};

const uint32_t Koi8uDecoder::table_[256] = {
  0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007,
  0x00000008, 0x00000009, 0x0000000a, 0x0000000b, 0x0000000c, 0x0000000d, 0x0000000e, 0x0000000f,
  0x00000010, 0x00000011, 0x00000012, 0x00000013, 0x00000014, 0x00000015, 0x00000016, 0x00000017,
  0x00000018, 0x00000019, 0x0000001a, 0x0000001b, 0x0000001c, 0x0000001d, 0x0000001e, 0x0000001f,
  0x00000020, 0x00000021, 0x00000022, 0x00000023, 0x00000024, 0x00000025, 0x00000026, 0x00000027,
  0x00000028, 0x00000029, 0x0000002a, 0x0000002b, 0x0000002c, 0x0000002d, 0x0000002e, 0x0000002f,
  0x00000030, 0x00000031, 0x00000032, 0x00000033, 0x00000034, 0x00000035, 0x00000036, 0x00000037,
  0x00000038, 0x00000039, 0x0000003a, 0x0000003b, 0x0000003c, 0x0000003d, 0x0000003e, 0x0000003f,
  0x00000040, 0x00000041, 0x00000042, 0x00000043, 0x00000044, 0x00000045, 0x00000046, 0x00000047,
  0x00000048, 0x00000049, 0x0000004a, 0x0000004b, 0x0000004c, 0x0000004d, 0x0000004e, 0x0000004f,
  0x00000050, 0x00000051, 0x00000052, 0x00000053, 0x00000054, 0x00000055, 0x00000056, 0x00000057,
  0x00000058, 0x00000059, 0x0000005a, 0x0000005b, 0x0000005c, 0x0000005d, 0x0000005e, 0x0000005f,
  0x00000060, 0x00000061, 0x00000062, 0x00000063, 0x00000064, 0x00000065, 0x00000066, 0x00000067,
  0x00000068, 0x00000069, 0x0000006a, 0x0000006b, 0x0000006c, 0x0000006d, 0x0000006e, 0x0000006f,
  0x00000070, 0x00000071, 0x00000072, 0x00000073, 0x00000074, 0x00000075, 0x00000076, 0x00000077,
  0x00000078, 0x00000079, 0x0000007a, 0x0000007b, 0x0000007c, 0x0000007d, 0x0000007e, 0x0000007f,
  0x00002500, 0x00002502, 0x0000250c, 0x00002510, 0x00002514, 0x00002518, 0x0000251c, 0x00002524,
  0x0000252c, 0x00002534, 0x0000253c, 0x00002580, 0x00002584, 0x00002588, 0x0000258c, 0x00002590,
  0x00002591, 0x00002592, 0x00002593, 0x00002320, 0x000025a0, 0x00002219, 0x0000221a, 0x00002248,
  0x00002264, 0x00002265, 0x000000a0, 0x00002321, 0x000000b0, 0x000000b2, 0x000000b7, 0x000000f7,
  0x00002550, 0x00002551, 0x00002552, 0x00000451, 0x00000454, 0x00002554, 0x00000456, 0x00000457,
  0x00002557, 0x00002558, 0x00002559, 0x0000255a, 0x0000255b, 0x00000491, 0x0000255d, 0x0000255e,
  0x0000255f, 0x00002560, 0x00002561, 0x00000401, 0x00000404, 0x00002563, 0x00000406, 0x00000407,
  0x00002566, 0x00002567, 0x00002568, 0x00002569, 0x0000256a, 0x00000490, 0x0000256c, 0x000000a9,
  0x0000044e, 0x00000430, 0x00000431, 0x00000446, 0x00000434, 0x00000435, 0x00000444, 0x00000433,
  0x00000445, 0x00000438, 0x00000439, 0x0000043a, 0x0000043b, 0x0000043c, 0x0000043d, 0x0000043e,
  0x0000043f, 0x0000044f, 0x00000440, 0x00000441, 0x00000442, 0x00000443, 0x00000436, 0x00000432,
  0x0000044c, 0x0000044b, 0x00000437, 0x00000448, 0x0000044d, 0x00000449, 0x00000447, 0x0000044a,
  0x0000042e, 0x00000410, 0x00000411, 0x00000426, 0x00000414, 0x00000415, 0x00000424, 0x00000413,
  0x00000425, 0x00000418, 0x00000419, 0x0000041a, 0x0000041b, 0x0000041c, 0x0000041d, 0x0000041e,
  0x0000041f, 0x0000042f, 0x00000420, 0x00000421, 0x00000422, 0x00000423, 0x00000416, 0x00000412,
  0x0000042c, 0x0000042b, 0x00000417, 0x00000428, 0x0000042d, 0x00000429, 0x00000427, 0x0000042a
};

const uint32_t MacCyrillicDecoder::table_[256] = {
  0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007,
  0x00000008, 0x00000009, 0x0000000a, 0x0000000b, 0x0000000c, 0x0000000d, 0x0000000e, 0x0000000f,
  0x00000010, 0x00000011, 0x00000012, 0x00000013, 0x00000014, 0x00000015, 0x00000016, 0x00000017,
  0x00000018, 0x00000019, 0x0000001a, 0x0000001b, 0x0000001c, 0x0000001d, 0x0000001e, 0x0000001f,
  0x00000020, 0x00000021, 0x00000022, 0x00000023, 0x00000024, 0x00000025, 0x00000026, 0x00000027,
  0x00000028, 0x00000029, 0x0000002a, 0x0000002b, 0x0000002c, 0x0000002d, 0x0000002e, 0x0000002f,
  0x00000030, 0x00000031, 0x00000032, 0x00000033, 0x00000034, 0x00000035, 0x00000036, 0x00000037,
  0x00000038, 0x00000039, 0x0000003a, 0x0000003b, 0x0000003c, 0x0000003d, 0x0000003e, 0x0000003f,
  0x00000040, 0x00000041, 0x00000042, 0x00000043, 0x00000044, 0x00000045, 0x00000046, 0x00000047,
  0x00000048, 0x00000049, 0x0000004a, 0x0000004b, 0x0000004c, 0x0000004d, 0x0000004e, 0x0000004f,
  0x00000050, 0x00000051, 0x00000052, 0x00000053, 0x00000054, 0x00000055, 0x00000056, 0x00000057,
  0x00000058, 0x00000059, 0x0000005a, 0x0000005b, 0x0000005c, 0x0000005d, 0x0000005e, 0x0000005f,
  0x00000060, 0x00000061, 0x00000062, 0x00000063, 0x00000064, 0x00000065, 0x00000066, 0x00000067,
  0x00000068, 0x00000069, 0x0000006a, 0x0000006b, 0x0000006c, 0x0000006d, 0x0000006e, 0x0000006f,
  0x00000070, 0x00000071, 0x00000072, 0x00000073, 0x00000074, 0x00000075, 0x00000076, 0x00000077,
  0x00000078, 0x00000079, 0x0000007a, 0x0000007b, 0x0000007c, 0x0000007d, 0x0000007e, 0x0000007f,
  0x00000410, 0x00000411, 0x00000412, 0x00000413, 0x00000414, 0x00000415, 0x00000416, 0x00000417,
  0x00000418, 0x00000419, 0x0000041a, 0x0000041b, 0x0000041c, 0x0000041d, 0x0000041e, 0x0000041f,
  0x00000420, 0x00000421, 0x00000422, 0x00000423, 0x00000424, 0x00000425, 0x00000426, 0x00000427,
  0x00000428, 0x00000429, 0x0000042a, 0x0000042b, 0x0000042c, 0x0000042d, 0x0000042e, 0x0000042f,
  0x00002020, 0x000000b0, 0x000000a2, 0x000000a3, 0x000000a7, 0x00002022, 0x000000b6, 0x00000406,
  0x000000ae, 0x000000a9, 0x00002122, 0x00000402, 0x00000452, 0x00002260, 0x00000403, 0x00000453,
  0x0000221e, 0x000000b1, 0x00002264, 0x00002265, 0x00000456, 0x000000b5, 0x00002202, 0x00000408,
  0x00000404, 0x00000454, 0x00000407, 0x00000457, 0x00000409, 0x00000459, 0x0000040a, 0x0000045a,
  0x00000458, 0x00000405, 0x000000ac, 0x0000221a, 0x00000192, 0x00002248, 0x00002206, 0x000000ab,
  0x000000bb, 0x00002026, 0x000000a0, 0x0000040b, 0x0000045b, 0x0000040c, 0x0000045c, 0x00000455,
  0x00002013, 0x00002014, 0x0000201c, 0x0000201d, 0x00002018, 0x00002019, 0x000000f7, 0x0000201e,
  0x0000040e, 0x0000045e, 0x0000040f, 0x0000045f, 0x00002116, 0x00000401, 0x00000451, 0x0000044f,
  0x00000430, 0x00000431, 0x00000432, 0x00000433, 0x00000434, 0x00000435, 0x00000436, 0x00000437,
  0x00000438, 0x00000439, 0x0000043a, 0x0000043b, 0x0000043c, 0x0000043d, 0x0000043e, 0x0000043f,
  0x00000440, 0x00000441, 0x00000442, 0x00000443, 0x00000444, 0x00000445, 0x00000446, 0x00000447,
  0x00000448, 0x00000449, 0x0000044a, 0x0000044b, 0x0000044c, 0x0000044d, 0x0000044e, 0x000000a4
};

const uint32_t MacUkraineDecoder::table_[256] = {
  0x00000000, 0x00000001, 0x00000002, 0x00000003, 0x00000004, 0x00000005, 0x00000006, 0x00000007,
  0x00000008, 0x00000009, 0x0000000a, 0x0000000b, 0x0000000c, 0x0000000d, 0x0000000e, 0x0000000f,
  0x00000010, 0x00000011, 0x00000012, 0x00000013, 0x00000014, 0x00000015, 0x00000016, 0x00000017,
  0x00000018, 0x00000019, 0x0000001a, 0x0000001b, 0x0000001c, 0x0000001d, 0x0000001e, 0x0000001f,
  0x00000020, 0x00000021, 0x00000022, 0x00000023, 0x00000024, 0x00000025, 0x00000026, 0x00000027,
  0x00000028, 0x00000029, 0x0000002a, 0x0000002b, 0x0000002c, 0x0000002d, 0x0000002e, 0x0000002f,
  0x00000030, 0x00000031, 0x00000032, 0x00000033, 0x00000034, 0x00000035, 0x00000036, 0x00000037,
  0x00000038, 0x00000039, 0x0000003a, 0x0000003b, 0x0000003c, 0x0000003d, 0x0000003e, 0x0000003f,
  0x00000040, 0x00000041, 0x00000042, 0x00000043, 0x00000044, 0x00000045, 0x00000046, 0x00000047,
  0x00000048, 0x00000049, 0x0000004a, 0x0000004b, 0x0000004c, 0x0000004d, 0x0000004e, 0x0000004f,
  0x00000050, 0x00000051, 0x00000052, 0x00000053, 0x00000054, 0x00000055, 0x00000056, 0x00000057,
  0x00000058, 0x00000059, 0x0000005a, 0x0000005b, 0x0000005c, 0x0000005d, 0x0000005e, 0x0000005f,
  0x00000060, 0x00000061, 0x00000062, 0x00000063, 0x00000064, 0x00000065, 0x00000066, 0x00000067,
  0x00000068, 0x00000069, 0x0000006a, 0x0000006b, 0x0000006c, 0x0000006d, 0x0000006e, 0x0000006f,
  0x00000070, 0x00000071, 0x00000072, 0x00000073, 0x00000074, 0x00000075, 0x00000076, 0x00000077,
  0x00000078, 0x00000079, 0x0000007a, 0x0000007b, 0x0000007c, 0x0000007d, 0x0000007e, 0x0000007f,
  0x00000410, 0x00000411, 0x00000412, 0x00000413, 0x00000414, 0x00000415, 0x00000416, 0x00000417,
  0x00000418, 0x00000419, 0x0000041a, 0x0000041b, 0x0000041c, 0x0000041d, 0x0000041e, 0x0000041f,
  0x00000420, 0x00000421, 0x00000422, 0x00000423, 0x00000424, 0x00000425, 0x00000426, 0x00000427,
  0x00000428, 0x00000429, 0x0000042a, 0x0000042b, 0x0000042c, 0x0000042d, 0x0000042e, 0x0000042f,
  0x00002020, 0x000000b0, 0x00000490, 0x000000a3, 0x000000a7, 0x00002022, 0x000000b6, 0x00000406,
  0x000000ae, 0x000000a9, 0x00002122, 0x00000402, 0x00000452, 0x00002260, 0x00000403, 0x00000453,
  0x0000221e, 0x000000b1, 0x00002264, 0x00002265, 0x00000456, 0x000000b5, 0x00000491, 0x00000408,
  0x00000404, 0x00000454, 0x00000407, 0x00000457, 0x00000409, 0x00000459, 0x0000040a, 0x0000045a,
  0x00000458, 0x00000405, 0x000000ac, 0x0000221a, 0x00000192, 0x00002248, 0x00002206, 0x000000ab,
  0x000000bb, 0x00002026, 0x000000a0, 0x0000040b, 0x0000045b, 0x0000040c, 0x0000045c, 0x00000455,
  0x00002013, 0x00002014, 0x0000201c, 0x0000201d, 0x00002018, 0x00002019, 0x000000f7, 0x0000201e,
  0x0000040e, 0x0000045e, 0x0000040f, 0x0000045f, 0x00002116, 0x00000401, 0x00000451, 0x0000044f,
  0x00000430, 0x00000431, 0x00000432, 0x00000433, 0x00000434, 0x00000435, 0x00000436, 0x00000437,
  0x00000438, 0x00000439, 0x0000043a, 0x0000043b, 0x0000043c, 0x0000043d, 0x0000043e, 0x0000043f,
  0x00000440, 0x00000441, 0x00000442, 0x00000443, 0x00000444, 0x00000445, 0x00000446, 0x00000447,
  0x00000448, 0x00000449, 0x0000044a, 0x0000044b, 0x0000044c, 0x0000044d, 0x0000044e, 0x000000a4
};

}} // namespace strutext, encode.
