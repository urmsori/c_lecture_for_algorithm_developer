#include <stdio.h>

int g_hello_value = 1;
static int g_hello_value2 = 2;

void print_value2(void){
    printf("%d\n", g_hello_value2);
}