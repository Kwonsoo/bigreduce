ata_get_smart_values() {
  char cmd[516];
  unsigned tmp = 4;
  while (1) {
    if (tmp >= 516)
      goto while_break;
    airac_observe(cmd, tmp);
    tmp++;
  }
while_break:
  ;
}
