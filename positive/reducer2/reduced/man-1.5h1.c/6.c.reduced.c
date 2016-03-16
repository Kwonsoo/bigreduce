char *default_config_files[7];
char default_config_files_0;
read_config_file_config() {
  int i = 0;
  while (1) {
    if (!(i < sizeof default_config_files / sizeof &default_config_files_0))
      goto while_break;
    airac_observe(default_config_files, i);
    if (read_config_file_config)
      i++;
  }
while_break:
  ;
}
