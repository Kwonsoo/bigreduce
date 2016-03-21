main() {
  char command[19];
  int cmd = -1;
  cmd = 0;
  while (1) {
    if (!(cmd < 19))
      goto while_break___0;
    airac_observe(command, cmd);
    cmd++;
  }
while_break___0:
  ;
}
