Barcode_ean_encode() {
  char *mirror;
  int i;
  mirror = "------";
  i = 1;
  while (1) {
    if (!(i < 7))
      goto while_break;
    airac_observe(mirror, i - 1);
    i++;
  }
while_break:
  mirror = "111" + 1;
  mirror = "11";
  i = 0;
}
