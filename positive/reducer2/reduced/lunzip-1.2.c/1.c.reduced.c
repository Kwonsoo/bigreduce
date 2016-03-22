show_header() {
  char prefix[8];
  unsigned i = 0;
  while (1) {
    if (i < 8)
      airac_observe(prefix, i);
    i++;
  }
}
