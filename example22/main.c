#include <stdio.h>
#include <stdlib.h>

int main(void) {
  const int val1 = 0;
  //   val1 = 1;
  int const val2 = 0;
  //   val2 = 1;

  int* a = malloc(2);  // 기본형
  a[0] = 1;
  a = 0x300;

  const int* b = malloc(2);  // int를 const
  //   b[0] = 2;
  b = 0x300;

  int const* c = malloc(2);  // int를 const
  //   c[0] = 3;
  c = 0x300;

  int* const d = malloc(2);  // int*를 const
  d[0] = 4;
  //   d = 0x300;

  const int* const e = malloc(2);  // int와 int*를 const
  //   e[0] = 5;
  //   e = 0x300;

  return 0;
}