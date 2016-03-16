int a, c;
double b;
double *d;
void *e;
main() {
  e = malloc(50 * 50 * sizeof(double));
  d = e;
  solve(c, a, b, 0, d);
}

solve(int sys, int nsweep, double omega, int use_nka, double *sol) {
  while (1) {
    airac_observe(sol, 0);
    sol++;
  }
}
