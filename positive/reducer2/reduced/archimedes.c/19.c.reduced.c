double dy, P_0_6;
media() {
  int i, j;
  double ener[1][309];
  j = 0;
  while (1) {
    if (!(j <= 308))
      goto while_break___0;
    airac_observe(ener[i], j);
    j++;
  }
while_break___0:
  j = P_0_6 / dy;
}
