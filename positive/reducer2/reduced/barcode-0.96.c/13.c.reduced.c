char text___1[24];
Barcode_ean_encode() {
  int i = 0;
  while (1) {
    if (!(i < 6))
      goto while_break___2;
    airac_observe(text___1, i);
    i++;
  }
while_break___2:
  ;
}
