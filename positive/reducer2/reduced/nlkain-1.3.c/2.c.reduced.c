struct {
  int nx;
  int ny;
} typedef SYSTEM;
int main_nsweep;
double main_omega, main_u;
SYSTEM main_sys;
void *solve_tmp;
main() {
  main_sys.nx = main_sys.ny = 50;
  solve(&main_sys, main_nsweep, main_omega, 0, main_u);
}

solve(SYSTEM *p1, int p2, double p3, int p4, double p5) {
  int i, n;
  double *upad;
  n = (p1->nx + 2) * (p1->ny + 2);
  solve_tmp = malloc(n * sizeof(double));
  upad = solve_tmp;
  i = 0;
  while (1) {
    if (!(i < n))
      goto while_break;
    airac_observe(upad, i);
    i++;
  }
while_break:
  ;
}
