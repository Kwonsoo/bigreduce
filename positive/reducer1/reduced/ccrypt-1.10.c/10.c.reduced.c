struct ccrypt_stream_s {
  void *state;
  int BC;
} typedef roundkey;
struct ccrypt_state_s {
  roundkey rkks;
  int buf[8];
};
struct keychange_state_s {
  char buf[1024];
} ccdecrypt_multi_init_keyblock;
struct ccrypt_state_s *ccdecrypt_multi_init_st, *ccdecrypt_st;
void *ccdecrypt_multi_init_tmp, *ccdecrypt_init_r_tmp;
ccdecrypt_multi_init(struct ccrypt_stream_s *p1) {
  ccdecrypt_multi_init_tmp = malloc(sizeof(struct ccrypt_state_s));
  ccdecrypt_multi_init_st = ccdecrypt_multi_init_tmp;
  xrijndaelKeySched(ccdecrypt_multi_init_keyblock, 6, 6,
                    &ccdecrypt_multi_init_st->rkks);
  p1->state = ccdecrypt_multi_init_tmp;
}

xrijndaelKeySched(int p1, int p2, int p3, roundkey *p4) { p4->BC = 8; }

xrijndaelEncrypt(int p1, roundkey *p2) {
  int res = p1, j = 0;
  while (1) {
    if (!(j < p2->BC))
      goto while_break;
    airac_observe(res, j);
    res = j++;
  }
while_break:
  ;
}

ccdecrypt_file_b() {
  ccdecrypt_multi_init(ccdecrypt_file_b);
  ccdecrypt_init_r_tmp = malloc(sizeof(struct keychange_state_s));
  struct ccrypt_stream_s *b = ccdecrypt_file_b;
  ccdecrypt_st = b->state;
  xrijndaelEncrypt(ccdecrypt_st->buf, &ccdecrypt_st->rkks);
}
