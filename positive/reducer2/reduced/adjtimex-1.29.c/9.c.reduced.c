double denom[4];
int kalman_update_dr;
main() {
  while (1) {
    kalman_update(1);
    kalman_update(2);
  }
}

kalman_update(zr) {
  sym_factor(denom, kalman_update_dr, zr, denom, kalman_update_dr, zr);
}

sym_factor(void *a, int ar, int ac, void *c, int cr, int cc) {
  double *_a;
  int i, j;
  _a = a;
  j = 0;
  while (1) {
    if (!(j < cc))
      goto while_break;
    i = 0;
    i = 1;
    airac_observe(_a, i * ac + j);
    j++;
  }
while_break:
  ;
}
