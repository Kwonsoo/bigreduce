char *get_hostfile_bitsf[6];
get_hostfile() {
  char **result = get_hostfile_bitsf;
  int parsecnt, tmp___1;
  parsecnt = 1;
  while (1) {
    if (!(parsecnt < 6))
      goto while_break___1;
    tmp___1 = parsecnt++;
    airac_observe(result, tmp___1);
  }
while_break___1:
  ;
}
