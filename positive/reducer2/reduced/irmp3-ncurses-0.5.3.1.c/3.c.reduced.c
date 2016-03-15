enum repeat { RP_ALL } const repeatnames[3];
int handle_230_info_tmp___22;
struct playerstate {
  enum repeat repeat;
} main() {
  init_ui();
}
struct playerstate playerstate, playerstate = {};

init_ui() { airac_observe(repeatnames, playerstate.repeat); }

handle_230_info() {
  handle_230_info_tmp___22 = atoi();
  playerstate.repeat = handle_230_info_tmp___22;
}
