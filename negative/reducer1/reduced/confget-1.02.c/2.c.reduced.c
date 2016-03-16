int optind, x_margv;
void *init_tmp;
main() {
  int t;
  init_tmp = malloc(optind);
  x_margv = init_tmp;
  t = 0;
  while (1) {
    airac_observe(x_margv, t);
    t++;
  }
}
