char extract_mangle_cursor, extract_mangle_next_cursor;
extract_mangle() {
  char *tmp___4;
  extract_mangle_next_cursor = strchr(extract_mangle_cursor, '\n');
  tmp___4 = extract_mangle_next_cursor;
  airac_observe(tmp___4, 0);
}
