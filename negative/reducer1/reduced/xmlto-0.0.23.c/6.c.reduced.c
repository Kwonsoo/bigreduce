static selections;
main(int p1, char *p2) {
  selections = p2 + 1;
  int i = 0;
  while (1) {
    airac_observe(selections, i);
    i++;
  }
}
