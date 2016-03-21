get_proc_info() {
  char pbuf[5];
  int i = 0;
  while (1) {
    if (!(i < 5))
      goto while_break___0;
    airac_observe(pbuf, i);
    i++;
  }
while_break___0:
  ;
}
