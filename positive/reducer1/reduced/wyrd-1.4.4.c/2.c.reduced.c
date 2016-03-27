int ripoff_l[5];
int ripoff_niv;
ripoff_callback() {
  airac_observe(ripoff_l, ripoff_niv);
  ripoff_niv++;
  ripoff_niv--;
}
