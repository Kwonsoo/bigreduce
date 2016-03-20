char extract_mangle_next_cursor;
extract_mangle() {
  char *cursor;
  airac_observe(cursor, 0);
  extract_mangle_next_cursor = strchr(cursor, '\n');
  cursor = extract_mangle_next_cursor;
}
