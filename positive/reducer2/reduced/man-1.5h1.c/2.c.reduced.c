int paths[20];
int addval_tmp___0;
read_config_file() {
  int i = 0;
  while (1) {
    if (!(i < sizeof paths / sizeof 0))
      goto while_break;
    airac_observe(paths, i);
    addval_tmp___0 = i++;
  }
while_break:
  ;
}
