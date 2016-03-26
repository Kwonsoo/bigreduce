int yylex_yy_act, maxtoken, string_tmp___2, comment_c;
char token_buffer, string_tmp___1;
void *init_lex_tmp, *extend_token_buffer_tmp, *xrealloc_newptr, *xrealloc_ptr;
char *comment_p;
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

void *xrealloc(p1) {
  xrealloc_newptr = realloc(xrealloc_ptr, p1);
  return xrealloc_newptr;
}

main() {
  while (1) {
    if (yylex_yy_act)
      goto case_44;
    char *tmp___0;
    comment_p = token_buffer;
    comment_p++;
    tmp___0 = comment_p;
    airac_observe(tmp___0, 0);
    while (1) {
      if (comment_c)
        goto while_break;
      if (comment_p)
        extend_token_buffer();
    }
  while_break:
    goto switch_break;
  case_44:
    string();
  switch_break:
    ;
  }
}
