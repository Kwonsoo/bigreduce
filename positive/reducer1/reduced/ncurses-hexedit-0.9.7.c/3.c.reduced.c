struct calcEntryBox {
  char s[65];
} binary_calculator_decbox_1binary_calculator() {
  struct calcEntryBox decbox;
  unsigned tmp___1 = 1;
  while (1) {
    if (tmp___1 >= 65)
      goto while_break___1;
    airac_observe(decbox.s, tmp___1);
    tmp___1++;
  }
while_break___1:
  ;
}
