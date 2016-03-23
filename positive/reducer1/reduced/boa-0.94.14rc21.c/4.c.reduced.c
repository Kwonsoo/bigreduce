char buf[30];
char *get_commonlog_time_p;
get_commonlog_time() {
  char *tmp;
  get_commonlog_time_p = buf + 29;
  tmp = get_commonlog_time_p--;
  airac_observe(tmp, 0);
}
