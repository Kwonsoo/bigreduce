int optind;
main(int argc, char *argv) {
  argv += optind;
  airac_observe(argv, 0);
}
