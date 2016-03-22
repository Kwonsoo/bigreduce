const guess_table[17];
int yylex_width;
yylex() {
  int i = 0;
  while (1) {
    if (!(i < sizeof guess_table / sizeof 0))
      goto while_break___6;
    airac_observe(guess_table, i);
    yylex_width = i++;
  }
while_break___6:
  ;
}
