## 4.8 Block structure
Couple smaller pieces are easier to deal with rather than with one big.

### Key points:

1. **Syntax**

    any legit {  } introduces new block => scope.

    ```
    if (n > 0) {
      int i; // declare new i

      ...
    }
    ```

2. **automatic** variable **declared** and **initialized** in a **block** is **initialized** every time block is **entered**. **Static** is **initialized** only the **first** time the block **entered**.

3. **automatic** variables including formal **parameters**, hides external variables and functions of the same name.

    ```
    int x;
    int y;

    f(double x) {
      double y;
    }
    ```

    within function f, occurences of x refer, to the parameter, which is a double; outside of f the refer to the external int.

4. As a matter of **style** it's best to **avoid** variable **names** that **conceal names** in an **outer scope**; the potential for confustion and error is too great.
