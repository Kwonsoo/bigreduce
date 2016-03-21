main() {
  int i;
  char buf[64];
  i = 0;
  while (1) {
    airac_observe(buf, i);
    i++;
  }
}
