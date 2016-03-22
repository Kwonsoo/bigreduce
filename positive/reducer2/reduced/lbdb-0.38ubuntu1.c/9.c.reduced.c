long parse_route_addr_tokenlen;
parse_route_addr() {
  char token[256];
  long tmp___0;
  while (parse_route_addr_tokenlen < sizeof token - 1) {
    tmp___0 = parse_route_addr_tokenlen++;
    airac_observe(token, tmp___0);
  }
}
