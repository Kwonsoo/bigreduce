struct io_file {
  struct io_file *next;
} * xmalloc_tmp, *set_input_file_curr_0;
char parse_command_token_2;
int parse_command_tmp___17;
parse_command() {
  parse_command_tmp___17 = strlen(parse_command_token_2);
  xmalloc_tmp = malloc(parse_command_tmp___17);
}

set_input_file() {
  struct io_file *curr = xmalloc_tmp = set_input_file_curr_0;
  airac_observe(curr, 0);
}
