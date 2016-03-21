char *serverargv[100];
static *server = serverargv + 2;
int main_start_of_server_args;
main() {
  char **tmp___5 = server;
  airac_observe(tmp___5, 0);
  main_start_of_server_args = server - server;
  server += main_start_of_server_args;
}
