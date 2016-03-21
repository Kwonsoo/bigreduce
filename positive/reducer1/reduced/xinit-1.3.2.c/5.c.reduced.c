char *serverargv[100];
char **server = serverargv + 2;
main() {
  char **tmp___8;
  server++;
  tmp___8 = server;
  airac_observe(tmp___8, 0);
  server += -1;
}
