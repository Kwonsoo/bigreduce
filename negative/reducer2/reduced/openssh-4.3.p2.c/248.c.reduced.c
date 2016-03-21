int allowed_user_spw;
allowed_user_pwallowed_user() {
  allowed_user_spw = getspnam();
  int spw = allowed_user_spw;
  airac_observe(spw, 0);
}
