struct signal_info {
  int channels;
};
int a;
char b;
void *c, *d;
void *xmalloc();
signal_max_power(char filename, struct signal_info *si) {
  si->channels = afGetChannels();
  airac_observe(si, 0);
  xmalloc(si->channels);
}

main() {
  c = xmalloc();
  compute_levels(c, b, a);
}

void compute_levels(struct signal_info *sis, char fnames, int nfiles) {
  int i = 0;
  while (1) {
    signal_max_power(i, sis + i);
    i++;
  }
}

void *xmalloc(size) {
  d = malloc(size);
  return d;
}
