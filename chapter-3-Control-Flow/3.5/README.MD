## 3.5 Loops - While and For

### Key points:

1. **Syntax**

    For **while** loops **statement** evaluated if **expression** is **non-zero**

    ```
    while (expression) {
      statement;
    }
    ```

    For **for** loops **statement** evaluated if **expr2** is **non-zero**

    ```
    for (expr1; expr2; expr3) {
      statement;
    }
    ```

    **Any** of the **expr**'s can be **omitted**, although **semicolons must remain**

2. **Choice** between the **two** is Personal **preference**

    Although it does make sense to use **while** when there is no **initialization** and **reinitialization**, and **for** otherwise.

### Examples:

#### Shell Sort

  Refer to the code in **shell-sort.c**.

  ##### Compile and run the code:

  ```
  $ gcc -o shell-sort shell-sort.c

  $ ./shell-sort
  ```    

### Exercises:

#### Exercise 3-3
  Write a function expand(s1, s2) that expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken literally.
  
  Refer to the code in **expand.c**.

##### Compile and run the code:

```
$ gcc -o expand expand.c

$ ./expand
```