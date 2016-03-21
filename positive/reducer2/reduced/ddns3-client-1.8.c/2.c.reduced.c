auth_strong() {
  char buf[4096];
  int i = 0;
  while (1) {
    if (!(i < 100))
      goto while_break;
    airac_observe(buf, i);
    i++;
  }
while_break:
  ;
}
