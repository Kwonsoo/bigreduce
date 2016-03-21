struct sha_ctx {
  int index;
} main_hash_ctx;
char main_step5, main_hmac_out;
int sha_final_words;
main() {
  sha_update(&main_hash_ctx, main_step5, 4);
  sha_digest(&main_hash_ctx, main_hmac_out);
}

sha_update(struct sha_ctx *p1, int p2, int p3) { p1->index = p3; }

sha_final(struct sha_ctx *p1) {
  int data[16];
  int i;
  sha_final_words = p1->index >> 2;
  if (sha_final_words > 14)
    i = sha_final_words;
  if (!(i < 16))
    goto while_break___1;
  airac_observe(data, i);
while_break___1:
  ;
}

sha_digest(struct sha_ctx *p1, int p2) { sha_final(p1); }
