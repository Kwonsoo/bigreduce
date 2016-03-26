const yy_accept[] = {37, 0};

const yy_rule_can_match_eol[37];
int yylex_yy_current_state;
yylex() {
  register yy_act = yy_accept[yylex_yy_current_state];
  if (yy_act != 37)
    airac_observe(yy_rule_can_match_eol, yy_act);
  yy_act = 37 + 1;
}
