## 5.2 Pointers and Function Arguments

### Key points:

1. Pointer arguments enable a function to access and change objects in the function that called it.

    ```
    swap(&a, &b);
    ```

    access it in the function like:

    ```
    void swap(int *px, int *py);
    ```

### Examples:

#### getint

  Refer to the code in **getint.c**.

  ##### Compile and run the code:

  ```
  $ gcc -o getint getint.c

  $ ./getint
  ```    
### Exercises:

#### Exercise 5-1

  As written, getint treats a + or - not followed by a digit as a valid representation of zero.
  
  Fix it to push such a character back on the input.

  ##### Compile and run the code:

  ```
  $ gcc -o getint getint.c

  $ ./getint
  ```    

#### Exercise 5-2

  Write getfloat, the floating-point analog of getint. What type does getfloat return as its function value?
  
  TODO

  ##### Compile and run the code:

  ```
  $ gcc -o TODO TODO.c

  $ ./TODO
  ```    
