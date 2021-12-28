#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  // 1.1f, 2.2f
  uint8_t raw[8] = {0xCD, 0xCC, 0x8C, 0x3F, 0xCD, 0xCC, 0x0C, 0x40};

  // Using Pointer type casting operator
  float* f_ptr = (float*)raw;
  printf("%f\n", f_ptr[0]);
  printf("%f\n", f_ptr[1]);

  // Using Struct
  struct {
    float f1;
    float f2;
  } struct_convert;
  memcpy(&struct_convert, raw, 8);

  printf("%f\n", struct_convert.f1);
  printf("%f\n", struct_convert.f2);

  // Using Union
  union {
    uint8_t m8array[8];
    float farray[2];
  } union_convert;
  memcpy(union_convert.m8array, raw, 8);

  printf("%f\n", union_convert.farray[0]);
  printf("%f\n", union_convert.farray[1]);

  return 0;
}
