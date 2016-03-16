char obuf[32];
char *main_cp = obuf;
main() {
  unsigned tmp;
  while (1) {
    tmp = main_cp++;
    airac_observe(tmp, 0);
  }
}
