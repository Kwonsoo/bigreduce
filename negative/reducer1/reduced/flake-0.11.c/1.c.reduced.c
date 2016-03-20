int find_optimal_rice_param_k;
find_optimal_rice_param() {
  int k_opt;
  int nbits[15];
  while (1) {
    airac_observe(nbits, k_opt);
    k_opt = find_optimal_rice_param_k++;
  }
}
