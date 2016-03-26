int yylex_yy_act, maxtoken, string_tmp___2, comment_c;
char token_buffer, string_tmp___1;
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

string() {
  while (1) {
    if (maxtoken)
      extend_token_buffer();
    string_tmp___1 = string_tmp___2;
  }
}

comment() {
  char *tmp = token_buffer;
  airac_observe(tmp, 0);
  while (1) {
    extend_token_buffer();
    if (comment_c)
      if (comment_c)
        return;
  }
}

void *xrealloc(p1) {
  xrealloc_newptr = realloc(xrealloc_ptr, p1);
  return xrealloc_newptr;
}

main() {
  while (1) {
    if (yylex_yy_act)
      goto case_44;
    comment();
    goto switch_break;
  case_44:
    string();
  switch_break:
    ;
  }
}
