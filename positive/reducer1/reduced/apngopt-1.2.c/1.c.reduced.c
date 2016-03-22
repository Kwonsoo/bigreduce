char tr[256];
read32() {
  int i = 0;
  while (1) {
    if (i < 256)
      airac_observe(tr, i);
    i++;
  }
}
