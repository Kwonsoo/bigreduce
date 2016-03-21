int st_oldverhashlinks[4096];
inittable() {
  int f = 0;
  while (1) {
    if (!(f < 4096))
      goto while_break___0;
    airac_observe(st_oldverhashlinks, f);
    f++;
  }
while_break___0:
  ;
}
