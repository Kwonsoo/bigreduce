enum __anonenum_ptyp_t_24 { ptyp_unknown } part_nexttype();
static types[3];
enum __anonenum_ptyp_t_24 part_nexttype_current;
main() { part_nexttype(-1); }

enum __anonenum_ptyp_t_24 part_nexttype(p1) {
  int i = 0;
  while (1) {
    if (!(i < sizeof types / sizeof(enum __anonenum_ptyp_t_24)))
      goto while_break;
    airac_observe(types, i);
    if (part_nexttype_current)
      i++;
  }
while_break:
  i = p1;
}
