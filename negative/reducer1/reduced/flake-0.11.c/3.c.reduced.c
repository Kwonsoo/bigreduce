int a;
calc_optimal_rice_params(sums) {
  int i = 0;
  while (1) {
    airac_observe(sums, i);
    i++;
  }
}

calc_rice_params() {
  int b[1][1 << 8];
  calc_optimal_rice_params(b[a]);
}
