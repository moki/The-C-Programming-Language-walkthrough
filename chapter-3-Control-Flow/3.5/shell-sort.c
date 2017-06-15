#include <stdio.h>

void shellsort(int vs[], int n);

int main() {
  int n, i;
  n = 10;

  int vs[] = { 101, 27, 93, 45, 78, 30, 18, 7, 10, 39 };

  for (i = 0; i < n; i++) {
    printf("%d%c", vs[i], i != 9 ? ' ' : '\n');
  }

  shellsort(vs, n);

  printf("\n");

  for (i = 0; i < n; i++) {
    printf("%d%c", vs[i], i != 9 ? ' ' : '\n');
  }
}

void shellsort(int vs[], int n) {
  int temp, gap, i, j;

  for (gap = n / 2; gap > 0; gap /= 2) {
    for (i = gap; i < n; i++) {
      for (j = i - gap; j >= 0 && vs[j] > vs[j + gap]; j -= gap) {
        temp = vs[j];
        vs[j] = vs[j + gap];
        vs[j + gap] = temp;
      }
    }
  }
}