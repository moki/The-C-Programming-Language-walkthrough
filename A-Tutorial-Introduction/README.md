# Chapter 1 - A Tutorial Introduction
Diving in the code asap.

## 1.1 Getting started
Hello world program, refer to hello-world.c

### Keypoints:

1. **main** is a special function with which execution of your program starts.
```
main() {
  /*
    code of the program
  */
}
```
2. **#include** is the way to tell the compiler to include information about library.
```
/*
  includes standart input/output library
*/
#include <stdio.h>
```
3. To **call the fn** just state its name and follow by () passing arguments in.
```
printf("hello, world\n");
```
4. There is an escape sequences like \n for new line, \\t for a tab, \\b for a backspace, \\" for a double quote, \\\ for a backslash itself and many more.

### Run the code:

Assuming one uses gcc as a compiler run in shell:

```
gcc -o hello-world hello-world.c
```

If not replace gcc with whatever compiler you use
(refer to it's documentation in case of errors)