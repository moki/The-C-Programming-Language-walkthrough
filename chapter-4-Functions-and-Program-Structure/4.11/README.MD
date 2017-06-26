## 4.11 The C Preprocessor
C provides certain language features, which is a separate first step in compilation.

### Key points:

1. Most **frequently** used
    
    **#include** - file contents during compilation. 

    **#define** - to replace token by arbitrary sequence of characters.

### 4.11.1 File Inclusion 

### Key points:

1. **Syntax**

    Any source line of the form:

    ```
    #include "filename"
    ```

    filename **quoted** - searching begins where the **source** program was **found**.

    or

    ```
    #include <filename>
    ```

    is replaced by the contents of the file filename.

### 4.11.2 Macro Substitution

### Key points:

1. **Syntax**

    A **definition** has the form:

    ```
    #define name replacement text
    ```

    Subsequent occurrences of the token name will be replaced by the replacement text.

    name same as variable name

    replacement text is usually the rest of the line, but can be extended multiline by placing a \ at the end of each line.

    Scope - is from point of definition to the end of the source file.

    may use previous definitions.

    any name may be defined with any replacement text, for example:

    ```
    #define forever for(;;)
    ```

    define macros with arguments, so replacement text can be different for different calls of the macro.

    ```
    #define max(A, B) ((A) > (B) ? (A) : (B))
    ```

    thus the line:

    ```
    x = max(p + q, r + s);
    ```

    will be replaced:

    ```
    x = ((p + q) > (r + s) ? (p + q) : (r + s));
    ```

    **Undefine** with **#undef**

    ```
    #undef getchar
    ```

### Exercises:

#### Exercise 4-14
  Define a macro **swap(t, x, y) that interchanges two arguments of type t.
  
  Refer to the code in **swap-macro.c**.

##### Compile and run the code:

```
$ gcc -o swap-macro swap-macro.c

$ ./swap-macro
```

### 4.11.3 The C Preprocessor
C provides certain language features, which is a separate first step in compilation.

### Key points:

1. It is possible to control preprocessing itself with conditional statements that are evaluated during preprocessing.

2. **Syntax**
    #if - evaluates constant integer expression (sizeof, casts, or enum constants are illegal)
    if the expression is non-zero, subsequent lines until an #endif or #elif or #else are included.

    defined(name) in a #if is 1 if the name has been defined,and 0 otherwise.

    to include contents of a file hdr.h only once:

    ```
    #if !defined(HDR)
    #define HDR
    /* contents oof hdr.h go here */
    #endif
    ```

    This sequence tests the name SYSTEM tooo decide which version of a header to include:

    ```
    #if SYSTEM == SYSV
        #define HDR "sysv.h"
    #elif SYSTEM == BSD
        #define HDR "bsd.h"
    #elif SYSTEM == MSDOS
        #define HDR "msdos.h"
    #else
        #define HDR "default.h"
    #endif
    #include HDR
    ```

    #ifdef and #ifndef - specialized forms that test whether a name is defined.

    First example could've been rewritten as:

    ```
    #ifndef HDR
    #define HDR

    /* contents of hdr.h go here */

    #endif