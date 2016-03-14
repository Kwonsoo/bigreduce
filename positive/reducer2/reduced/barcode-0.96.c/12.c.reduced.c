Barcode_ean_encode() {
  char *mirror;
  int i;
  mirror = "111" + 1;
  mirror = "11";
  mirror = "---111";
  i = 0;
  while (1) {
    if (!(i < 6))
      goto while_break___2;
    airac_observe(mirror, i);
    i++;
  }
while_break___2:
  ;
}
