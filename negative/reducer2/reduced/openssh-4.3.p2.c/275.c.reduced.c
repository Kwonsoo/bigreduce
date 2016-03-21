auth1_process_password() {
  char *password = packet_get_string();
  airac_observe(password, 0);
}
