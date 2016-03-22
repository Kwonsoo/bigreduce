const comp_page[7];
int main_mt_action;
set_compression_mode(p1) {
  if (p1 > 5)
    return;
  int i = p1;
  airac_observe(comp_page, i);
}

main_tmp___9() {
  main_mt_action = -1;
  if (main_tmp___9)
    main_mt_action = 8;
  if (main_mt_action != -1)
    set_compression_mode(main_mt_action);
}
