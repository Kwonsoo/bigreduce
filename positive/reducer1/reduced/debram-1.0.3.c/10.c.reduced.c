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
void *xref_pass_tmp___6;
calloc2(p1, p2) {
  calloc2_tmp = calloc(p1, p2);
  return calloc2_tmp;
}

main() {
  struct xref *sref;
  calloc2(1, sizeof(struct xram));
  xref_pass_tmp___6 = calloc2(1, sizeof(struct xref));
  sref = xref_pass_tmp___6;
  airac_observe(sref, 0);
}

parse_opt() { calloc2(1, sizeof(int)); }
