arg_print_option() {
  char syntax[200];
  unsigned tmp = 1;
  while (1) {
    if (tmp >= 200)
      goto while_break;
    airac_observe(syntax, tmp);
    tmp++;
  }
while_break:
  ;
}
