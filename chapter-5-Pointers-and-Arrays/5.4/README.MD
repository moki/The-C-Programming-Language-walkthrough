## 5.4 Address Arithmetic

### Key points:

1. Simplest form of pointer or address arithmetic

    If p is a pointer to some element of an array, then p++ increments p to point to the next element, and p += i increments it to point i elements beyond where it currently does.

2. Rudimentary storage allocator.

    Two routines:

    The **first alloc(n)** - returns a pointer p to n consecutive character positions, which can be used by the caller of the alloc for storing character.

    The **second afree(p)** - releases the storage thus acquired so it can be re-used later.

    The storage managed by alloc and afree is a stack, or last-in, first out

    The standard library provide analogous functions called **malloc** and **afree** that have no such restrictions.

    1. Easiest implementation is to have **alloc** **hand out** pieces of a large character array that we will call **allocbuf**.
    
    2. It is **private** to **alloc** and **afree**. Name of the array can be declared **static** in the source file containing **alloc** and **afree**, and thus be invisible outside it.
    
    3. Other thing to store is - how much of **allocbuf** has been used. We use a pointer, called **allocp**, that points to the next free element.
    
        1. When **alloc** is asked for n characters, it checks to see if there is enough room left in **allocbuf**.
        
        2. If so **alloc** returns the current value of **allocp**, then increments it by n to point to the next free area.
        
        3. If there is no room, **alloc** returns **zero**.
        
    4. **afree(p)** merely sets **allocp** to **p** if **p** is inside **allocbuf**.

3. Pointer can be initialized just as any other variable, normally the only **meaningful** values are zero or an expression involving the addresses of previously defined data of appropriate type.

4. C guarantees that 0 is never a valid address for data, so a return value of zero can be used to signal an abnormal event, in this case, no space.

5. Pointers and Integers are not interchangeable

    1. Zero is the sole exception - this constant can be assigned to a pointer, and a pointer may be compared with constant zero.

    2. Symbolic constant NULL is often used in place of the zero, as a mnemonic.
        
        NULL is defined in <stdio.h>

6. Pointer and an integer may be added or subtracted.

7. Added or Subtracted value scaled by the size of this type

    as an example:

    ```
    p + n
    ```

    n will be scaled by 4 if it is an int.

    another strlen:

    ```
    int strlen(char *s) {

        char *p = s;

        while (*p != '\0') {
            p++;
        }

        return p - s;
    }
    ```

### Examples:

#### alloc-afree

  Refer to **alloc-afree.c** for implementation.

  ##### Compile and run the code:

  ```
  $ gcc -o alloc-afree alloc-afree.c

  $ ./alloc-afree
  ```    