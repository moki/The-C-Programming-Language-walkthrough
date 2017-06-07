#include <stdio.h>

int binary(int v, int vs[], int n);
int binary_weird(int v, int vs[], int n);

int main() {
  const int ARRAY_SIZE = 10;
  
  int array[ARRAY_SIZE];

  int i;

  for (i = 0; i < ARRAY_SIZE; ++i) {
    array[i] = i;
  }

  printf("%d\n", binary_weird(-1, array, ARRAY_SIZE));

  return 0;
}

int binary(int v, int vs[], int n) {
  int left, right, mid;

  left = 0;

  right = n - 1;

  while (left <= right) {
    mid = (left + right) / 2;

    if (v == vs[mid]) {
      return mid;
    } else if (v < vs[mid]) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }
}

int binary_weird(int v, int vs[], int n){
  int left, right, mid;

  left = 0;

  right = n - 1;

  while (left <= right && vs[mid] != v) {
    mid = (left + right) / 2;

    if (vs[mid] > v) {
      right = mid - 1;
    } else {
      left = mid + 1;
    }
  }

  if (vs[mid] == v) {
    return mid;
  }

  return -1;
}