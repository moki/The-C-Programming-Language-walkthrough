## 4.2 Functions Returning non-integers
So far our functions returned no value **void** or integer **int**. What if function must return some other **type**? 

### Key points:

1. The **standard** library includes an atof, the **header <stdlib.h>** declares it.

2. **<ctype.h>**

    #### isspace(char c); - checks if character is space

    #### isdigit(char c); - checks if character is digit

3. **Declarations** must **match** **Definitions**.

    **Declare** functions **explicitly**

    Let the **calling** routine know that **atof** returns **non-int value**.

    function **must be declared** and **defined consistently**.

    if **atof itself** and the **call** to it in **main** have **inconsistent** types in the same source file, the **error**
    will be **detected** by the compiler. But if (as is more likely) **atof** were **compiled separetly**, the **mismatch would not be detected**.

    atof returns **double** main treats it like **int**, and **meaningless** answers would **result**.   

4. If function uses **arguments declare** them, if **not** use **void**.

### Examples:

#### atof(char s[])

  Refer to the code in **atof.c**.

  ##### Compile and run the code:

  ```
  $ gcc -o atof atof.c

  $ ./atof
  ```
