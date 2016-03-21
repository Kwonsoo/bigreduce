int fputnum2_tmp;
fputnum2() {
  fputnum2_tmp = 4;
  int i;
  char buf[16];
  i = fputnum2_tmp - 1;
  i = 0;
  while (1) {
    if (!(i < fputnum2_tmp))
      goto while_break___0;
    airac_observe(buf, i);
    i++;
  }
while_break___0:
  ;
}
