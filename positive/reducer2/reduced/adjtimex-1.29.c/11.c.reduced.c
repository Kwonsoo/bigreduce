double denom[4];
int kalman_update_dr, sym_factor_j;
main() {
  kalman_update(1);
  kalman_update(2);
}

kalman_update(zr) {
  sym_factor(denom, kalman_update_dr, zr, denom, kalman_update_dr, zr);
}

sym_factor(void *a, int ar, int ac, void *c, int cr, int cc) {
  double *_c;
  int i, k___0;
  _c = c;
  i = 0;
  i = sym_factor_j + 1;
  k___0 = 0;
  airac_observe(_c, i * cc + k___0);
}
