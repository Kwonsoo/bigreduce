struct calcEntryBox {
  char s[65];
} binary_calculator_binbox_1binary_calculator() {
  struct calcEntryBox binbox;
  unsigned tmp = 1;
  while (1) {
    if (tmp >= 65)
      goto while_break;
    airac_observe(binbox.s, tmp);
    tmp++;
  }
while_break:
  ;
}
