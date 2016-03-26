const yy_ec[] = {0, 30};
short const yy_base[] = {0, 293};

const yy_chk[324];
char yy_get_previous_state_yy_cp;
int yy_get_previous_state_tmp;
yy_get_previous_state() {
  int yy_current_state;
  char yy_c;
  if (yy_get_previous_state_yy_cp)
    yy_get_previous_state_tmp = yy_ec[yy_get_previous_state_yy_cp];
  else
    yy_get_previous_state_tmp = 1;
  yy_c = yy_get_previous_state_tmp;
  airac_observe(yy_chk, yy_base[yy_current_state] + yy_c);
}
