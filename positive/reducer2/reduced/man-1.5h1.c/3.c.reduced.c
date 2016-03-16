int paths[20];
int getval_tmp;
getval() {
  int i = 0;
  while (1) {
    if (!(i < sizeof paths / sizeof 0))
      goto while_break;
    airac_observe(paths, i);
    getval_tmp = i++;
  }
while_break:
  ;
}
