static ripoff_w[5];
int ripoff_niv;
ripoff_callback() {
  airac_observe(ripoff_w, ripoff_niv);
  ripoff_niv++;
  ripoff_niv--;
}
