## 2.11 Conditional Expressions

### Key points:

1. **Conditional expression**, written with the ternary operator '? : '

    Consider example below:

    ```
    int max(a, b) {
      if (a > b) {
        return a;
      } else {
        return b;
      }
    }

    int x, y;

    x = 5;

    y = 3;

    int maxoftwo = max(x, y);
    ```

    Same might be expressed as conditional expression like this:

    ```
    int x, y;

    x = 5;

    y = 3;

    int maxoftwo = x > y ? x : y;
    ```

### Exercises:

#### Exercise 2-10
  Rewrite the function lower, which converts uppercase letters to lower case, with a conditional expression instead of if-else.
  
  Refer to the code in **lower.c**.

##### Compile and run the code:

```
$ gcc -o lower lower.c

$ ./lower
```
