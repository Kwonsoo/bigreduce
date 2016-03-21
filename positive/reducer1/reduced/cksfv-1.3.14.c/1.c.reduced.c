main() {
  char dir[4096];
  unsigned tmp = 2;
  while (1) {
    if (tmp >= 4096)
      goto while_break;
    airac_observe(dir, tmp);
    tmp++;
  }
while_break:
  ;
}
