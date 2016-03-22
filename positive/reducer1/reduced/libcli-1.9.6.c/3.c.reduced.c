cli_run_command() {
  char words[128];
  unsigned tmp = 1;
  while (1) {
    if (tmp >= 128)
      goto while_break;
    airac_observe(words, tmp);
    tmp++;
  }
while_break:
  ;
}
