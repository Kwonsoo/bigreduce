double u2d[1][309];
double dy, P;
Charge() {
  int i, j = P / dy;
  j = 1;
  while (1) {
    if (!(j <= 50 + 1))
      goto while_break___3;
    airac_observe(u2d[i], j);
    j++;
  }
while_break___3:
  ;
}
