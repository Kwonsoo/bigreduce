struct remote {
  char hostname[14];
} proc_addunixhost_resrp;
int askalias_ch, askalias_cnt;
askalias(struct remote *p1) {
  char *hnp;
  int tmp___2;
  hnp = p1->hostname;
  if (askalias_ch)
    goto case_8;
  if (askalias_cnt >= 14)
    goto __Cont;
  tmp___2 = askalias_cnt++;
  airac_observe(hnp, tmp___2);
  goto __Cont;
case_8:
  if (askalias_cnt)
    askalias_cnt--;
__Cont:
  ;
}

proc_addunixhost() { askalias(&proc_addunixhost_resrp); }
