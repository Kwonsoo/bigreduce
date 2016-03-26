const yyr2[66];
const yydefact[] = {65, 0};

int yyparse_yystate;
yyparse_yyerrstatus() {
  int yyn = -yyn;
  yyn = yydefact[yyparse_yystate];
  if (yyn == 0)
    goto yyerrlab;
  airac_observe(yyr2, yyn);
yyerrlab:
  ;
}
