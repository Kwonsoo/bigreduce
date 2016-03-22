double num[4];
int kalman_update_pr, kalman_update_pc, kalman_update_hr, kalman_update_hc;
double kalman_update_p, kalman_update_h___0;
main() { kalman_update(2, 2); }

kalman_update(xr, zr) {
  mat_mul_nt(kalman_update_p, kalman_update_pr, kalman_update_pc,
             kalman_update_h___0, kalman_update_hr, kalman_update_hc, num, xr,
             zr);
}

mat_mul_nt(void *a, int ar, int ac, void *b, int br, int bc, void *c, int cr,
           int cc) {
  double *_c;
  int i, j;
  _c = c;
  i = 0;
  while (1) {
    if (!(i < cr))
      goto while_break;
    j = 0;
    while (1) {
      if (!(j < cc))
        goto while_break___0;
      airac_observe(_c, i * cc + j);
      _c = j++;
    }
  while_break___0:
    i++;
  }
while_break:
  ;
}
