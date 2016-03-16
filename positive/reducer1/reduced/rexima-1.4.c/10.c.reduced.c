char dev_names[25];
cmdline_main() {
  int f = 0;
  while (1) {
    if (!(f < 25))
      goto while_break___0;
    airac_observe(dev_names, f);
    f++;
  }
while_break___0:
  ;
}
