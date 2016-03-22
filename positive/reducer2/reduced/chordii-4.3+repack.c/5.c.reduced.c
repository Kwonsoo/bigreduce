check_old_define_syntax() {
  int n;
  int dot_array[6];
  n = 0;
  while (1) {
    if (!(n <= 5))
      goto while_break;
    airac_observe(dot_array, n);
    n++;
  }
while_break:
  ;
}
