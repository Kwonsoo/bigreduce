char ecc_f_lut[256];
main() {
  unsigned i = 0;
  while (1) {
    if (!(i < 256))
      goto while_break;
    airac_observe(ecc_f_lut, i);
    i++;
  }
while_break:
  ;
}
