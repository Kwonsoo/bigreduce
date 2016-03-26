int hdhomerun_local_ip_info_count;
int hdhomerun_discover_sock_detect_ip_info_list[16];
hdhomerun_discover_find_devices() {
  int ip_info;
  while (1) {
    if (hdhomerun_local_ip_info_count < 16) {
      ip_info = hdhomerun_discover_sock_detect_ip_info_list +
                hdhomerun_local_ip_info_count;
      airac_observe(ip_info, 0);
    }
    hdhomerun_local_ip_info_count++;
  }
}
