double b[33];
computeIpolFilter() {
  double *a = b;
  int i = 0;
  while (1) {
    if (!(i < 33))
      ;
    else
      airac_observe(a, i);
    i++;
  }
}
