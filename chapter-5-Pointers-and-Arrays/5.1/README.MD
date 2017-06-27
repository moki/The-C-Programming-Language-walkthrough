## 5.1 Pointers and Addresses

### Key points:

1. Pointer - is a group of cells (often two or four) that can hold an address.

2. The unary operator & **gives the address of an object**, so the statement:

    ```
    p = &c;
    ```

    assigns the **address** of c to the variable p, and p is said to **point to** c.

    operator applies only to objects in memory: variables and array elements.

    cannot be applied to expressions, constants, or register variables.

2. The unary operator * is the **inderection** or **dereferencing** operator

    when applied to a pointer, it accesses the object the pointer points to.

    x, y are integers and ip is a pointer to int:

    ```
    int x = 1, y = 2, z[10];

    int *ip;

    ip = &x;
    y = *ip;
    *ip = 0;
    ip = &z[0];
    ```

    the declaration of the pointer:

    ```
    int *ip;

    double *dp, atof(char *);
    ```

    pointer is constrained to point to a particular kind of object, there is only one exception:
    
     **pointer to void** - is used to hold any type of pointer, but cannot be dereferenced itself.

     if ip points to the integer x, then *ip can occur in any context x could.

     ```
     *ip = *ip + 10;
     ```

     The unary * and & bind more tightly than arithmetic operators

     ```
     y + *ip + 1;
     ```

     takes whatever ip points at, adds 1, and assigns result to y.

     ```
     *ip += 1
     ```

     increments what ip points to, as do

     ```
     ++*ip
     ```

     and

     ```
     (*ip)++
     ```

     The parenths are necessary in this last example, without them ip would be incremented instead of what it points to.

     because unary operators associate right to left.

     Finally since pointers are variables, they can be used without dereferencing, as an example:

     ```
     iq = ip
     ```

     copies thge contents of ip into iq, thus makes iq point to whatever ip pointed to.