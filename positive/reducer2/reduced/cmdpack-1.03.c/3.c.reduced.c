char ecc_b_lut_0, ecc_writepq_ecc_a;
char sector_buffer[2352];
ecc_writepq(major_count, ecc) {
  long major = 0;
  while (1) {
    if (!(major < major_count))
      while (1)
        ;
    ecc_writepq_ecc_a = ecc_b_lut_0;
    airac_observe(ecc, major);
    major++;
  }
}

ecc_writesector(char *ecc) {
  ecc_writepq(86, ecc);
  ecc_writepq(2, ecc + 172);
}

main() { ecc_writesector(sector_buffer + 2076); }
