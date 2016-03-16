struct __anonstruct_SYSTEM_24 {
  double *q;
} * main_tmp___2;
main() {
  int i;
  struct __anonstruct_SYSTEM_24 sys;
  main_tmp___2 = malloc(50 * 50 * sizeof(double));
  sys.q = main_tmp___2;
  i = 0;
  while (1) {
    if (!(i < 50 * 50))
      goto while_break;
    airac_observe(sys.q, i);
    i++;
  }
while_break:
  ;
}
