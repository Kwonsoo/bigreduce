const guess_table[17];
int yylex_tmp___0;
yylex() {
  int i = 0;
  while (1) {
    if (!(i < sizeof guess_table / sizeof 0))
      goto while_break___6;
    if (yylex_tmp___0)
      airac_observe(guess_table, i);
    i++;
  }
while_break___6:
  ;
}
