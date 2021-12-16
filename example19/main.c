#include <stdint.h>
#include <stdio.h>

int main(void) {
  uint8_t a = 0xff;
  uint32_t b = (uint32_t)a;
  printf("0x%x\n", b);

  uint32_t c = 0xabcd1234;
  uint8_t d = (uint32_t)c;
  printf("0x%x\n", d);

  uint8_t small[8];
  small[0] = 0x0;
  small[1] = 0x1;
  small[2] = 0x2;
  small[3] = 0x3;
  small[4] = 0x4;
  small[5] = 0x5;
  small[6] = 0x6;
  small[7] = 0x7;

  uint32_t* big = (uint32_t*)small;
  printf("0x%x\n", big[0]);
  printf("0x%x\n", big[1]);

  return 0;
}