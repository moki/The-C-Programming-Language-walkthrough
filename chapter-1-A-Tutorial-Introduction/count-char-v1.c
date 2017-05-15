#include <stdio.h>

int main() {
  long nc;
  
  nc = 0;

  printf("Input character:\n");

  while(getchar() != EOF) {
    ++nc;

    printf("When done press ctrl+D on linux or ctrl+Z on win to end.\n");
  }

  printf("%ld\n", nc);
}