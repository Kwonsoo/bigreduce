int *current_header;
int read_header_header;
read_and() { airac_observe(current_header, 0); }

read_header() {
  read_header_header = find_next_block();
  current_header = read_header_header;
}
