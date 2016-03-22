char yy_c_buf_p, yylex_yy_cp;
const yy_ec[] = {0, 33};

const yy_meta[34];
int yylex_tmp;
yylex() {
  char yy_c;
  if (yy_c_buf_p)
    yylex_tmp = yy_ec[yylex_yy_cp];
  else
    yylex_tmp = 1;
  yy_c = yylex_tmp;
  airac_observe(yy_meta, (unsigned)yy_c);
}
