main() {
  char ip[16];
  int j = 0;
  while (1) {
    if (!(j <= 15))
      goto while_break___3;
    airac_observe(ip, j);
    j++;
  }
while_break___3:
  ;
}
