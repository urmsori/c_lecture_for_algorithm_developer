#include <stdio.h>
#include "hello.h"

int plus_func(int a, int b) {
  int i;
  int ret = 0;
  for (i = 0; i < b; i++) {
    ret += a + b;
  }
  return ret;
}

int main(void) {
  int val1 = plus_func(1, 2);
  int val2 = plus_static_inline(1, 2);
  int val3 = plus_extern_inline(1, 2);
  printf("%d, %d, %d\n", val1, val2, val3);
  return 0;
}