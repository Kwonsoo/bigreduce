const yytranslate[288];
int yychar;
yyparse() {
  yychar = yylex();
  if (yychar <= 0)
    ;
  else if (yychar <= 287)
    airac_observe(yytranslate, yychar);
}
