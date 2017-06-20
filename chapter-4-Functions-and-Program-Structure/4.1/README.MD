## 4.1 Basics of Functions
Couple smaller pieces are easier to deal with rather than with one big.

### Key points:

1. **Syntax**

    ```
    return-type function-name(argument declarations) {
      declarations and statements;
    }
    ```

    Various parts may be absent, a minimal function is:

    ```
    dummy() { }
    ```

2. **return** expression

    **return** statement is the **mechanism** for **returning a value** from the **called function** to its **caller**.

3. The **expression** will be **converted** to the **return type** of the **function** if **necessary**.

### Examples:

#### Mini grep

  Refer to the code in **mini-grep.c**.

  ##### Compile and run the code:

  ```
  $ gcc -o mini-grep mini-grep.c

  $ ./mini-grep
  ```    

### Exercises:

#### Exercise 4-1
  Write the function **strrindex(s, t)**, which returns the position of the **rightmost** occurence of t in s, or -1 if there is none.
  
  Refer to the code in **right-mini-grep.c**.

##### Compile and run the code:

```
$ gcc -o right-mini-grep right-mini-grep.c

$ ./right-mini-grep
```