process_dev() {
  char umodes[128];
  unsigned tmp___1 = 1;
  while (1) {
    if (tmp___1 >= 128)
      goto while_break___1;
    airac_observe(umodes, tmp___1);
    tmp___1++;
  }
while_break___1:
  ;
}
