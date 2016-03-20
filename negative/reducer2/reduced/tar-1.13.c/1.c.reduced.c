void *xmalloc_p;
char get_directory_contents_pointer, get_directory_contents_cursor;
xmalloc(p1) { xmalloc_p = malloc(p1); }

get_directory_contents() {
  int accumulator = xmalloc_p;
  airac_observe(accumulator, 0);
  xmalloc(get_directory_contents_cursor & get_directory_contents_pointer);
}
