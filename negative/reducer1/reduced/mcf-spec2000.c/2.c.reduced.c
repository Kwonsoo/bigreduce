static perm[401];
sort_basket(p1) {
  long l = p1++;
  airac_observe(perm, l);
  sort_basket(1);
}
