double denom[4];
int kalman_update_dr;
main() { kalman_update(2); }

kalman_update(zr) {
  sym_factor(denom, kalman_update_dr, zr, denom, kalman_update_dr, zr);
}

sym_factor(void *a, int ar, int ac, void *c, int cr, int cc) {
  double *_a;
  int j;
  _a = a;
  j = 0;
  while (1) {
    if (!(j < cc))
      goto while_break;
    airac_observe(_a, j * ac + j);
    if (c)
      j++;
  }
while_break:
  ;
}
