typedef CRC32[256];
CRC32 crc32;
main() {
  unsigned n = 0;
  while (1) {
    if (!(n < 256))
      while (1)
        ;
    airac_observe(crc32, n);
    n++;
  }
}
