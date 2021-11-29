#include <stdio.h>
#include "hello2.h"
void hello3(void);

int main(void) {
  hello2();
  hello3();
  printf("Hello World!\n");
  return 0;
}