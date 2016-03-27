static ripoff_w[5];
int ripoff_niv;
ripoff_callback() {
  ripoff_niv++;
  ripoff_niv--;
  airac_observe(ripoff_w, ripoff_niv);
}
