struct {
  int *cmds;
} typedef br_control_info;
char br_cmd_list[9];
int main_house, main_fd, br_execute_i, br_execute___trans_tmp_1,
    br_execute_tmp___4, br_realloc_cmds_numcmds;
br_control_info *main_cinfo;
void *br_realloc_cmds_tmp___0;
br_cmd(cmd) {
  if (cmd < 0)
    return;
  airac_observe(br_cmd_list, cmd);
}

main() {
  main_cinfo = br_new_control_info();
  br_add_cmd(main_cinfo, 7, main_house, 0);
  br_execute(main_fd, main_cinfo);
}

br_execute(int d, br_control_info *cinfo) {
  if (br_execute_i) {
    br_execute___trans_tmp_1 = -1;
    br_execute_tmp___4 = br_execute___trans_tmp_1;
  } else
    br_execute_tmp___4 = *cinfo->cmds;
  br_cmd(br_execute_tmp___4);
}

br_realloc_cmds(br_control_info *cinfo) {
  br_realloc_cmds_tmp___0 = realloc(cinfo, br_realloc_cmds_numcmds);
  cinfo->cmds = br_realloc_cmds_tmp___0;
}

br_add_ul_cmd(br_control_info *cinfo, int cmd) {
  br_realloc_cmds(cinfo);
  *cinfo->cmds = cmd;
}

br_add_cmd(br_control_info *cinfo, int cmd, int house, int dev) {
  br_add_ul_cmd(cinfo, cmd);
}
