int getpwnamallow_pw;
getpwnamallow_user() {
  getpwnamallow_pw = getpwnam();
  int pw = getpwnamallow_pw;
  airac_observe(pw, 0);
}
