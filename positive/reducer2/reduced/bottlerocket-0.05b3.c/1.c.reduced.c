const br_cmd_list[9];
int br_execute_inverse, br_execute_rv, br_execute_tmp___3;
br_execute___trans_tmp_1() {
  while (1) {
    if (br_execute_inverse)
      br_execute_tmp___3 = -1;
    int cmd = br_execute_tmp___3;
    if (cmd == 2)
      airac_observe(br_cmd_list, cmd);
    br_execute_rv = br_execute___trans_tmp_1;
  }
}
