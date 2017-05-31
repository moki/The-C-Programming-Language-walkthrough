#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int limit);
int spacesamount(int charactersamount, int tabsize);
void detab(char string[], int tabstops);

int main() {
  int length;
  int tabwidth;

  tabwidth = 4;

  char line[MAXLINE];

  while ((length = _getline(line, MAXLINE)) > 0) {
    detab(line, tabwidth);
  }

  return 0;
}

int _getline(char string[], int limit) {
  int character, counter;

  counter = 0;

  while (counter < limit - 1 && (character = getchar()) != EOF && character != '\n') {
    string[counter] = character;

    ++counter;
  }

  if (character == '\n') {
    string[counter] = character;

    ++counter;
  }

  string[counter] = '\0';

  return counter;
}

// void detab(char before[], char after[], int tabstops) {
//   int character, counter, newcounter;

//   counter = 0;
//   newcounter = 0;

//   while ((character = before[counter] ) != '\0') {
//     int tabscounter;

//     tabscounter = 0;

//     if (character == '\t') {
//       while (tabscounter < (tabstops - (newcounter % tabstops))) {
//         after[counter + tabscounter] = '#';
//         ++tabscounter;
//       }
//       newcounter = counter + tabscounter;
//     } else {
//       after[newcounter] = before[counter];
//       ++newcounter;
//     }
//     ++counter;
//   }
// }

// void detab(char before[], char after[], int tabstops) {
//   int i, j, k, spaces;

//   i = j =  0;

//   while (before[i] != '\0') {
    
//     if (before[i] == '\t') {
//       spaces = spacesamount(j, tabstops);

//       while (k < spaces) {
//         after[j] = '#';
//         ++k;
//         ++j;
//       }
//     } else {
//       after[j] = before[i];
//       ++j;
//     }
    
//     ++i;
//   }
// }

void detab(char string[], int tabstops) {
  int i, j, k, spaces;

  i = j = 0;

  while (string[i] != '\0') {
    if (string[i] == '\t') {
      spaces = spacesamount(j, tabstops);

      k = 0;

      while (k < spaces) {
        putchar('#');
        ++k;
        ++j;
      }

    } else {
      putchar(string[i]);
      ++j;
    }
    
    ++i;
  }
}

int spacesamount(int charactersamount, int tabsize) {
  return tabsize - (charactersamount % tabsize);
}