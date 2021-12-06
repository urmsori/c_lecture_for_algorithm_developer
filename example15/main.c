#include <stdint.h>
#include <stdio.h>

int main(void){
    uint16_t *a = 0x100;
    uint16_t *b = a+3;
    printf("0x%x\n", b);
}