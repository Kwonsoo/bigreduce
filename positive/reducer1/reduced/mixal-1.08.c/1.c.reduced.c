long r[10];
set_initial_state() {
  unsigned i = 0;
  while (1) {
    if (!(i < 10))
      goto while_break;
    airac_observe(r, i);
    i++;
  }
while_break:
  ;
}
