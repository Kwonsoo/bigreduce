int *stdscr;
draw_handle() {
  airac_observe(stdscr, 0);
  stdscr = initscr();
}
