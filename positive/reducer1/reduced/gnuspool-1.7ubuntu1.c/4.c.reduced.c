struct {
  char dosuser[15];
} proc_chnghost_resrp;
int askuser_ch, askuser_cnt;
char proc_chnghost_wuser[12];
askuser(unam) {
  int tmp;
  if (askuser_ch)
    goto case_8;
  if (askuser_cnt >= 11)
    goto __Cont;
  tmp = askuser_cnt++;
  airac_observe(unam, tmp);
  goto __Cont;
case_8:
  if (askuser_cnt)
    askuser_cnt--;
__Cont:
  ;
}

proc_chnghost() {
  askuser(proc_chnghost_resrp.dosuser);
  askuser(proc_chnghost_wuser);
}
