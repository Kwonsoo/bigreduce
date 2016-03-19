struct signal_info {
  int channels;
};
void *a, *c;
int b;
void *xmalloc();
signal_max_power(struct signal_info *si) {
  si->channels = afGetChannels();
  airac_observe(si, 0);
  xmalloc(si->channels);
}

main() {
  a = xmalloc();
  while (1) {
    signal_max_power(a + b);
    b++;
  }
}

void *xmalloc(size) {
  c = malloc(size);
  return c;
}
