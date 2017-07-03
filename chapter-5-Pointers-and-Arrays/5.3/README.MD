## 5.3 Pointers and Arrays

### Key points:

1. Any operation that can be achieved by array subscripting can also be done with pointers.

    The pointer version will in general be faster but, at least to the uninitiated, somewhat harder to understand.

    ```
    int a[10];
    ```

    defines array a of size 10 - a block of 10 consecutive objects named a[0], a[1], ..., a[9].

    a:&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;a[0]&nbsp;&nbsp;&nbsp;a[1]&nbsp;&nbsp;&nbsp;a[2]&nbsp;&nbsp;&nbsp;a[3]&nbsp;&nbsp;&nbsp;a[4]&nbsp;&nbsp;&nbsp;a[5]&nbsp;&nbsp;&nbsp;a[6]&nbsp;&nbsp;&nbsp;a[7]&nbsp;&nbsp;&nbsp;a[8]&nbsp;&nbsp;&nbsp;a[9]

    The notation a[i] refers to the i-th element of the array. If pa is a pointer to an integer, declared as

    ```
    int *pa;
    ```

    the the assignment

    ```
    pa = &a[0];
    ```

    sets pa to point to element zero of a, pa contains the address of a[0]

    pa&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;||

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;v

    a:&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;a[0]&nbsp;&nbsp;&nbsp;a[1]&nbsp;&nbsp;&nbsp;a[2]&nbsp;&nbsp;&nbsp;a[3]&nbsp;&nbsp;&nbsp;a[4]&nbsp;&nbsp;&nbsp;a[5]&nbsp;&nbsp;&nbsp;a[6]&nbsp;&nbsp;&nbsp;a[7]&nbsp;&nbsp;&nbsp;a[8]&nbsp;&nbsp;&nbsp;a[9]


    now the assignment
    
    ```
    x = *pa
    ```

    will copy the contents of a[0] to x, equal to:

    ```
    x = a[0]
    ```

    if pa points to a particular element of an array, then by definition pa + 1 points to the next element, pa + i points i elements after pa, and pa - i points i elements before. Thus, if pa points to a[0]

    ```
    *(pa + 1)
    ```

    refers to the contents of a[1], pa + i is the address of a[i], and *(pa + i) is the contents of a[i]

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;pa&nbsp;&nbsp;pa+1&nbsp;&nbsp;pa+2

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;||
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;||
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;||

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;v
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;v
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;v
    

    a:&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|

    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;a[0]&nbsp;&nbsp;&nbsp;a[1]&nbsp;&nbsp;&nbsp;a[2]&nbsp;&nbsp;&nbsp;a[3]&nbsp;&nbsp;&nbsp;a[4]&nbsp;&nbsp;&nbsp;a[5]&nbsp;&nbsp;&nbsp;a[6]&nbsp;&nbsp;&nbsp;a[7]&nbsp;&nbsp;&nbsp;a[8]&nbsp;&nbsp;&nbsp;a[9]

2. These remarks are true regardless of the type or size of the variables in the array a.
        
    the meaning of adding one to a pointer, and by extension, all pointer arithmetic, is that pa + 1 points to the next object, and pa + i points to the i-th object beyond pa.

3. Correspondence between indexing and pointer arithmetic is very close.

    the value of variable or expression of type array is the address of element zero of the array. After assignment:
    
    ```
    pa = &a[0];
    ```

    pa and a have the same values. The name of the array is a synonym for the location of the initial element, assignment can also be written as:

    ```
    pa = a;
    ```

    reference to
    
    ```
    a[i]
    ```

    can also be written as
    
    ```
    *(a + i)
    ```

    In evaluating a[i], C converts it to *(a + i) immediatley

    ```
    &a[i]
    ```
    
    and

    ```
    a+i
    ```

    are also identical, a + i is the address of the i-th element beyond a.

    If pa is a pointer, expressions may use it with a subscript;

    ```
    pa[i]
    ```

    is identical to:

    ```
    *(pa + i)
    ```

    **In short, an array-and-index expressionis equivalent to one written as a pointer and offset.**

4. There is one difference between an array name and a pointer that must be kept in mind.

    A **pointer** is a **variable**, so **pa = a** and **pa++** are **legal**.

    But an **array name** is **not a variable**, constructions like **a = pa** and **a++** **are illegal**

    When an array name is passed to a function, what is passed is the location of the initial element. Within the called function, this arg is a local variable, and so an array name parameter is a pointer => variable containing an address. Using that knowledge we may rewrite strlen like so:

    ```
    int strlen(char *s) {
        int n;

        for (n = 0; *s != '\0'; s++) {
            n++;
        }

        return n;
    }
    ```

    Since s is a pointer incrementing it is prefectly legal.

    As formal parameters in a function definition


    ```
    char s[]
    ```

    and

    ```
    char  *s
    ```

    are equivalent, we prefer the latter cause it explicitly states that parameter is a pointer.

5. It is possible to pass part of the array to a function, by passing a pointer to the beginning of the subarray. For example, if a is an array.

    ```
    f(&a[2])
    ```

    and

    ```
    f(a+2)
    ```

    both pass to the function f the address of the subarray that starts at a[2].

    Within f, the parameter declaration can read:

    ```
    f(int arr[]) { ... }
    ```

    or

    ```
    f(int *arr) { ... }
    ```

    So as far as f is concerned, the fact that the parameter refers to part of a larger array is of no consequence.

6. If one is sure that the elements exist, it is also possible to index backwards in an array;

    ```
    p[-1], p[-2]
    ```

    and so on are syntactically legal, and refer to the elements that immediately precede p[0]. Of course it is illegal to refer to objects that are not within the array bounds.