#include <stdio.h>

int main() {
  int fahr;

  printf("%10s %7s\n", "Fahrenheit", "Celsius");

  for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
    printf("%10d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }
}