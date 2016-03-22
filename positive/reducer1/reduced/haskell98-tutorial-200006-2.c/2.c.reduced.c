const yy_ec[] = {0, 22};

const yy_meta[23];
char yy_get_previous_state_yy_cp;
int yy_get_previous_state_tmp;
yy_get_previous_state() {
  char yy_c;
  if (yy_get_previous_state_yy_cp)
    yy_get_previous_state_tmp = yy_ec[yy_get_previous_state_yy_cp];
  else
    yy_get_previous_state_tmp = 1;
  yy_c = yy_get_previous_state_tmp;
  airac_observe(yy_meta, (unsigned)yy_c);
}
