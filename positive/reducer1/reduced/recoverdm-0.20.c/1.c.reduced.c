create_sector() {
  int loop2;
  int count[256];
  loop2 = 0;
  while (1) {
    if (!(loop2 < 256))
      goto while_break___1;
    airac_observe(count, loop2);
    loop2++;
  }
while_break___1:
  ;
}
