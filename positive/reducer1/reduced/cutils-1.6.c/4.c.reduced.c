char token_buffer, comment_p;
int maxtoken;
void *init_lex_tmp, *extend_token_buffer_tmp, *xrealloc_newptr, *xrealloc_ptr;
void *xrealloc();
init_lex() {
  init_lex_tmp = xmalloc();
  token_buffer = init_lex_tmp;
}

extend_token_buffer() {
  maxtoken = maxtoken + 10;
  extend_token_buffer_tmp = xrealloc(maxtoken + 2);
  token_buffer = extend_token_buffer_tmp;
}

directive() {
  char *tmp = token_buffer;
  airac_observe(tmp, 0);
  while (1)
    extend_token_buffer();
}

void *xrealloc(p1) {
  xrealloc_newptr = realloc(xrealloc_ptr, p1);
  return xrealloc_newptr;
}

main() {
  while (1) {
    if (comment_p)
      extend_token_buffer();
    directive();
  }
}
