/*
   Exercise 1-4 Solution
   Celsius To Fahrenheit table
*/

#include <stdio.h>

int main() {
  float fahr, cels;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  cels = lower;
  printf("%6s %10s\n", "Celsius", "Fahrenheit");
  while (cels <= upper) {
    fahr = cels * (9.0 / 5.0) + 32.0;
    printf("%6.0f %10.0f\n", cels, fahr);
    cels = cels + step;
  }
}