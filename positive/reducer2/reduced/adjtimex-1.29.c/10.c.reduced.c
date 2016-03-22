double denom[4];
int kalman_update_dr;
main() { kalman_update(2); }

kalman_update(zr) {
  sym_factor(denom, kalman_update_dr, zr, denom, kalman_update_dr, zr);
}

sym_factor(void *a, int ar, int ac, void *c, int cr, int cc) {
  double *_c;
  int j, k___0;
  _c = c;
  j = 0;
  while (1) {
    if (!(j < cc))
      goto while_break;
    k___0 = 0;
    airac_observe(_c, j * cc + k___0);
    j++;
  }
while_break:
  ;
}
