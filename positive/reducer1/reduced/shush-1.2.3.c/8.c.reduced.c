const ifparser_sindex[] = {42, -41};

const ifparser_check[305];
int ifparser_char;
short ifparser_ssp;
ifparser_parse() {
  int yyn;
  yyn += ifparser_char;
  yyn = ifparser_sindex[ifparser_ssp];
  yyn += 256;
  airac_observe(ifparser_check, yyn);
  ifparser_char = -1;
}
