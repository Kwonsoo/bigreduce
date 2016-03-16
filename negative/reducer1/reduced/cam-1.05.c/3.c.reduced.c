int *stdscr;
draw_rec_lamp() {
  airac_observe(stdscr, 0);
  stdscr = initscr();
}
