char *interdiff_names[2];
main() {
  char **names = interdiff_names;
  int i = 0;
  while (1) {
    if (!(i < 2))
      ;
    else
      airac_observe(names, i);
    i++;
  }
}
