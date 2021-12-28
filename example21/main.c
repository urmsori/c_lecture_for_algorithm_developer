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
  struct struct_convert{
    float f1;
    float f2;
  };
  struct struct_convert* sc = (struct struct_convert*) raw;

  printf("%f\n", sc->f1);
  printf("%f\n", sc->f2);

  // Using Union
  union union_convert{
    uint8_t m8array[8];
    float farray[2];
  };
  union union_convert* uc = (union union_convert*) raw;

  printf("%f\n", uc->farray[0]);
  printf("%f\n", uc->farray[1]);

  // 주소값 비교
  printf("%p\n", raw);
  printf("%p\n", uc->m8array);
  printf("%p\n", uc->farray);

  return 0;
}
