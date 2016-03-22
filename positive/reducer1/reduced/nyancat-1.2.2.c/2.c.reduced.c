SIGINT_handler() {
  char sb[1024];
  unsigned tmp___0 = 1;
  while (1) {
    if (tmp___0 >= 1024)
      goto while_break___0;
    airac_observe(sb, tmp___0);
    tmp___0++;
  }
while_break___0:
  ;
}
