char dtaus_writeA_buf[129];
dtaus_writeA() {
  char *buf = dtaus_writeA_buf;
  int i = 15;
  while (1) {
    if (!(i < 23))
      goto while_break;
    airac_observe(buf, i);
    i++;
  }
while_break:
  i = 0;
}
