int signal_max_power_tmp___0, main_si_0;
void *xmalloc_tmp;
void *xmalloc();
main() {
  int c;
  double sums;
  main_si_0 = afGetChannels();
  signal_max_power_tmp___0 = xmalloc(main_si_0);
  sums = signal_max_power_tmp___0;
  c = 0;
  while (1) {
    airac_observe(sums, c);
    c++;
  }
}

void *xmalloc(p1) {
  xmalloc_tmp = malloc(p1);
  return xmalloc_tmp;
}
