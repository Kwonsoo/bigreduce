char *keymem;
int ncount, main_tmp___38;
main() {
  int w2size, i;
  i--;
  w2size = 4096;
  if (w2size < 9)
    w2size += 4096;
  main_tmp___38 = malloc(w2size);
  keymem = main_tmp___38;
  i = 0;
  while (1) {
    if (!(i < w2size))
      goto while_break___12;
    if (ncount)
      airac_observe(keymem, i);
    i++;
  }
while_break___12:
  ;
}
