const ifparser_name[267];
int ifparser_char;
ifparser_parse() {
  ifparser_char = ifparser_lex();
  if (ifparser_char < 0)
    ifparser_char = 0;
  if (ifparser_char <= 266)
    airac_observe(ifparser_name, ifparser_char);
}
