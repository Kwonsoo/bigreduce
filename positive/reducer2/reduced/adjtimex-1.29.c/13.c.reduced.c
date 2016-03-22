double k, denom;
double num[4];
int kalman_update_kr, kalman_update_kc, kalman_update_dr, kalman_update_dc,
    sym_rdiv_k___0;
main() { kalman_update(2, 2); }

kalman_update(xr, zr) {
  sym_rdiv(num, xr, zr, denom, kalman_update_dr, kalman_update_dc, k,
           kalman_update_kr, kalman_update_kc);
}

sym_rdiv(void *a, int ar, int ac, void *b, int br, int bc, void *c, int cr,
         int cc) {
  double *_a;
  int i, j;
  _a = a;
  i = 0;
  while (1) {
    if (!(i < ar))
      goto while_break;
    j = 0;
    while (1) {
      if (!(j < ac))
        goto while_break___0;
      airac_observe(_a, i * ac + j);
      sym_rdiv_k___0 = j++;
    }
  while_break___0:
    i++;
  }
while_break:
  j--;
}
