char MARKTYPESTRS[17];
main() {
  int i = 0;
  while (1) {
    if (i < 17)
      airac_observe(MARKTYPESTRS, i);
    i++;
  }
}
