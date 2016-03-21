char main_buf[64];
main() {
  char *cp = main_buf;
  airac_observe(cp, 0);
  cp++;
}
