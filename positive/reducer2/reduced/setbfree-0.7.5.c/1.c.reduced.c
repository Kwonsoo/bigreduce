double b[33];
computeIpolFilter() {
  double *a = b;
  int i = 0;
  while (1) {
    if (!(i < 33))
      goto while_break;
    airac_observe(a, i);
    i++;
  }
while_break:
  ;
}
