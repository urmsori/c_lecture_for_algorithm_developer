#include <stdint.h>
#include <stdio.h>

union foo{
    uint8_t m8;
    uint16_t m16;
    uint32_t m32;
    uint8_t m8array[4];
    struct inner{
        uint16_t i1;
        uint16_t i2;
    } i;
    float f;
};

int main(void) {
    union foo a;
    a.m32 = 0x12345678;

    printf("0x%x\n", a.m8);
    printf("0x%x\n", a.m16);
    printf("0x%x\n", a.m32);
    printf("0x%x\n", a.m8array[0]);
    printf("0x%x\n", a.m8array[1]);
    printf("0x%x\n", a.m8array[2]);
    printf("0x%x\n", a.m8array[3]);
    printf("0x%x\n", a.i.i1);
    printf("0x%x\n", a.i.i2);
    printf("%f\n", a.f);

    a.f = 0x12345678;
    printf("%d\n", a.m32);
    printf("%f\n", a.f);
}