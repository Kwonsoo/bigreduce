static mark[26];
char main_loop_ibufp;
get_marked_node_addr(c) {
  if (c < 0)
    return;
  if (c >= 26)
    return;
  airac_observe(mark, c);
}

main_loop() {
  main_loop_ibufp = get_tty_line();
  get_marked_node_addr(main_loop_ibufp);
}
