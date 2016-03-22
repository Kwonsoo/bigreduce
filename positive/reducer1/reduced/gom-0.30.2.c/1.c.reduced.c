gom_action_shortopts() {
  char shortopts_copy[120];
  unsigned tmp = 1;
  while (1) {
    if (tmp >= 120)
      goto while_break;
    airac_observe(shortopts_copy, tmp);
    tmp++;
  }
while_break:
  ;
}
