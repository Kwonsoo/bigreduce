const yytranslate[] = {45, 0};

const yytname[54];
int yysyntax_error_tmp, yysyntax_error_yychar___0;
yyparse() {
  int yytype;
  if (yysyntax_error_yychar___0)
    yysyntax_error_tmp = yytranslate[yysyntax_error_yychar___0];
  else
    yysyntax_error_tmp = 2;
  yytype = yysyntax_error_tmp;
  airac_observe(yytname, yytype);
}
