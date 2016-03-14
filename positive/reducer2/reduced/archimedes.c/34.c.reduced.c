int ny;
int i_dom[1][309];
double u2d_0_0_0;
main() {
  while (1) {
    int i, j = 4;
    while (1) {
      if (!(j <= ny + 1))
        goto while_break___0;
      airac_observe(i_dom[i], j);
      u2d_0_0_0 = j++;
    }
  while_break___0:
    ny = 50;
  }
}
