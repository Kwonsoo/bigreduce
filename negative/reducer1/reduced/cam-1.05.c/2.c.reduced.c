int *stdscr;
set_screen() {
  airac_observe(stdscr, 0);
  stdscr = initscr();
}
