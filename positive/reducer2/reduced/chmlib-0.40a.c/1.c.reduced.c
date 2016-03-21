struct LZXstate {
  char MAINTREE_len[720];
} * LZXinit_tmp;
LZXinit() {
  struct LZXstate *pState;
  int i;
  LZXinit_tmp = malloc(sizeof(struct LZXstate));
  pState = LZXinit_tmp;
  i = 0;
  while (1) {
    if (!(i < 656))
      goto while_break;
    airac_observe(pState->MAINTREE_len, i);
    i++;
  }
while_break:
  ;
}
