## 2.7 Type Conversions
When an **operator** has **operands of different types**, **they** are **converted** to a **common type** according to a small **number of rules**. In general, the only 

### Key points:

1. **Automatic conversions** are those that convert a **narrower** operand into a **wider** one **without losing information**.

2. **Expressions** that might **lose** information, like assigning a **longer integer** type to a **shorter**, or a **floating-point** type to an **integer**, may draw a **warning**, but **they** are **not illegal**.

3. **char** is just a **small integer**, so they may be **freely used** in **arithmetic** expressions.

    Function **atoi**, which converts characters to its numeric representation:

    ```
    int atoi() {
      int i, n;

      n = i = 0;

      while (s[i] >= '0' && s[i] <= '9') {
        n = 10 *  n + (s[i] - '0');

        ++i;
      }

      return n;
    }
    ```

    Another example of char to int conversion is fn lower:

    ```
    int lower(int c) {
      if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
      } else {
        return c;
      }
    }
    ```
4. **<ctype.h>** defines a family of functions that provide test and conversions that are independent of character set.

5. **Explicit** type conversions can be forced ("coerced") in any expression, with a unary operator called a cast.

    ```
    (type-name) expression
    ``` as it is

    **expression** is converted to the **named type** by the conversion rules.

    The meaning of a cast is as if **expression** were **assigned** to a **variable** of **specified type**, **which** is **then used** in place of the **whole construction**

    Cast always produces **new value** in the **proper type**, the value stays immutable.

### Exercises:

#### Exercise 2-3
  Write the function htoi(s), which converts a string of hexademical digits (including an optional 0x or 0X) into its equivalent integer value.
  The allowable digits are 0 through 9, a through f, and A though F.
  
  Refer to the code in **hex2int.c**.

##### Compile and run the code:

```
$ gcc -o hex2int hex2int.c

$ ./hex2int
```
