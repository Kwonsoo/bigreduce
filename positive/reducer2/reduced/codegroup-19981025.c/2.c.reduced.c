char groupbuf[6];
int ingroup_gp;
main() {
  int tmp = ingroup_gp++;
  airac_observe(groupbuf, tmp);
}
