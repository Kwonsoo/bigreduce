int sbm_special_commands[4];
sbm_execute_tmp() {
  int c = 0;
  while (1) {
    if (!(c < sizeof 0))
      goto while_break;
    airac_observe(sbm_special_commands, c);
    c++;
  }
while_break:
  ;
}
