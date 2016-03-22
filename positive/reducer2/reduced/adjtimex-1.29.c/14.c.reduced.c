double k[4];
double num, denom;
int kalman_update_kr, kalman_update_nc, kalman_update_dr, kalman_update_dc,
    sym_rdiv_j;
main() { kalman_update(2, 2); }

kalman_update(xr, zr) {
  sym_rdiv(num, xr, kalman_update_nc, denom, kalman_update_dr, kalman_update_dc,
           k, kalman_update_kr, zr);
}

sym_rdiv(void *a, int ar, int ac, void *b, int br, int bc, void *c, int cr,
         int cc) {
  double *_c;
  int i, k___0;
  _c = c;
  i = 0;
  while (1) {
    if (!(i < ar))
      goto while_break;
    k___0 = 0;
    airac_observe(_c, i * cc + k___0);
    i++;
  while_break:
    sym_rdiv_j--;
    k___0 = sym_rdiv_j;
  }
}
