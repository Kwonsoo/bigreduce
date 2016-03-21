main() {
  char linha[100];
  int i = 0;
  while (1) {
    if (!(i <= 25))
      goto while_break___0;
    airac_observe(linha, i);
    i++;
  }
while_break___0:
  ;
}
