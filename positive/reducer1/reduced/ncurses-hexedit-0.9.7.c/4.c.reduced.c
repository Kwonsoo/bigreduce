struct calcEntryBox {
  char s[65];
} binary_calculator() {
  struct calcEntryBox hexbox;
  unsigned tmp___2 = 1;
  while (1) {
    if (tmp___2 >= 65)
      goto while_break___2;
    airac_observe(hexbox.s, tmp___2);
    tmp___2++;
  }
while_break___2:
  ;
}
