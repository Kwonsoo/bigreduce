main() {
  int effects[6];
  int i;
  scanf("", &i);
  i = 0;
  while (1) {
    if (!(i < 6))
      goto while_break___4;
    airac_observe(effects, i);
    i++;
  }
while_break___4:
  ;
}
