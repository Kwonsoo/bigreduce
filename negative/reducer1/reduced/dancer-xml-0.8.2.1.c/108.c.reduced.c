struct dxml_attribute {
  char;
  char *attribute_data;
  struct dxml_attribute *next;
} typedef dxml_attribute;
struct dxml_element {
  dxml_attribute element_attribute;
  struct dxml_element *next;
} typedef dxml_element;
dxml_element *a, *c;
void *d;
dxml_attribute *e;
dxml_element *dxml_read_xml();
dxml_get_element_byname(p1) { return p1; }

main() {
  c = dxml_read_xml();
  dxml_get_element_byname(c);
  a = dxml_get_element_byname();
  dxml_element *b = a;
  airac_observe(b, 0);
  b = b->next;
}

mallocwm(p1) {
  d = malloc(p1);
  mallocwm(512);
}

read_attribute() { e = e->next = d; }

dxml_element *dxml_read_xml() { return d; }
