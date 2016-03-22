SIGINT_handler() {
  char term[1024];
  unsigned tmp = 5;
  while (1) {
    if (tmp >= 1024)
      goto while_break;
    airac_observe(term, tmp);
    tmp++;
  }
while_break:
  ;
}
