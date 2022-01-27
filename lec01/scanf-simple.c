// To run, specify data separated by spaces
// test 4 5.7
// test 4 5.700000
#include <stdio.h>

int main() {
  int x;
  float y;
  char s[100];
  scanf("%s%d%f", s, &x, &y); // don't include newline
  printf("%s %d %f\n", s, x, y);
  return 0;
}

