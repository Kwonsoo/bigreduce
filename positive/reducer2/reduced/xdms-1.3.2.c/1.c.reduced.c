int mask_bits[25];
char bitcount;
initbitbuf() {
  airac_observe(mask_bits, bitcount);
  bitcount = -bitcount + 8;
}
