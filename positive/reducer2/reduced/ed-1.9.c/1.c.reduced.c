char sighup_handler_hb[7];
char sighup_handler_s;
long sighup_handler_tmp___0, sighup_handler_tmp___1;
void *sighup_handler_tmp___4;
sighup_handler() {
  int len, tmp___2;
  char *hup;
  sighup_handler_tmp___0 = strlen(sighup_handler_s);
  sighup_handler_tmp___1 = sighup_handler_tmp___0 = len =
      sighup_handler_tmp___1;
  tmp___2 = 1;
  tmp___2 = 0;
  sighup_handler_tmp___4 = malloc(len + tmp___2 + sizeof sighup_handler_hb);
  hup = sighup_handler_tmp___4;
  airac_observe(hup, len);
  sighup_handler();
}
