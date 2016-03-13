run_httpd() {
  char password[128];
  int i = read();
  i = 0;
  while (1) {
    if (!(i < 16))
      goto while_break___0;
    airac_observe(password, i);
    i++;
  }
while_break___0:
  ;
}
