char text___1[24];
Barcode_ean_encode() {
  int i = 0;
  while (1) {
    if (!(i < 4))
      goto while_break___3;
    airac_observe(text___1, i);
    i++;
  }
while_break___3:
  ;
}
