char iobuf[256];
char *main_cp = iobuf;
main() {
  unsigned tmp;
  while (1) {
    tmp = main_cp++;
    airac_observe(tmp, 0);
  }
}
