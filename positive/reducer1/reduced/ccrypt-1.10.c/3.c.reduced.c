struct __anonstruct_roundkey_28 {
  int shift[2][4];
} * a;
xShiftSubst(shift) {
  int i = 1;
  while (1) {
    if (!(i < 4))
      goto while_break___0;
    airac_observe(shift, i);
    i++;
  }
while_break___0:
  ;
}

xrijndaelEncrypt(struct __anonstruct_roundkey_28 *rkk) {
  xShiftSubst(rkk->shift[0]);
  a = malloc(sizeof(struct __anonstruct_roundkey_28));
  xrijndaelEncrypt(a);
}
