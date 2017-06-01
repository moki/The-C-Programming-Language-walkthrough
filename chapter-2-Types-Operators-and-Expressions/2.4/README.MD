## 2.4 Declarations

### Key points:

1. All variables must be declared before use, although certain declarations can be made implicitly by context.

2. A declaration specifies a type, and contains a list of one or more variables of that type, as in.

    ```
    int lower, upper, step;

    char c, line[1000];
    ```

    Variables can be distributed among declarations in any fashion; the list above could equally well be written as.

    ```
    int lower;
    int upper;
    int step;
    char c;
    char line[1000];
    ```

    This latter form takes more space, but is convenient for adding a comment to
    each declaration or for subsequent modifications.

    A Variable may also be initialized in its declaration. If the name is followed by an equals sign and an expression, the expression serves as an initializer, as in

    ```
    char esc = '\\';
    int i = 0;
    int limit = MAXLINE + 1;
    float eps = 1.0e-5;
    ```
3. **Not automatic** variables initialized only once, conceptually before the program starts executing, and the initializer must be a constant expression.

4. Explicitly initialized **Automatic** variables is initialized each time the function or block it is in is entered.

5. **External** and **Static** variables are initialized to zero by default.

6. **Automatic** variables for which there is no explicit initializer have **undefined** values.

7. **const** qualifier can be applied to the declaration of any variable to specify that its value will not be changed. For an array, the const qualifier says that the elements will not be altered.

    ```
    const double e = 2.71828182845905;
    
    const char msg[] = "warning: ";
    ```

    The const declaration can also be used with array arguments, to indicate that the function does not change that array:

    ```
    int strlen(const char[]);
    ```