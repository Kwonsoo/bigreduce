int aa_fonts[247];
aa_registerfont() {
  int i = 0;
  while (1) {
    if (i < 246)
      airac_observe(aa_fonts, i);
    i++;
  }
}
