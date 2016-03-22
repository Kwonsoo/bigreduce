char processSearchSpecLine_token;
void *processSearchSpecLine_tmp;
processSearchSpecLine() {
  char **tokenarray;
  int i;
  processSearchSpecLine_tmp = malloc(6 * sizeof(char[4097]));
  tokenarray = processSearchSpecLine_tmp;
  i = 0;
  while (1) {
    if (processSearchSpecLine_token) {
      if (!(i < 6))
        goto while_break;
    } else
      goto while_break;
    airac_observe(tokenarray, i);
    i++;
  }
while_break:
  ;
}
