int basket[401];
primal_bea_mpp() {
  long i = 1;
  while (1) {
    if (!(i < 401))
      goto while_break;
    airac_observe(basket, i);
    i++;
  }
while_break:
  ;
}
