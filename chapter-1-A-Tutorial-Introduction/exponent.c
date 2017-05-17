#include <stdio.h>

int exponent(int base, int power) {
  int i, result;

  result = 1;

  for (i = 0; i < power; ++i) {
    result = result * base;
  }

  return result;
}

int main() {
  int i, j;

  for (i = 0; i < 10; ++i) {
    for (j = 0; j <= 20; ++j) {
      printf("%2d in power %2d equals: %10d\n", i, j, exponent(i, j));
    }
  }

  return 0;
}