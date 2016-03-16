struct io_file {
  struct io_file *next;
} * xmalloc_tmp;
char parse_command_token_2;
int parse_command_tmp___17;
parse_command() {
  parse_command_tmp___17 = strlen(parse_command_token_2);
  xmalloc_tmp = malloc(parse_command_tmp___17);
  struct io_file *curr;
  airac_observe(curr, 0);
  curr = xmalloc_tmp;
}
