tunnel_add_count() {
  int pos;
  char field[4];
  pos = 0;
  if (tunnel_add_count)
    pos++;
  airac_observe(field, pos);
}
