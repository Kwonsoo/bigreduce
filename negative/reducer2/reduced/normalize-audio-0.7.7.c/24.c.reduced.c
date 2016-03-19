struct signal_info {};
int optind, main_nfiles;
char main_fnames;
void *main_tmp___23, *xmalloc_tmp;
void *xmalloc();
signal_max_power(char filename, struct signal_info *si) {
  airac_observe(si, 0);
}

main() {
  xmalloc(optind);
  main_tmp___23 = xmalloc();
  compute_levels(main_tmp___23, main_fnames, main_nfiles);
}

void compute_levels(struct signal_info *sis, char fnames, int nfiles) {
  int i = 0;
  while (1) {
    signal_max_power(i, sis + i);
    i++;
  }
}

void *xmalloc(size) {
  xmalloc_tmp = malloc(size);
  return xmalloc_tmp;
}
