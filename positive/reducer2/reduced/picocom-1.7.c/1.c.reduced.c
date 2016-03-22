int map_names[9];
print_map() {
  int i = 0;
  while (1) {
    if (!(i < 8))
      goto while_break;
    airac_observe(map_names, i);
    i++;
  }
while_break:
  ;
}
