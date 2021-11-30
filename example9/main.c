#include <stdio.h>

#include "hi1.h"
#include "hi2.h"

int main(void) {
  struct hi1 h1;
  struct hi2 h2;

  h1.value = 1;
  h2.hi1_value = h1;
  h2.hi2_value = 2;

  printf("%d\n", h2.hi1_value.value);
  printf("%d\n", h2.hi2_value);
  return 0;
}