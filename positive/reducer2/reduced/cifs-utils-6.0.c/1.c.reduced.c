struct {
  char username[33];
} assemble_mountinfo_tmp___7, *assemble_mountinfo_parsed_info;
void *main_tmp___5;
main() {
  strlcpy(assemble_mountinfo_parsed_info, assemble_mountinfo_tmp___7,
          sizeof assemble_mountinfo_parsed_info->username);
  main_tmp___5 = calloc(4096, 1);
  strlcpy(main_tmp___5, "", 4096);
}

void strlcpy(char *d, char s, long bufsize) {
  unsigned len = 0;
  len = bufsize - 1;
  airac_observe(d, len);
}
