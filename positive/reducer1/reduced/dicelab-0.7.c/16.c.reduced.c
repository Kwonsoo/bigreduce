const yytranslate[] = {45, 0}

,
      yypact[] = {0, 320};

const yytable[350];
int yychar, yyparse_yystate;
yyparse() {
  int yyn = yypact[yyparse_yystate];
  yyn += yytranslate[yychar];
  if (349 < yyn)
    goto yydefault;
  airac_observe(yytable, yyn);
  yyn = -yyn;
yydefault:
  ;
}
