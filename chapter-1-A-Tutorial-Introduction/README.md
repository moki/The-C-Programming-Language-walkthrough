# Chapter 1 - A Tutorial Introduction
Diving in the code asap.

## 1.1 Getting started
Hello world program, refer to hello-world.c

### Key points:

1. **main** is a special function with which execution of your program starts.
```
main() {
  /*
     code of the program
  */
}
```
2. **#include** is the way to tell the compiler to include information about library.
```
/*
  includes standart input/output library
*/

#include <stdio.h>
```
3. To **call the fn** just state its name and follow by () passing arguments in.
```
printf("hello, world\n");
```
4. There is an escape sequences like \n for new line, \\t for a tab, \\b for a backspace, \\" for a double quote, \\\ for a backslash itself and many more.

5. C is an imperative language

### Run the code:

Assuming one uses gcc as a compiler run in shell:

```
$ gcc -o hello-world hello-world.c

$ ./hello-world
```

If not replace gcc with whatever compiler you use
(refer to it's documentation in case of errors)

---

## 1.2 Variables and Arithmetic Expressions
Program to list Fahrenheit temperatures from 0 to 300 with 20 step and equivalents of each in Celsius, refer to fahr-to-cels.c

### Key points:

1. **Types** - There is **four basic** types in C some have sub types.

#### Integer

Integers are used to store whole numbers.

| Type              | Size(bytes) | Range                           |
| ----------------- |:-----------:|:------------------------------- |
| int               | 2           | -32,768 to 32767                |
| unsigned int      | 2           | 0 to 65535                      |
| short int         | 1           | -128 to 127                     |
| long int          | 4           | -2,147,483,648 to 2,147,483,647 |
| unsigned long int | 4           | 0 to 4,294,967,295              |

#### Floating

Floating types are used to store real numbers.

| Type              | Size(bytes) | Range                           |
| ----------------- |:-----------:|:------------------------------- |
| Float             | 4           | 3.4E-38 to 3.4E+38              |
| double            | 8           | 1.7E-308 to 1.7E+308            |
| long double       | 10          | 3.4E-4932 to 1.1E+4932          |

#### Character

Character types are used to store characters value.

| Type                | Size(bytes) | Range                           |
| ------------------- |:-----------:|:------------------------------- |
| char or signed char | 1           | -128 to 127                     |
| unsigned char       | 8           | 0 to 255                        |


#### void

Means no value, often use is to specify functions return value

#### Note that Size and range of all types in tables given for an 16-bit machine.

Size of these object depends on the machine you are running code, to figure out size of type on any machine use the sizeof operator like:

```
 // sizeof(type_name);
 printf("Size for int: %d\n", sizeof(int));
```

#### More info on types:

[https://en.wikipedia.org/wiki/C_data_types](https://en.wikipedia.org/wiki/C_data_types)

2. **Comments** - is the way to commentate the code.

```
// This is a comment

/* This is a comment */

/*
   This is a comment
*/
```

3. **Variables** - In C variables must be declared before they are used one can declare type by stating
variable type and name.

```
int int_val_1, int_val_2;
float float_val_1, float_val_2;
```

4. **While** - while() {} construct

    Repeats code between {}, as long as condition(expression in parenthesis) evaluates to true.
    One may also omit curly braces if body of the while loop consists of single statement, write body from the new line indent by one tab.
    
  Example usage:

```
int i = 1; // initialize initial loop value 

while (i <= 10) // test condition to run or not the loop
{
 printf("loop evaluation #: %d\n", i);
 i = i + 1; // increase loop value
}
```

  Single statement example:

```
int i = 1; // initialize initial loop value 

while (i <= 10) // test condition to run or not the loop
  i = i + 1; // increase loop value
```

4. **printf % Conversion specification**

    %spec used to specify how to format value passed in the printf function inside the string.

| Conversion spec     | formatting                                                   |
| ------------------- |:------------------------------------------------------------ |
| %d                  | as decimal integer                                           |
| %6d                 | as decimal integer, at least 6 chars wide                    |
| %f                  | as floating point                                            |
| %6f                 | as floating point, at least 6 chars wide                     |
| %.2f                | as floating point, 2 characters after decimal point          |
| %6.2f               | as floating point, at least 6 wide and 2 after decimal point |

  Also there is **%o** for **octal**, **%x hexademical**, **%c** for a **character**, **%s** **character string**, and **%%** for **% itself**. 

### Compile and run the code:

Assuming one uses gcc as a compiler run in shell:

```
$ gcc -o fahr-to-cels fahr-to-cels.c

$ ./fahr-to-cels
```

If not replace gcc with whatever compiler you use
(refer to it's documentation in case of errors)

### Exercises:

#### Exercise 1-3
  Refer to **line 17** in **fahr-to-cels.c** source code file

##### Compile and run the code:

```
$ gcc -o fahr-to-cels fahr-to-cels.c

$ ./fahr-to-cels
```

#### Exercise 1-4
  Refer to **cels-to-fahr.c** source code file

##### Compile and run the code:

```
$ gcc -o cels-to-fahr cels-to-fahr.c

$ ./cels-to-fahr
```

---

## 1.3 The For Statement
There is alot of ways to write this program lets try do it using the for loop.

### Key points:

1. **For loop** - for () {} construct.

    ```
    for (init; condition; increment) {
      // statements to repeat
    }
    ```

2.  **Variable <-> expression** - in any context where it is permissible to use the value of a variable of some type, you can use a more complicated expression of that type.

    replace: 

    ```
    printf("%3d %7.1f\n", fahr, cels);
    ```

    with:

    ```
    printf("%3d %7.1f\n", fahr, (5.9 / 9.0) * (fahr - 32));
    ```

### Compile and run the code:

Assuming one uses gcc as a compiler run in shell:

```
$ gcc -o for-fahr-to-cels for-fahr-to-cels.c

$ ./for-fahr-to-cels
```

### Exercises:

#### Exercise 1-5
  Refer to **reverse-fahr-to-cels.c** source code file

##### Compile and run the code:

```
$ gcc -o reverse-fahr-to-cels reverse-fahr-to-cels.c

$ ./reverse-fahr-to-cels
```

---

## 1.4 Symbolic Constants
Magic numbers in your program and how to deal with them.

### Key points:

1. **#define** - defines a **symbolic name** or **symbolic constant**
    
    **name** has the same form as a variable name: a sequence of letters and digits that begins with a letter.

    ```
    #define name replacement-text
    ```

    Thereafter, any occurrence of **name** will be replaced by the corresponding **replacement** text.

    **name** conventionally written in UPPER_CASE.

    **replacement-text** can be any sequence of characters.

### Compile and run the code:

Assuming one uses gcc as a compiler run in shell:

```
$ gcc -o const-fahr-to-cels const-fahr-to-cels.c

$ ./const-fahr-to-cels