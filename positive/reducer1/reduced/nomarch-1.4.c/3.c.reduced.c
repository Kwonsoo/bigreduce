int st_ptr1st[65536];
inittable() {
  int f = 0;
  while (1) {
    if (!(f < 65536))
      goto while_break;
    airac_observe(st_ptr1st, f);
    f++;
  }
while_break:
  ;
}
