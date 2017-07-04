## 5.5 Characters Pointers and Functions

### Key points:

1. String copy - is standard library function <stdlib.h>

    Array version:

    ```
    void strcpy(char *s, char *t) {
        int i;

        i = 0;

        while ((s[i] = t[i]) != '\0') {
            i++;
        }
    }
    ```

    Pointers version:

    ```
    void strcpy(char *s, char *t) {
        while (*s++ = *t++) ;
    }
    ```

2. String compare

    Array:

    ```
    int strcmp(char *s, char *t) {
        int i;

        for (i = 0; s[i] == t[i]; i++) {
            if (s[i] == '\0')
                return 0;
        }

        return s[i] - t[i];
    }
    ```

    ```
    int strcmp(char *s, char *t) {
        while (*s++ == *t++) {
            if (!*s) {
            return 0;
            }
        }
        
        return *s - *t;
    }
    ```

3. *--p - Decrements pointer, before fetching it.

    In fact pair of expressions:

    ```
    // push val onto stack
    *p++ = val;
    // pop top of stack into val
    val = *--p;
    ```

### Exercises:

#### Exercise 5-3
  Write a pointer version of strcat(s, t) copies the string t to the end of s.
  
  Refer to the code in **strcat.c**.

##### Compile and run the code:

```
$ gcc -o strcat strcat.c

$ ./strcat
```

#### Exercise 5-4
  Write a function strend(s, t), which returns 1 if the string t occurs at the end of the string s, and zero otherwise.
  
  Refer to the code in **strend.c**.

##### Compile and run the code:

```
$ gcc -o strend strend.c

$ ./strend
```

#### Exercise 5-5
  Write versions of of the lib functions **strncpy**, **strncat**, and **strncmp**, which operate on at most the first n characters of their argument strings.
  For example, strncpy(s, t, n) copies at most n characters of t to s.
  
  Refer to the code in **strend.c**.

##### Compile and run the code:

```
$ gcc -o strncpy strncpy.c

$ ./strncpy
```

```
$ gcc -o strncat strncat.c

$ ./strncat
```

```
$ gcc -o strncmp strncmp.c

$ ./strncmp
```

#### Exercise 5-6
  Rewrite appropriate programs from earlier chapters and exercises with pointers instead of arrays.
  As an example getline, atoi, itoa, reverse, strindex, getop.

##### Compile and run the code:

```
$ gcc -o TODO TODO.c

$ ./TODO
```