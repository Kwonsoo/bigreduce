const yypact[] = {-5, 320};

const yytable[350];
int yyparse_yystate;
yyparse() {
  int yyn = -yyn;
  yyn = yypact[yyparse_yystate];
  yyn++;
  if (0 <= yyn)
    airac_observe(yytable, yyn);
}
