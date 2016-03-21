char sha_lock_hmacbuff[20];
int base64_encode_i;
main() { sha_lock(); }

unsigned long base64_encode();
sha_lock() { base64_encode(sha_lock_hmacbuff, 20); }

unsigned long base64_encode(p1, p2) {
  unsigned q;
  int tmp___0;
  q = p1;
  while (1) {
    if (!(base64_encode_i < p2))
      goto while_break;
    tmp___0 = base64_encode_i++;
    airac_observe(q, tmp___0);
  }
while_break:
  ;
}
