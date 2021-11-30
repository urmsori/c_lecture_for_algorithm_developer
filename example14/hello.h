#ifndef HELLO_H_
#define HELLO_H_

static inline int plus_static_inline(int a, int b) {
  int i;
  int ret = 0;
  for (i = 0; i < b; i++) {
    ret += a + b;
  }
  return ret;
}

extern inline int plus_extern_inline(int a, int b) {
  int i;
  int ret = 0;
  for (i = 0; i < b; i++) {
    ret += a + b;
  }
  return ret;
}

#endif