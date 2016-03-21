const yy_ec[] = {0, 10};

const yy_meta[11];
char yylex_yy_cp;
int yylex_tmp;
yylex() {
  char yy_c;
  if (yylex_yy_cp)
    yylex_tmp = yy_ec[yylex_yy_cp];
  else
    yylex_tmp = 1;
  yy_c = yylex_tmp;
  airac_observe(yy_meta, (unsigned)yy_c);
}
