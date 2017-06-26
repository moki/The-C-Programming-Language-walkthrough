## 4.10 Recursion
C functions may be used **recursively**, the function might call itself either directly or indirectly.

### Key points:

1. When a function calls itself **recursively**, each invocation gets a fresh set of all the automatic variables, independent of the previous set.

### Examples:

#### printf

  Refer to the code in **printd.c**.

  ##### Compile and run the code:

  ```
  $ gcc -o printd printd.c

  $ ./printd
  ```    

#### quicksort

  Refer to the code in **quicksort.c**.

  ##### Compile and run the code:

  ```
  $ gcc -o quicksort quicksort.c

  $ ./quicksort
  ```    

### Exercises:

#### Exercise 4-12
  Adapt the ideas of **printd** to write a recursive version of itoa; that is, convert an integer into a string by calling a recursive routine.
  
  Refer to the code in **itoa-recursive.c**.

#### Exercise 4-13
  Write a recursive version of the function **reverse(s)**, which **reverses** the **string** s in place.
  
  Refer to the code in **reverse-recursive.c**.

##### Compile and run the code:

```
$ gcc -o reverse-recursive reverse-recursive.c

$ ./reverse-recursive
```