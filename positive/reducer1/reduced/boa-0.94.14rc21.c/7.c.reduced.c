char buf[30];
char *get_commonlog_time_p;
get_commonlog_time() {
  char *tmp___3;
  get_commonlog_time_p = buf + 29;
  get_commonlog_time_p--;
  get_commonlog_time_p--;
  get_commonlog_time_p--;
  tmp___3 = get_commonlog_time_p;
  airac_observe(tmp___3, 0);
}
