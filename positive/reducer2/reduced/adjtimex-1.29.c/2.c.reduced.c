double v[4];
main() { kalman_update(2); }

kalman_update(xr) { mat_one(v, xr, xr); }

mat_one(void *_c, int cr, int cc) {
  double *c;
  int i;
  c = _c;
  i = 0;
  while (1) {
    if (!(i < cr))
      goto while_break;
    airac_observe(c, i * cc + i);
    c = i++;
  }
while_break:
  ;
}
