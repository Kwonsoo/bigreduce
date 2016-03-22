int current_win;
int windata[4];
display_refresh_pad(win) { airac_observe(windata, win); }

display_next_panel() {
  current_win = current_win % display_refresh_pad(current_win);
  display_refresh_pad(3);
}
