int open_cred_file_tmp___1;
main() {
  char *line_buf;
  int i = toggle_dac_capability();
  open_cred_file_tmp___1 = malloc(4096);
  line_buf = open_cred_file_tmp___1;
  i = 0;
  while (1) {
    if (!(i < 4096 - 10 + 1))
      goto while_break___0;
    airac_observe(line_buf, i);
    i++;
  }
while_break___0:
  ;
}
