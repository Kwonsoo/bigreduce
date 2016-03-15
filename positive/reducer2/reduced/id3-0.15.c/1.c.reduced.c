int optind;
char genre_table[148];
main() {
  int i = 0;
  while (1) {
    if (!(i < 148))
      goto while_break___0;
    airac_observe(genre_table, i);
    i++;
  }
while_break___0:
  i = optind;
}
