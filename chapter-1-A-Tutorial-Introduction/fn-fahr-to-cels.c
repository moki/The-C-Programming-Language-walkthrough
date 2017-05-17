#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

double converttemp(int fahr) {
  return fahr, (5.0 / 9.0) * (fahr - 32);
}

int main() {
  int fahr;

  printf("%10s %7s\n", "Fahrenheit", "Celsius");

  for (fahr = LOWER; fahr < UPPER; fahr = fahr + STEP) {
    printf("%10d %6.1f\n", converttemp(fahr));
  }
}