main() {
  char newfilename[160];
  int tmp___5 = 1;
  while (1) {
    if (tmp___5 >= 160)
      goto while_break___6;
    airac_observe(newfilename, tmp___5);
    tmp___5++;
  }
while_break___6:
  ;
}
