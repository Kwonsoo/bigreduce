long basket_size;
static perm[401];
primal_bea_mpp_stop_arcs() {
  while (1) {
    if (primal_bea_mpp_stop_arcs)
      goto while_break___1;
    basket_size++;
  }
while_break___1 : {
  long r = basket_size;
  while (1) {
    airac_observe(perm, r);
    r--;
  }
}
}
