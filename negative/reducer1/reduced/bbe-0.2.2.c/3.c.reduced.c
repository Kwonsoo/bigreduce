struct io_file {
  struct io_file *next;
} * xmalloc_tmp;
char parse_string_p;
int parse_string_i;
xmalloc(p1) { xmalloc_tmp = malloc(p1); }

parse_string() {
  while (1) {
    if (parse_string_p)
      goto while_break;
    parse_string_i++;
  }
while_break:
  xmalloc(parse_string_i);
  struct io_file *new = xmalloc_tmp;
  airac_observe(new, 0);
}
