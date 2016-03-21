int main_tmp___47;
main() {
  char **accum;
  int i;
  i--;
  main_tmp___47 = malloc(32 * sizeof(char *));
  accum = main_tmp___47;
  i = 0;
  while (1) {
    if (!(i < 32))
      goto while_break___28;
    airac_observe(accum, i);
    i++;
  }
while_break___28:
  ;
}
