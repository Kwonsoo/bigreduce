arg_print_syntaxv() {
  char syntax[200];
  int tmp = 1;
  while (1) {
    if (tmp >= 200)
      goto while_break___0;
    airac_observe(syntax, tmp);
    tmp++;
  }
while_break___0:
  ;
}
