struct {
  int files[16];
} typedef parse_buf;
int find_file_i, find_file_tmp, parse_tmp___3;
parse_buf main_p;
find_file(parse_buf *p1) {
  while (1) {
    if (!(find_file_i < 16))
      goto while_break;
    if (find_file_tmp)
      return p1->files + find_file_i;
    find_file_i++;
  }
while_break:
  ;
}

parse(p1) {
  parse_tmp___3 = find_file(p1);
  int pfile = parse_tmp___3;
  airac_observe(pfile, 0);
}

main() { parse(&main_p); }
