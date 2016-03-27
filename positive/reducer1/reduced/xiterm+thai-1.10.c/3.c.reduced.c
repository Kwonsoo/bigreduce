struct __anonstruct_TermWin_t_107 {
  short ncol;
} typedef text_t;
struct __anonstruct_TermWin_t_107 TermWin;
int szHint_3 = 80, Create_Windows_fw, scr_refresh_roffset, scr_refresh_doffset,
    scr_refresh_thai_check, scr_refresh_thai_mcolcount;
int *scr_refresh_thai_mcol;
long scr_refresh___lengthofthai_mcol;
void *scr_refresh_tmp___0;
main() {
  TermWin.ncol = szHint_3;
  Create_Windows_fw = szHint_3 = Create_Windows_fw;
  scr_bell();
}

scr_bell() {
  scr_refresh___lengthofthai_mcol = TermWin.ncol + 1;
  scr_refresh_tmp___0 = __builtin_alloca(sizeof *scr_refresh_thai_mcol *
                                         scr_refresh___lengthofthai_mcol);
  scr_refresh_thai_mcol = scr_refresh_tmp___0;
  thai_compare(scr_refresh_doffset, scr_refresh_roffset, scr_refresh_doffset,
               scr_refresh_roffset, scr_refresh_thai_check,
               scr_refresh_thai_mcol, scr_refresh_thai_mcolcount);
}

thai_compare(text_t d, text_t s, int dr, int sr, int result, int mcol,
             int mcolcount) {
  airac_observe(mcol, TermWin.ncol);
}
