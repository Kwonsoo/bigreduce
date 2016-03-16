struct {
  int nx;
  int ny;
} typedef SYSTEM;
int a;
double b, d;
SYSTEM c;
double *e;
void *f;
main() {
  c.nx = c.ny = 50;
  solve(&c, a, b, 1, d);
}

solve(SYSTEM *p1, int p2, double p3, int p4, double p5) {
  int n;
  double *u;
  n = (p1->nx + 2) * (p1->ny + 2);
  f = malloc(n * sizeof(double));
  e = f;
  u = e + p1->nx + 2;
  while (1) {
    u++;
    airac_observe(u, 0);
  }
}
