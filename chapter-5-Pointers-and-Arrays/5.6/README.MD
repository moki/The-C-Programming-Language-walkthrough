## 5.6 Pointer Arrays; Pointers to Pointers

### Key points:

1. Since pointers are variables themselves, they can be stored in arrays just as other variables can.

2. 

### Examples:

#### Stripped-down version of UNIX sort

  Refer to **sort.c** for implementation.

  ##### Compile and run the code:

  ```
  $ gcc -o sort sort.c

  $ ./sort
  ```

### Exercises:

#### Exercise 5-7
  Rewrite readlines to store lines in an array supplied by main, rather than calling alloc to maintain stoorage.
  
  Refer to the code in **TODO.c**.

##### Compile and run the code:

```
$ gcc -o TODO TODO.c

$ ./TODO
```
