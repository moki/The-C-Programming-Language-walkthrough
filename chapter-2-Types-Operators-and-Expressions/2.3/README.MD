## 2.3 Constants

### Key points:

1. **Integer Constants** - 1234 is an int.

2. **Long Contants** - 123456789L in an long int, **L** at the end.

3. **Unsigned Constants** - written with a terminal **u** or **U**.

4. **Unsigned Long Constants** - indicated with suffix **ul** or **UL**.

5. **Floating-point Constants** - contain a decimal point 123.4 or and exponent 1e-2 or both, their type is double unless suffixed.

6. **Float Constant** - indicated with suffix **f** or **F**.

7. **Long Double Constant** - indicated by **l** or **L**.

8. The value of an integer can be specified in octal or hexademical instead of decimal.

    A **leading zero** on an integer means **octal**.

    A **leading 0x** or **0X** means hexademical.

9. **Character Constant** is an integer, written as one character within single quotes, such as **'x'**.

10. **Byte** sized **bit pattern**

    Octal:

    ```
    '\ooo'
    ```

    where ooo is one to three octal digits(0...7) or by

    So we might  write:
    ```
    #define VTAB '\013'
    #define BELL '\007'
    ```

    Hexademical:

    ```
    '\xhh'
    ```

    where hh is one or more hexademical digits (0...9, a...f, A...F).

    So we might  write:

    ```
    #define VTAB '\xb'
    #define BELL '\x7'
    ```

11. **Constant Expression** - is an expression that involves only constants.

    Such expressions may be evaluated during compilation rather than run-time, and accordingly may be used in any place that a constant can occur, as in:

    ```
    #define MAXLINE 1000

    char line[MAXLINE + 1]
    ``` 

12. **String Constant** or **String Literal** - is a sequence of zero or more characters surronded by double quotes, as in

    ```
    "I am a string"
    ```

      String constant can be concatenated at a compile time

    ```
    "hello, " "world"
    ```

      Equivalent to

    ```
    "hello, world"
    ```

13. **String** is an array of characters which has character '\0' at the end, so the physical storage required is one more than the number of characters written between the quotes.

    **strlen(s)** - returns the length of its character string argument s, excluding the terminal '/0'


    Here is our implementation:

    ```
    int strlen(char string[]) {
      int length;

      length = 0;

      while (string[length] != '\0') {
        ++length;
      }

      return length;
    }
    ```

    **strlen** and other string functions are declared in the standard header **<string.h>**

14. **Enumeration Constant** - is a list of constant integer values, as in

    ```
    enum boolean { NO, YES };
    ```

    The **first** name in enum has **value 0**, the **next 1**, and so on. unless explicit values are specified.

    ```
    enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = '\t', NEWLINE = '\n', VTAB = '\v', RETURN = '\r' };
    ```

      Names in different enumerations must be distinct. Values need not be distinct in the same enumeration.
