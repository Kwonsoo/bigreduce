char **common_cgi_env;
short common_cgi_env_count;
void *create_common_env_tmp;
create_common_env() {
  int i;
  create_common_env_tmp = calloc(7, sizeof(char *));
  common_cgi_env = create_common_env_tmp;
  common_cgi_env_count = common_cgi_env_count + 1 + 1;
  common_cgi_env_count = common_cgi_env_count + common_cgi_env_count + 1 + 1;
  i = 0;
  while (1) {
    if (!(i < common_cgi_env_count))
      goto while_break;
    airac_observe(common_cgi_env, i);
    i++;
  }
while_break:
  create_common_env_tmp =
      realloc(common_cgi_env, common_cgi_env_count + 2 * sizeof(char *));
}
