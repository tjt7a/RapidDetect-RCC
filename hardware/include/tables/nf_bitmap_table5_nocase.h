#ifndef NFPM_BITMAP_TABLE5_H
#define NFPM_BITMAP_TABLE5_H
#define NFPM_BITMAP_TABLE5_WIDTH (8)
#define NFPM_BITMAP_TABLE5_DEPTH (16)
#define NFPM_BITMAP_TABLE5_LGDEPTH (4)


#define NFPM_BITMAP_TABLE5_MAXLGDEPTH (10)


#if SPUMP_PRGMA
[[intel::singlepump]]
#endif
#if DPUMP_PRGMA
[[intel::doublepump]]
#endif
#if DPORT_PRGMA
[[intel::simple_dual_port]]
#endif
const static unsigned char NFPM_BITMAP_TABLE5[16] = {
 0x00,
 0x00,
 0x80,
 0x10,
 0x80,
 0x00,
 0x20,
 0x00,
 0x00,
 0x02,
 0x00,
 0x26,
 0x00,
 0x00,
 0x00,
 0x00
};
#endif
