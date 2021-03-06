//
// AUTOMATICALLLY GENERATED by gentables
//
#ifdef ENCODING_EU

static const uint8_t iso8859_6_f_1536[] = {
  0xac, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbb,
  0x00, 0x00, 0x00, 0xbf, 0x00, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb,
  0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb,
  0xec, 0xed, 0xee, 0xef, 0xf0, 0xf1, 0xf2
};

static uint32_t cs_iso8859_6_from_unicode (unicode_t unicode) {
    if (unicode <= 0x009f) return unicode;
    if (unicode == 0x00a0) return 0x00a0;
    if (unicode == 0x00a4) return 0x00a4;
    if (unicode == 0x00ad) return 0x00ad;
    if (0x060c <= unicode && unicode <= 0x0652)
      return iso8859_6_f_1536[unicode - 0x060c] == 0 ? NOCHAR : iso8859_6_f_1536[unicode - 0x060c];
    return NOCHAR;
}

#else

#define cs_iso8859_6_from_unicode cs_unknown_from_unicode
#define cs_iso8859_6_to_unicode   cs_unknown_to_unicode

#endif
