struct {
  int BC;
} typedef roundkey;
struct ccrypt_state_s {
  roundkey rkks;
} * ccencrypt_init_st;
void *ccencrypt_init_tmp;
struct ccrypt_state_s *ccdecrypt_st;
int xrijndaelDecrypt_block2[8];
xrijndaelKeySched(roundkey *p1) { p1->BC = 8; }

xrijndaelDecrypt(roundkey *p1) {
  int res = xrijndaelDecrypt_block2, j = 0;
  while (1) {
    if (!(j < p1->BC))
      goto while_break;
    airac_observe(res, j);
    res = j++;
  }
while_break:
  ;
}

ccencrypt_file_b() {
  int b = ccencrypt_init_tmp = malloc(sizeof(struct ccrypt_state_s));
  ccencrypt_init_st = ccencrypt_init_tmp;
  xrijndaelKeySched(&ccencrypt_init_st->rkks);
  ccdecrypt_st = b;
  xrijndaelDecrypt(&ccdecrypt_st->rkks);
}
