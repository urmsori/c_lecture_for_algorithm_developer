#include <stdint.h>
#include <stdio.h>

int main(void) {
  uint8_t a = 0xff;
  uint32_t b = (uint32_t)a;
  printf("0x%x\n", b);

  uint32_t c = 0xabcd1234;
  uint8_t d = (uint32_t)c;
  printf("0x%x\n", d);

  return 0;
}