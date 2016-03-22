do_define_chord() {
  int dot_array[6];
  int n = 0;
  while (1) {
    if (!(n < 6))
      goto while_break;
    airac_observe(dot_array, n);
    n++;
  }
while_break:
  ;
}
