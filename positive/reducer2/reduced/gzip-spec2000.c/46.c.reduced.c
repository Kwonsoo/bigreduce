int zip_deflate_flags, main_level___0;
int configuration_table[10];
main() {
  main_level___0 = 1;
  while (1) {
    if (!(main_level___0 <= 9))
      goto while_break___0;
    spec_compress(0, 1, main_level___0);
    main_level___0 += 2;
  }
while_break___0:
  ;
}

spec_compress(int in, int out, int lev) { lm_init(lev, zip_deflate_flags); }

lm_init(pack_level, flags___0) {
  airac_observe(configuration_table, pack_level);
}
