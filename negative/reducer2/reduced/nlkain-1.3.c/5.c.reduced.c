typedef struct nka_state *NKA;
struct {
  int nx;
  int ny;
  NKA nka;
} typedef SYSTEM;
struct nka_state {
  int vsize;
  double **w;
  double (*dp)();
};
int main_nsweep, nka_correction_j;
double main_omega, main_u, dot_product_s;
SYSTEM main_sys;
double *solve_r;
NKA nka_create_state;
void *nka_create_tmp, *nka_create_tmp___3;
NKA nka_create();
main() {
  main_sys.nx = main_sys.ny = 50;
  main_sys.nka = nka_create(main_sys.nx * main_sys.ny, 5, 0);
  solve(&main_sys, main_nsweep, main_omega, 0, main_u);
}

solve(SYSTEM *sys, int nsweep, double omega, int use_nka, double sol) {
  void *tmp___0 = malloc(sys->nx * sys->ny * sizeof(double));
  solve_r = tmp___0;
  nka_correction(sys->nka, solve_r);
}

dot_product(int len, double a, double b) {
  int j = 0;
  while (1) {
    if (!(j < len))
      goto while_break;
    airac_observe(a, j);
    dot_product_s = j++;
  }
while_break:
  ;
}

NKA nka_create(int vsize, int maxv, double dp) {
  int n;
  nka_create_tmp = mallocsizeof();
  nka_create_state = nka_create_tmp;
  nka_create_state->vsize = vsize;
  nka_create_state->dp = dot_product;
  n = maxv + 1;
  nka_create_state->w = nka_create_tmp___3 = malloc(n * vsize * sizeof(double));
  *nka_create_state->w = nka_create_tmp___3;
  while (1) {
    if (n)
      goto while_break___0;
    *nka_create_state->w = nka_create_state->w + vsize;
  }
while_break___0:
  return nka_create_tmp;
}

nka_correction(NKA state, double f) {
  double *w = *state->w;
  state->dp(state->vsize, w, w);
  state->dp(state->vsize, f, nka_correction_j);
}
