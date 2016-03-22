char display_supported_drives_p_0;
void *display_supported_drives_tmp___1;
long display_supported_drives_tmp___3;
display_supported_drives() {
  unsigned line;
  int len = 8;
  display_supported_drives_tmp___1 = malloc(len + 1);
  line = display_supported_drives_tmp___1;
  airac_observe(line, len);
  display_supported_drives_tmp___3 = strlen(display_supported_drives_p_0);
  len = display_supported_drives_tmp___3;
}
