telnet_options_0() {
  char sb[1024];
  short sb_len;
  while (1) {
    if (telnet_options_0)
      sb_len = 0;
    if (sb_len < sizeof sb - 1)
      airac_observe(sb, sb_len);
    sb_len = sb_len + 1;
  }
}
