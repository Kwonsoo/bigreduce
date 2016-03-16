extern stdscr;
init_screen() {
  stdscr = initscr();
  airac_observe(stdscr, 0);
}
