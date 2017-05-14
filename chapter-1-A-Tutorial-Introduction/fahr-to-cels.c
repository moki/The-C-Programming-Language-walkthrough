#include <stdio.h>

/*
   Prints Fahr - Cels table
   from 0 to 300 with 20 step
*/

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0; // lower limit of temperature table /
  upper = 300; // upper limit
  step = 20; // step size
  fahr = lower;
  printf("%10s %7s\n", "Fahrenheit", "Celsius"); // Exercise 1-3
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%10.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}