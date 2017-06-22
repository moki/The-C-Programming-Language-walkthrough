## 4.7 Register Variables
A **register** declaration advises the compiler that the variable in question will be **heavily** used.

### Key points:

1. **Syntax**

    ```
    register int x;
    register char c;
    }
    ```

    Various parts may be absent, a minimal function is:

    ```
    dummy() { }
    ```

2. The idea is that **register** variables are to be **placed** in **machine registers**. Compilers are **free to ignore** the advice. 

3. Can only be **applied** to **automatic** variables and to the formal **parameters** of a function.

    latter case example:

    ```
    f(register unsigned m, register long n) {
      register int i;
    }
    ```

4. In practice there are **restrictions** on **register** variables. Only **few** variables in **each function** may be kept in **registers**.

5. **Vary** from machine to machine.
