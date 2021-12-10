#include <stdio.h>

int main(void) {
  float a[2];
  a[0] = 100;
  a[1] = 200;
  int* b = (int*)a;
  printf("%d\n", b[0]);
  printf("%d\n", b[1]);
  return 0;
}