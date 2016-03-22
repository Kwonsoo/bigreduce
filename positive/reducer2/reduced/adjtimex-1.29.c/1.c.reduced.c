double v[4];
main() { kalman_update(2); }

kalman_update(p1) { mat_one(v, p1, p1); }

mat_zero(void *p1, int p2, int p3) {
  double *_c;
  int i;
  _c = p1;
  i = 0;
  while (1) {
    if (!(i < p2 * p3))
      goto while_break;
    airac_observe(_c, i);
    _c = i++;
  }
while_break:
  ;
}

mat_one(void *p1, int p2, int p3) { mat_zero(p1, p2, p3); }
