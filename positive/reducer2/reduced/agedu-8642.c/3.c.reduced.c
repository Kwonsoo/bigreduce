int run_httpd_i;
run_httpd() {
  char passbuf[10];
  int j, k = read();
  while (1) {
    if (!(run_httpd_i < 16))
      goto while_break___0;
    k = run_httpd_i / 8 * 5;
    j = 0;
    while (1) {
      if (!(j < 5))
        goto while_break___1;
      airac_observe(passbuf, k + j);
      j++;
    }
  while_break___1:
    run_httpd_i++;
  }
while_break___0:
  ;
}
