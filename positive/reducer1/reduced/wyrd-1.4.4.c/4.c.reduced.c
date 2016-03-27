int ripoff_l[5];
int ripoff_niv;
ripoff_callback() {
  ripoff_niv++;
  ripoff_niv--;
  airac_observe(ripoff_l, ripoff_niv);
}
