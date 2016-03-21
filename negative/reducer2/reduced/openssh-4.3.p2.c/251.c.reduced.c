void *ga_init_tmp___2;
ga_init() {
  unsigned groups_bygid;
  int i;
  ga_init_tmp___2 = xmalloc();
  groups_bygid = ga_init_tmp___2;
  i = 0;
  while (1) {
    airac_observe(groups_bygid, i);
    i++;
  }
}
