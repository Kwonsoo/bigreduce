b64dec() {
  int i;
  int b64val[4];
  i = 0;
  while (1) {
    if (!(i < 4))
      ;
    else
      airac_observe(b64val, i);
    i++;
  }
}
