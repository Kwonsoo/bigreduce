struct {
  int fd[16];
} term;
term_find() {
  int i = 0;
  while (1) {
    if (!(i < 16))
      goto while_break___0;
    airac_observe(term.fd, i);
    i++;
  }
while_break___0:
  ;
}
