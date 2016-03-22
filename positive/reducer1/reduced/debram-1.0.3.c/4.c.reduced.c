struct xram {
  struct xram *next;
  struct xram *ram[5];
  int;
  char *title;
  int;
};
struct n_deb {
  struct n_deb *next;
  char ram[5];
  int;
} * calloc2_tmp;
calloc2(p1, p2) {
  calloc2_tmp = calloc(p1, p2);
  return calloc2_tmp;
}

main() {
  struct n_deb *n_deb_last;
  while (1) {
    calloc2(1, sizeof(struct n_deb));
    airac_observe(n_deb_last, 0);
    n_deb_last = calloc2(1, sizeof(struct xram));
  }
}

parse_opt() { calloc2(1, sizeof(int)); }
