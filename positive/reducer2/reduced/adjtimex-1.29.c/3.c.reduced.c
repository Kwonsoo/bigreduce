double main_p[4];
double v;
main() { kalman_update(2, main_p); }

kalman_update(p1, p2) { mat_copy(v, p1, p1, p2, p1, p1); }

mat_copy(void *p1, int p2, int p3, void *p4, int p5, int p6) {
  double *_c;
  int i;
  _c = p4;
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
