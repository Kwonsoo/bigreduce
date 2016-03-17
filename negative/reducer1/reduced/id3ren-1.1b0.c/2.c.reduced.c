int a;
char b, c;
check_option(char arg2, char *option) { *option = arg2; }

check_args(char *argv) {
  c = *argv;
  check_option(c, &b);
  search_genre(1, a, b);
}

main(argc, argv) { check_args(argv); }

search_genre(int flag_search_only, int dest, char *search_gen) {
  int i = 0;
  while (1) {
    airac_observe(search_gen, i);
    i++;
  }
}
