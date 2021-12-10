#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  uint8_t a[8];
  a[0] = 0x12;
  a[1] = 0x34;
  a[2] = 0x56;
  a[3] = 0x78;
  a[4] = 0x9A;
  a[5] = 0xBC;
  a[6] = 0xDE;
  a[7] = 0xF0;

  uint16_t b;
  memcpy(&b, a, 2);
  printf("0x%x\n", b);

  uint32_t c;
  memcpy(&c, a, 4);
  printf("0x%x\n", c);
  
  uint64_t d;
  memcpy(&d, a, 8);
  printf("0x%lx\n", d);
}