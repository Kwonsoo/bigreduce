const yytname[54];
short yypact_0 = 7;
int yysyntax_error_tmp___1;
yysyntax_error() {
  int yyx = yypact_0 = yysyntax_error_tmp___1;
  while (1) {
    if (!(yyx < 46))
      goto while_break;
    airac_observe(yytname, yyx);
    yyx++;
  }
while_break:
  ;
}
