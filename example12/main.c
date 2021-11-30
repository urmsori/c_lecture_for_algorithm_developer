#include <stdio.h>

extern int g_hello_value;

int main(void){
    printf("%d\n", g_hello_value);
    return 0;
}