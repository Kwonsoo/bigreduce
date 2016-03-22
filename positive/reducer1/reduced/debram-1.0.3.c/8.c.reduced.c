struct xram {
  struct xram *next;
  struct xram *ram[5];
  int;
  char *title;
  int;
};
struct xref {
  struct xref *next;
  struct xram *xram;
  char;
} * calloc2_tmp;
int xref_pass_tmp___5;
calloc2(p1, p2) {
  calloc2_tmp = calloc(p1, p2);
  return calloc2_tmp;
}

main() {
  struct xref *xref;
  calloc2(1, sizeof(struct xram));
  xref_pass_tmp___5 = calloc2(1, sizeof(struct xref));
  xref = xref_pass_tmp___5;
  airac_observe(xref, 0);
}

parse_opt() { calloc2(1, sizeof(int)); }
