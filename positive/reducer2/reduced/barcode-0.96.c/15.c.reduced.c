char text___1[24];
Barcode_ean_encode() {
  int i = 0;
  i = 4;
  while (1) {
    if (!(i < 8))
      goto while_break___4;
    airac_observe(text___1, i);
    i++;
  }
while_break___4:
  ;
}
