struct {
  char flag[0][29];
} msg_data___0;
server_send_msg_s_state() {
  int i, j = 0;
  while (1) {
    if (!(j < 29))
      goto while_break___1;
    airac_observe(msg_data___0.flag[i], j);
    j++;
  }
while_break___1:
  ;
}
