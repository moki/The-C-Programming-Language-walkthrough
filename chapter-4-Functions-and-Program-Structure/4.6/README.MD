## 4.6 Static Variables

### Key points:

1. **static** declaration, applied to an external variable or function, limits the scope of that object to the rest of the source file being compiled.

2. **External static** thus **provides** a way to **hide** names like buf and bufp in the getch-ungetch combination, which **must be external** so they can be shared, yet which should **not be visible** to **users** of getch and ungetch.

3. **Syntax** - prefix the normal **declaration** with the word **static**

    ```
    static char buf[BUFSIZE];
    static int bufp = 0;

    int getch(void) { ... }

    void ungetch(int c) { ... }
    ```

4. **Mostly** used for **variables** but can be applied to **functions**.

### Exercises:

#### Exercise 4-11
  Modify getop so that it doesn't need to use ungetch.

  ##### TODO

##### Compile and run the code:

```
$ gcc -o getop.c getop.c.c

$ ./getop.c
```