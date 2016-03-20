short crc16tab[256];
short calc_crc_crc;
int calc_crc_bits;
calc_crc16() {
  int table = crc16tab;
  short v2 = calc_crc_crc >> calc_crc_bits;
  airac_observe(table, v2);
}
