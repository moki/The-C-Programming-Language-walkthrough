#include <stdio.h>

#define MAXLINE 1000

int _getline(char destination[], int limit);
void copy(char to[], char from[]);

int main() {
  int length;
  int max;

  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;

  /* 
     While there is non empty line
     check if its longer than previous one
     if so copies it to longest line characters array.
  */
  while ((length = _getline(line, MAXLINE)) > 0) {
    if (length > max) {
      max = length;
      copy(longest, line);
    }
  }

  /*
     If there was any lines more than 0
     display that line.
  */
  if (max > 0) {
    if (max > MAXLINE) {
      printf("\nStorage limit exceeded by: %d\n", max - MAXLINE);
      printf("String length: %d\n", max);
      printf("%s\n", longest);
    } else {
      printf("Longest line is %s\n", longest);
      printf("It's length is: %d\n", max);
    }
  }

  return 0;
}

/*
   recieves pointer to current line character array and maximum line length
   adds input characters to that array
   returns amount of characters i.e. line length.
*/
int _getline(char destination[], int limit) {
  int character, counter;

  for (counter = 0; counter < limit - 1 && (character = getchar()) != EOF && character != '\n'; ++counter) {
    destination[counter] = character;
  }
  
  if (character == '\n') {
    destination[counter] = character;
    ++counter;
  }

  destination[counter] = '\0';

  return counter;
}

/*
   recieves pointers to two characters arrays
   copies chars from one array to another
   no return value. 
*/
void copy(char to[], char from[]) {
  int counter;

  counter = 0;

  while((to[counter]=from[counter]) != '\0') {
    ++counter;
  }
}