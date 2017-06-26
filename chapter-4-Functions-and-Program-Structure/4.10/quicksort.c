#include <stdio.h>

void swap(int vs[], int i, int j);
void qsort(int vs[], int left, int right);

int main() {
  int ns[6] = { 5, 4, 3, 2, 1, 0 };

  for (int i = 0; i < 6; i++) {
    printf("%d", ns[i]);
  }
  
  printf("\n");

  qsort(ns, 0, 5);

  for (int i = 0; i < 6; i++) {
    printf("%d", ns[i]);
  }

  printf("\n");
}

void qsort(int vs[], int left, int right) {
  int i, last;

  void swap(int vs[], int i, int j);

  if (left >= right) {
    return ;
  }

  swap(vs, left, (left + right) / 2);

  last = left;

  for (i = left + 1; i <= right; i++) {
    if (vs[i] < vs[left]) {
      swap(vs, ++last, i);
    }
  }

  swap(vs, left, last);
  qsort(vs, left, last - 1);
  qsort(vs, last + 1, right);
}

void swap(int vs[], int i, int j) {
  int t;

  t = vs[i];
  vs[i] = vs[j];
  vs[j] = t; 
}