char *interdiff_names[2];
main() {
  char **names = interdiff_names;
  int i = 0;
  while (1) {
    if (!(i < 2))
      goto while_break___1;
    airac_observe(names, i);
    i++;
  }
while_break___1:
  ;
}
