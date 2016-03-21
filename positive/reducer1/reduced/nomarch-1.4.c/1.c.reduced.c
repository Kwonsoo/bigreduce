int st_chr[65536];
inittable() {
  int f = 0;
  while (1) {
    if (!(f < 65536))
      goto while_break;
    airac_observe(st_chr, f);
    f++;
  }
while_break:
  ;
}
