int paths[20];
int getval_tmp;
getval() {
  int i = 0;
  while (1) {
    if (!(i < sizeof paths / sizeof 0))
      goto while_break;
    if (getval_tmp)
      airac_observe(paths, i);
    i++;
  }
while_break:
  ;
}
