int dev_ind[25];
init_sliders() {
  int dev_nr = 0;
  while (1) {
    if (!(dev_nr < 25))
      ;
    else
      airac_observe(dev_ind, dev_nr);
    dev_nr++;
  }
}
