int paths[20];
int addval_len;
addval_tmp() {
  int i = 0;
  while (1) {
    if (!(i < sizeof paths / sizeof 0))
      goto while_break;
    airac_observe(paths, i);
    addval_len = i++;
  }
while_break:
  ;
}
