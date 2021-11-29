#include <stdio.h>
#include "hello3.h"
#include "hello2.h"

void hello3(void) {
  printf("Hello3!\n");
  hello2();
  printf("Hello3!\n");
}