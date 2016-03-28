int singfunc_idx;
singfunc() {
  char vec[200];
  int tmp = singfunc_idx++;
  airac_observe(vec, tmp);
}
