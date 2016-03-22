double k, num;
double denom[4];
int kalman_update_kr, kalman_update_kc, kalman_update_nr, kalman_update_dr,
    sym_rdiv_k___0;
main() { kalman_update(2); }

kalman_update(zr) {
  sym_rdiv(num, kalman_update_nr, zr, denom, kalman_update_dr, zr, k,
           kalman_update_kr, kalman_update_kc);
}

sym_rdiv(void *a, int ar, int ac, void *b, int br, int bc, void *c, int cr,
         int cc) {
  double *_b;
  int j;
  _b = b;
  j = 0;
  while (1) {
    if (!(j < ac))
      goto while_break___0;
    if (sym_rdiv_k___0)
      airac_observe(_b, j * bc + j);
    j++;
  }
while_break___0:
  j--;
}
