const ifparser_check[305];
int ifparser_char;
ifparser_parse() {
  int yyn;
  ifparser_char = ifparser_lex();
  yyn = ifparser_char;
  if (yyn >= 0)
    if (yyn <= 304)
      airac_observe(ifparser_check, yyn);
}
