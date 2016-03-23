numtoquad() {
  int a[4];
  int x = 0;
  while (1) {
    if (!(x < 4))
      goto while_break;
    airac_observe(a, x);
    x++;
  }
while_break:
  ;
}
