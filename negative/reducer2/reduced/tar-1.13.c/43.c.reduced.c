uid_to_uname_uid() {
  int passwd = getpwuid();
  airac_observe(passwd, 0);
}
