#include <stdio.h>

void hello2(void);

void hello3(void) {
  printf("Hello3!\n");
  hello2();
  printf("Hello3!\n");
}