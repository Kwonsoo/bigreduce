int fputnum2_tmp;
numcount() { return 4; }

fputnum2() {
  fputnum2_tmp = numcount();
  int i;
  char buf[16];
  i = fputnum2_tmp - 1;
  if (!(i >= 0))
    goto while_break;
  airac_observe(buf, i);
while_break:
  i = 0;
}
