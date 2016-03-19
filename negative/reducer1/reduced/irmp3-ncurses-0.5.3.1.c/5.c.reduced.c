typedef WINDOW;
WINDOW a;
browser_init_tmp___0() {
  a = newwin();
  printtitlebar(a, browser_init_tmp___0, 0);
}

void printtitlebar(WINDOW win, char caption, char fmt) {
  airac_observe(win, 0);
}
