int his[64];
short recverr_tmp___1;
recverr() {
  int slot;
  recverr_tmp___1 = ntohs();
  slot = recverr_tmp___1;
  if (slot >= 0)
    if (slot < 63)
      airac_observe(his, slot);
}
