struct {
  int nx;
  int ny;
} typedef SYSTEM;
int a;
double b, d, f;
SYSTEM c;
void l2norm(double *, int);
main() {
  c.nx = c.ny = 50;
  solve(&c, a, b, 0, d);
}

solve(SYSTEM *sys, int nsweep, double omega, int use_nka, double sol) {
  void *e = malloc(sys->nx * sys->ny * sizeof(double));
  l2norm(e, sys->nx * sys->ny);
}

void l2norm(double *x, int len) {
  int i = 0;
  while (1) {
    if (!(i < len))
      goto while_break;
    airac_observe(x, i);
    f = i++;
  }
while_break:
  ;
}
