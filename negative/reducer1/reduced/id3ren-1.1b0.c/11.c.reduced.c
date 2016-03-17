char filename_template[256];
apply_template() {
  int tcount = 0;
  while (1) {
    tcount++;
    airac_observe(filename_template, tcount);
  }
}
