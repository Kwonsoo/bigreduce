char *main_to[3];
main() {
  char **to = main_to;
  int rpt = 0;
  while (1) {
    if (!(rpt < 3))
      goto while_break;
    airac_observe(to, rpt);
    rpt++;
  }
while_break:
  ;
}
