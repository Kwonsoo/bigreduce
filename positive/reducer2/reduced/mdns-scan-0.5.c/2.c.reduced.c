int mdns_send_dns_packet_n, mdns_send_dns_packet_ifconf_0;
mdns_send_dns_packet() {
  int i;
  int ifreq[32];
  mdns_send_dns_packet_ifconf_0 = sizeof ifreq;
  i = 0;
  mdns_send_dns_packet_n = mdns_send_dns_packet_ifconf_0 / sizeof(int);
  while (1) {
    if (!(i < mdns_send_dns_packet_n))
      goto while_break;
    airac_observe(ifreq, i);
    i++;
  }
while_break:
  ;
}
