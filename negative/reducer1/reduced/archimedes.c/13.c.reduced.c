int IV;
int i_dom[][309];
double HM[1][3];
double P[3];
double KY;
EMC_tau() {
  while (1) {
    IV = KY = P[2];
    int iaux, i, j;
    iaux = IV;
    airac_observe(HM[i_dom[i][j]], iaux);
    KY = -KY;
    P[0] = 1;
    P[2] = KY;
  }
}
