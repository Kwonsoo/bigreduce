hdhomerun_discover_find_devices() {
  int ip_info_list[16];
  int index___0 = 0;
  while (1) {
    if (!(index___0 < 16))
      goto while_break___0;
    airac_observe(ip_info_list, index___0);
    index___0++;
  }
while_break___0:
  ;
}
