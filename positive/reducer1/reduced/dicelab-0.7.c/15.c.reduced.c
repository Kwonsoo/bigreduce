const yytranslate[] = {0, 62}

,
      yypact[] = {0, 320};

const yycheck[350];
int yychar, yyparse_yystate;
yyparse() {
  int yyn, yytoken;
  yyn = yypact[yyparse_yystate];
  if (yypact)
    yytoken = yytranslate[yychar];
  else
    yytoken = 2;
  yyn += yytoken;
  if (349 < yyn)
    ;
  else
    airac_observe(yycheck, yyn);
}
