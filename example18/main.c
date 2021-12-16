#include <stdio.h>

int main(void) {
  float a[2];
  a[0] = 1;
  a[1] = 2;
  int* b = (int*)a;
  printf("%d\n", b[0]);
  printf("%d\n", b[1]);
  return 0;
}