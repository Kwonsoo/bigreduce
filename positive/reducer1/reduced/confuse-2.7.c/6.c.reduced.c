char yy_c_buf_p, cfg_yylex_yy_cp;
const yy_ec[] = {0, 30}

,
      yy_base[] = {0, 293};

const yy_nxt[324];
int cfg_yylex_tmp;
cfg_yylex() {
  int yy_current_state;
  char yy_c;
  if (yy_c_buf_p)
    cfg_yylex_tmp = yy_ec[cfg_yylex_yy_cp];
  else
    cfg_yylex_tmp = 1;
  yy_c = cfg_yylex_tmp;
  airac_observe(yy_nxt, yy_base[yy_current_state] + (unsigned)yy_c);
}
