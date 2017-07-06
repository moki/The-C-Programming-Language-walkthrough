## 5.10 Command-line Arguments
In env that supports c, there is a way to pass command-line arguments or parameters to a program when it begins executing.

### Key points:

1. Main is called with two arguments

    The first conventionally called - **argc**, for argument count.
    Is the number of arguments the program was invoked with.

    The second - **argv**, for argument vector.
    Is a pointer to an array of character strings that contain the arguments, one per string.

    By convention, argv[0] is the name by which the program was invoked, so argc is at least 1. If argc is 1, there are no cmd-line arguments after program name.

    Also standard requires tgat argv[argc] be a null pointer.

### Examples:

#### Echo

  Refer to **echo.c** for implementation.

  ##### Compile and run the code:

  ```
  $ gcc -o echo echo.c

  $ ./echo
  ```

### Exercises:

#### Exercise 5-10 - 5-13
  TODO.
  
  Refer to the code in **TODO.c**.

##### Compile and run the code:

```
$ gcc -o TODO TODO.c

$ ./TODO
```
