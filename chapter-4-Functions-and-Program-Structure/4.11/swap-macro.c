#include <stdio.h>

#define swap(t, x, y) \
  x += y; \
  y = x - y; \
  x -= y;

int main() {
  int i, j;

  i = 1;
  j = 2;

  printf("i: %d, j: %d\n", i, j);

  swap(int, i, j);

  printf("i: %d, j: %d\n", i, j);
}