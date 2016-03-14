br_cmd() {
  char cmd_seq[5];
  register j = 0;
  while (1) {
    if (!(j < 5))
      goto while_break;
    airac_observe(cmd_seq, j);
    j++;
  }
while_break:
  ;
}
