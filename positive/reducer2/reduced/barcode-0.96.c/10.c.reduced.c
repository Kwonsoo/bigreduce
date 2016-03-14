char text___1[24];
Barcode_ean_encode() {
  int i = 7;
  while (1) {
    if (!(i < 13))
      goto while_break___0;
    if (i == 12)
      ;
    else
      airac_observe(text___1, i);
    i++;
  }
while_break___0:
  i = 0;
}
