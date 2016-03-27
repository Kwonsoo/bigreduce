struct longstr_s {
  struct longstr_s *next;
} * working_longstr;
struct port_info {
  struct port_info *next;
  struct port_info *new_config;
} * finish_shutdown_port_curr___0, *finish_shutdown_port_prev___0;
void *handle_longstr_tmp___1;
main() {
  handle_longstr_tmp___1 = malloc(sizeof working_longstr);
  working_longstr = working_longstr->next = handle_longstr_tmp___1;
  struct longstr_s *longstr = handle_longstr_tmp___1;
  airac_observe(longstr, 0);
  longstr = longstr->next;
}

finish_shutdown_port(p1) {
  if (finish_shutdown_port_curr___0 != 0)
    if (finish_shutdown_port_prev___0 == 0)
      finish_shutdown_port_prev___0->next = p1;
  finish_shutdown_port(finish_shutdown_port_curr___0->next);
}
