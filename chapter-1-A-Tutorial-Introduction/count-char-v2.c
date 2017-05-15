#include <stdio.h>

int main() {
  double characters_count;
  int last_character; 

  printf("Input character:\n");

  for (characters_count; (last_character = getchar()) != EOF; ++characters_count) {
    if (last_character != '\n') {
      printf("When done press ctrl+D on linux or ctrl+Z on win to end.\n");
    }
  }
  
  printf("%.0f\n", characters_count);
}
