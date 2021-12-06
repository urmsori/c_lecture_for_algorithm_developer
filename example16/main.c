#include <stdint.h>
#include <stdio.h>

struct foo{
    uint8_t m1;
    uint32_t m2;
};

#pragma pack(push, 1)
struct foo1{
    uint8_t m1;
    uint32_t m2;
};
#pragma pack(pop)

#pragma pack(push, 2)
struct foo2{
    uint8_t m1;
    uint32_t m2;
};
#pragma pack(pop)

#pragma pack(push, 4)
struct foo4{
    uint8_t m1;
    uint32_t m2;
};
#pragma pack(pop)

int main(void){
    struct foo a = {};
    a.m1 = 1;
    a.m2 = 10;

    struct foo1 a1 = {};
    struct foo2 a2 = {};
    struct foo4 a4 = {};

    printf("sizeof(a) : %ld\n", sizeof(a));
    printf("sizeof(a1) : %ld\n", sizeof(a1));
    printf("sizeof(a2) : %ld\n", sizeof(a2));
    printf("sizeof(a4) : %ld\n", sizeof(a4));

    size_t a_diff = ((size_t)(&(a.m2)) - (size_t)(&(a.m1)));
    size_t a1_diff = ((size_t)(&(a1.m2)) - (size_t)(&(a1.m1)));
    size_t a2_diff = ((size_t)(&(a2.m2)) - (size_t)(&(a2.m1)));
    size_t a4_diff = ((size_t)(&(a4.m2)) - (size_t)(&(a4.m1)));
    
    printf("a diff : %ld\n", a_diff);
    printf("a1 diff : %ld\n", a1_diff);
    printf("a2 diff : %ld\n", a2_diff);
    printf("a4 diff : %ld\n", a4_diff);

    uint8_t* b= (uint8_t*)&a;
    uint8_t b0 = b[0];
    uint8_t b1 = b[1];
    uint8_t b2 = b[2];
    uint8_t b3 = b[3];
    printf("b0: %d\n", b0);
    printf("b1: %d\n", b1);
    printf("b2: %d\n", b2);
    printf("b3: %d\n", b3);

    return 0;
}