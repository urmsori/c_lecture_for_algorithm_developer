#include <stdio.h>

extern int g_hello_value;
int g_hello_value2 = 3;

void print_value2(void);

int main(void){
    printf("%d\n", g_hello_value);
    print_value2();
    printf("%d\n", g_hello_value2);
    return 0;
}