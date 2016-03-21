main() {
  char argv[6];
  int i = 0;
  while (1) {
    if (!(i < 6))
      goto while_break;
    airac_observe(argv, i);
    i++;
  }
while_break:
  ;
}
