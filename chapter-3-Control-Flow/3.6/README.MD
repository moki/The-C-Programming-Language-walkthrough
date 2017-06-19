## 3.6 Loops - Do-while
**while** and **for** loops **test** the **termination** condition at the **top**. By **contrast** the third loop in C the **do-while**, tests at the **bottom**.

### Key points:

1. **Syntax**

    ```
    do 
      statement;
    while (expression);
    ```

    The statement is executed then the expression is evaluated. When expression becomes false loop terminates.

2. **Choice** between the **two** is Personal **preference**

    Although it does make sense to use **while** when there is no **initialization** and **reinitialization**, and **for** otherwise.

### Examples:

#### itoa - Converts a number to a character string

  Refer to the code in **itoa.c**.

  ##### Compile and run the code:

  ```
  $ gcc -o itoa itoa.c

  $ ./itoa
  ```    

### Exercises:

#### Exercise 3-5
  Write the function itob(n, s, b) that converts the integer n into a base b character representation in the string s. In particular, itob(n, s, 16)
  formats n as a hexadecimal integer in s.
  
  Refer to the code in **itob.c**.

##### Compile and run the code:

```
$ gcc -o itob itob.c

$ ./itob
```