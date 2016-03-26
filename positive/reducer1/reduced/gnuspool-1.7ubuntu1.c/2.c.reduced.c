struct {
  char hostname[14];
  char dosuser[15];
} proc_addwinhost_resrp;
enum { IPADDR_NAME } askhname_ch;
int askhname_cnt;
askhname(hnp) {
  int tmp;
  if (askhname_ch)
    goto case_8;
  if (askhname_cnt >= 14)
    goto __Cont;
  tmp = askhname_cnt++;
  airac_observe(hnp, tmp);
  goto __Cont;
case_8:
  if (askhname_cnt)
    askhname_cnt--;
__Cont:
  ;
}

proc_addwinhost() {
  askhname(proc_addwinhost_resrp.hostname);
  askhname(proc_addwinhost_resrp.dosuser);
}
