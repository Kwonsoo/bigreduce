double EDGE[1][617];
main() {
  int i = 1;
  while (1) {
    if (!(i <= 50 + 1))
      goto while_break;
    airac_observe(EDGE[0], i);
    i++;
  }
while_break:
  ;
}
