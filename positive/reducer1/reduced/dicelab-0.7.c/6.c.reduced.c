char yy_c_buf_p, yy_get_previous_state_yy_cp;
const yy_ec[] = {0, 34};

const yy_meta[35];
int yy_get_previous_state_tmp;
yy_get_previous_state() {
  char yy_c;
  if (yy_c_buf_p)
    yy_get_previous_state_tmp = yy_ec[yy_get_previous_state_yy_cp];
  else
    yy_get_previous_state_tmp = 1;
  yy_c = yy_get_previous_state_tmp;
  airac_observe(yy_meta, (unsigned)yy_c);
}
