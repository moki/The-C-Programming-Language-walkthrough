## 4.4 Scope Rules
Let us reorganize the calculator program into several files.

### Key points:

1. For **automatic** variables declared at the beginning of the function, scope is the **function** in which the name is declared. The **same** is **true** of the parameters of the function.

2. **external** variable or a function lasts from the point it is **declared** to the **end** of the **file** being compiled.

3. If an **external** variable is to be **referred** to before it is **defined**, or if it is **defined** in a **different source file** from the **one** where **it** is being **used**, then **extern** declaration is **mandatory**.

4. **declaration** of an **external** variable **announces** the **properties** of a variable(**type**), while **definition** also causes **storage** to be **set aside**.

5. There **must be** only **one definition** of an **external** variable among **all** the files, that make up **source** program. **Other** files may **contain extern declarations** to access it.

    **Array sizes** must be **specified** with the **definition**, but are **optional** with an **extern** **declaration**.

    **Initialization** of an **external** variable goes only with the **definition**.

6. Theoretical spliting of the program:
    
    file1:
    
    ```
    extern int sp;
    extern double val[];

    void push(double f) { ... }
    double pop(void) { ... }
    ```

    file2:

    ```
    int sp = 0;
    double val[MAXVAL];
    ```