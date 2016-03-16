char read_config_file_bp;
read_config_file_buf___0() {
  read_config_file_bp = fgets();
  int bp = read_config_file_bp;
  airac_observe(bp, 0);
}
