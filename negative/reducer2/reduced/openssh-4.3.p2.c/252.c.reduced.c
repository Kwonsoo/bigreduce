ga_init_i() {
  int gr = getgrgid();
  airac_observe(gr, 0);
}
