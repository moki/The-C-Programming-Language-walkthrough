## 2.2 Data Types and Sizes
There are only few basic data types in C.

### Key points:

1. **char** - a single byte, capable of holding one character in the local character set.
    
2. **int** - an integer, typically reflecting the natural size of integers on the host machine.

3. **float** - single-precision floating point.

4. **double** - double-precision floating point.

5. In the addition, there are a number of qualifiers that can be applied to these basic types. **short** and **long** apply to integers.

    ```
    short int sh

    long int lng
    ```
    The word int can be omitted in such declarations, and typically is.

    **int** will normally be the natural size for a particular machine. **short** is often **16 bits, long 32, and int either 16 or 32**

6. **signed** or **unsigned** may be applied to **char** or **any integer**.

    **unsigned** - are always **positive** or **zero**, and obey the laws of arithmetic modulo **2<sup>n</sup>** where **n** is the **number of bits in the type**

    if **char** is **8 bits**

    **unsigned char** variables have values between **0 and 255**

    **signed char** have values between -128 and 127

    **at the same machine**

7. **long** also applies to **double** and **float**

### Exercises:

#### Exercise 2-1
  Write a program to determine the ranges of char, short, int and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.
  
  Refer to the code in **type-ranges.c**.

##### Compile and run the code:

```
$ gcc -o type-ranges type-ranges.c

$ ./type-ranges
```
