get_proc_info() {
  char pbuf[5];
  int i = 0;
  i = 1;
  while (1) {
    if (!(i < 4))
      goto while_break___2;
    airac_observe(pbuf, i);
    i++;
  }
while_break___2:
  ;
}
