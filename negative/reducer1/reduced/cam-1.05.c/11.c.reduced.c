int *stdscr;
draw_slider() {
  airac_observe(stdscr, 0);
  stdscr = initscr();
}
