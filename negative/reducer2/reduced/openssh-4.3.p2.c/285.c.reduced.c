auth_shadow_pwexpired() {
  int spw = getspnam();
  airac_observe(spw, 0);
}
