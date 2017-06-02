## 2.5 Arithmetic Operators

### Key points:

1. **Binary** - arithmetic operators +, -, *, / and the modulus operator %.

    Integer division truncates any fractional part.

    ```
    x % y
    ```

    produces the remainder when x is divided by y, abd thus is zero when y divides x exactly.

    As an example a year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap years.

    Therefore:

    ```
    if ( (year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ) {
      printf("%d is a leap year\n", year);
    } else {
      printf("%d is not a leap year\n", year);
    }
    ```

2. The **%** operator cannot be applied to float or double. The direction of truncation for **/** and the sign of the result for **%** are machine-dependent for negative operands, as is the action taken on overflow or underflow.

3. **Opeartor Precedence** - **+** and **-** have **same** precedence, which is **lower** than the precedence of *, /, and %, which in turn have **lower** than **unary** + and -. Arithmetic operators associate left to right.