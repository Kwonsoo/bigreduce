pty_setowner() {
  int grp = getgrnam();
  airac_observe(grp, 0);
}
