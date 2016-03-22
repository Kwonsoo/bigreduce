enum { true } mark[26];
char main_loop_ibufp;
mark_line_node(c) {
  if (c < 0)
    return;
  if (c >= 26)
    return;
  airac_observe(mark, c);
}

main_loop() {
  main_loop_ibufp = get_tty_line();
  mark_line_node(main_loop_ibufp);
}
