#ifndef NFPM_BITMAP_TABLE6_H
#define NFPM_BITMAP_TABLE6_H
#define NFPM_BITMAP_TABLE6_WIDTH (8)
#define NFPM_BITMAP_TABLE6_DEPTH (16)
#define NFPM_BITMAP_TABLE6_LGDEPTH (4)


#define NFPM_BITMAP_TABLE6_MAXLGDEPTH (10)


#if SPUMP_PRGMA
[[intel::singlepump]]
#endif
#if DPUMP_PRGMA
[[intel::doublepump]]
#endif
#if DPORT_PRGMA
[[intel::simple_dual_port]]
#endif
const static unsigned char NFPM_BITMAP_TABLE6[16] = {
 0x80,
 0x10,
 0x80,
 0x20,
 0x10,
 0x02,
 0x10,
 0x40,
 0x10,
 0x20,
 0x00,
 0x40,
 0x00,
 0x02,
 0x10,
 0x80
};
#endif
