char high8[256];
int crc1;
char crcchar_b;
main() {
  unsigned c = crcchar_b ^ crc1;
  airac_observe(high8, c);
}
