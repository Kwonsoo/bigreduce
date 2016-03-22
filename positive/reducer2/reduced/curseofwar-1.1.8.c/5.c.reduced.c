struct {
  char flag[40];
} msg_data___0;
server_send_msg_s_state() {
  int i = 0;
  while (1) {
    if (!(i < 40))
      goto while_break___0;
    airac_observe(msg_data___0.flag, i);
    i++;
  }
while_break___0:
  ;
}
