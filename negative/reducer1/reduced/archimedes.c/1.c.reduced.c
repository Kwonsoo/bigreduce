int a;
double P[10000001];
EMC() {
  long n = 1;
  while (1) {
    airac_observe(P, n);
    n++;
    a--;
    if (a)
      goto while_break;
  }
while_break:
  n = a;
}
