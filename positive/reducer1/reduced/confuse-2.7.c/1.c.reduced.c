const yy_base[102];
short yy_nxt[] = {0, 84};

int yy_last_accepting_state;
char cfg_yylex_yy_c;
cfg_yylex() {
  int yy_current_state;
  yy_last_accepting_state = yy_current_state = yy_nxt[cfg_yylex_yy_c];
  airac_observe(yy_base, yy_current_state);
  yy_current_state = yy_last_accepting_state;
}
