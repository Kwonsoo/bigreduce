char optstring[4096];
int my_getopt_i, my_getopt_p;
my_getopt_parms___0() {
  int tmp___0;
  while (1) {
    if (my_getopt_i) {
      if (!(my_getopt_p < 4095))
        goto while_break;
    } else
      goto while_break;
    my_getopt_p++;
    tmp___0 = my_getopt_p;
    airac_observe(optstring, tmp___0);
  }
while_break:
  ;
}
