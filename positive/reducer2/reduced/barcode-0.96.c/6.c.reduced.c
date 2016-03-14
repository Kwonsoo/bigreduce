char text___1[24];
Barcode_ean_encode() {
  int i = 1;
  while (1) {
    if (!(i < 7))
      goto while_break;
    if (i == 1)
      ;
    else
      airac_observe(text___1, i);
    i++;
  }
while_break:
  i = 0;
}
