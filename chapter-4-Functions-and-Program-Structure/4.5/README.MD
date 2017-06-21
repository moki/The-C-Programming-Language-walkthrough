## 4.5 Header Files
Let us now actually consider dividing the calculator program into several source files.

### Key points:

1. Structure

      #### calc.h - headers
      
      #### main.c - main entrypoint
      
      #### getop.c - getop function
      
      #### stack.c - push, pop and their variables
      
      #### getch.c - getch and ungetch

### Examples:

#### Mini grep

  Refer to the code in **mini-grep.c**.

  ##### Compile and run the code:

  ```
  $ gcc -o mini-grep mini-grep.c

  $ ./mini-grep
  ```