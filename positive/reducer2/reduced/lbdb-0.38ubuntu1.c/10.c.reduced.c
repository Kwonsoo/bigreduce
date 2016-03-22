long parse_route_addr_tokenlen;
parse_route_addr_s() {
  char token[256];
  long tmp___1;
  while (1) {
    if (parse_route_addr_s)
      goto while_break___0;
    parse_route_addr_tokenlen++;
  }
while_break___0:
  if (parse_route_addr_tokenlen < sizeof token - 1)
    tmp___1 = parse_route_addr_tokenlen;
  airac_observe(token, tmp___1);
}
