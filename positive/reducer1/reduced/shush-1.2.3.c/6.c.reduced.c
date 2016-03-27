const ifparser_defred[] = {0, 3};

const ifparser_check[305];
int ifparser_char, ifparser_parse_yystate;
ifparser_parse() {
  int yyn = ifparser_defred[ifparser_parse_yystate];
  ifparser_char = ifparser_lex();
  if (ifparser_char < 0)
    ifparser_char = 0;
  if (yyn) {
    yyn += ifparser_char;
    if (yyn <= 304)
      airac_observe(ifparser_check, yyn);
  }
}
