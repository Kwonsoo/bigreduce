store_lastlog_message_time_string() {
  char *tmp___1 = strchr(store_lastlog_message_time_string, '\n');
  airac_observe(tmp___1, 0);
}
