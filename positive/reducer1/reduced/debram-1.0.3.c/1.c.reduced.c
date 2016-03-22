struct {
  char buf0[135];
  char *buf;
  char *descX;
} datum, *init_datum_d;
char *pp;
char init_datum_a, print_deb_max;
int print_deb_tmp___0;
pp_init(p1) { pp = p1; }

pp_set() { return pp; }

init_datum() {
  init_datum_d = &datum;
  init_datum_d->buf = init_datum_d->buf0 + 1;
  pp_init(init_datum_d->buf);
  init_datum_a = pp + 1;
  pp = init_datum_a;
  init_datum_d->descX = pp_set();
}

print_deb_find() {
  if (print_deb_find)
    print_deb_tmp___0 = -5;
  print_deb_max = datum.buf + 132 + print_deb_tmp___0;
  datum.descX = print_deb_max;
  airac_observe(datum.descX, 0);
}
