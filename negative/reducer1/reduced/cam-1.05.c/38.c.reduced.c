main(int argc, char *argv) {
  int argc_count = 1;
  while (1) {
    airac_observe(argv, argc_count);
    argc_count++;
  }
}
