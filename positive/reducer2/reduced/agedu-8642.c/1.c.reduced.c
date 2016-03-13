const minutes[5];
int minutes_0;
long round_and_format_age_ret;
round_and_format_age_newret() {
  int i = 0;
  while (1) {
    if (!(i < sizeof minutes / sizeof minutes_0))
      goto while_break;
    airac_observe(minutes, i);
    round_and_format_age_ret = i++;
  }
while_break:
  ;
}
