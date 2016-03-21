int smarts[7];
int smartcmd_lookup_n;
smartcmd_lookup() {
  int i;
  smartcmd_lookup_n = sizeof smarts / sizeof 0;
  i = 0;
  while (1) {
    if (!(i < smartcmd_lookup_n))
      goto while_break;
    airac_observe(smarts, i);
    i++;
  }
while_break:
  ;
}
