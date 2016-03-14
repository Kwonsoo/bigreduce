char groupbuf[6];
int ingroup_gp;
ingroup() {
  int tmp___0;
  ingroup_gp++;
  if (ingroup_gp >= 5)
    return;
  tmp___0 = ingroup_gp;
  airac_observe(groupbuf, tmp___0);
}

main() {
  while (1)
    ingroup();
}
