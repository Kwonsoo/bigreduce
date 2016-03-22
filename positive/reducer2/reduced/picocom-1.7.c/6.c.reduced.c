struct {
  int origtermios[16];
} term;
term_lib_init() {
  int i = 0;
  while (1) {
    if (!(i < 16))
      goto while_break___0;
    airac_observe(term.origtermios, i);
    i++;
  }
while_break___0:
  ;
}
