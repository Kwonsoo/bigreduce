struct {
  int nx;
  int ny;
} typedef SYSTEM;
int a;
double b, d;
SYSTEM c;
main() {
  c.nx = c.ny = 50;
  solve(&c, a, b, 1, d);
}

solve(SYSTEM *p1, int p2, double p3, int p4, double p5) {
  double *t;
  void *e = malloc(p1->nx * p1->ny * sizeof(double));
  t = e;
  while (1) {
    airac_observe(t, 0);
    t++;
  }
}
