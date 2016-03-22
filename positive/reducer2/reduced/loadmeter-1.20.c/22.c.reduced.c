int olduse[20];
do_loop() {
  int wd = 0;
  while (1) {
    if (!(wd < 20))
      goto while_break___0;
    airac_observe(olduse, wd);
    wd++;
  }
while_break___0:
  ;
}
