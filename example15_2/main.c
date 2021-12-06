#include <stdint.h>
#include <stdio.h>

int main() {
  uint32_t a[4];
  printf("a\t%p\n", a);
  printf("&a\t%p\n", &a);
  printf("a+1\t%p\n", a + 1);
  printf("&a+1\t%p\n", &a + 1);
  printf("sizeof(a)\t0x%lx\n", sizeof(a));

  return 0;
}