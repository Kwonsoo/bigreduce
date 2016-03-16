char main_sin[4096];
main() {
  char *ptr = main_sin;
  while (1) {
    airac_observe(ptr, 0);
    ptr++;
  }
}
