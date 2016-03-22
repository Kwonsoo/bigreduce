double k[4];
double num, denom;
int kalman_update_kr, kalman_update_dr, kalman_update_dc, sym_rdiv_k___0;
main() { kalman_update(2, 2); }

kalman_update(xr, zr) {
  sym_rdiv(num, xr, zr, denom, kalman_update_dr, kalman_update_dc, k,
           kalman_update_kr, zr);
}

sym_rdiv(void *a, int ar, int ac, void *b, int br, int bc, void *c, int cr,
         int cc) {
  double *_c;
  int i, j;
  _c = c;
  i = 0;
  while (1) {
    if (!(i < ar))
      goto while_break;
    j = 0;
    while (1) {
      if (!(j < ac))
        goto while_break___0;
      if (sym_rdiv_k___0)
        airac_observe(_c, i * cc + j);
      j++;
    }
  while_break___0:
    i++;
  }
while_break:
  j--;
}
