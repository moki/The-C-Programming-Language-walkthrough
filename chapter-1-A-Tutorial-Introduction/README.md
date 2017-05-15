# Chapter 1 - A Tutorial Introduction
Diving in the code asap.

## 1.1 Getting started
Hello world program, refer to hello-world.c

### Key points:

1. **main** is a special function with which execution of your program starts.
```
int main() {
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
```

---

## 1.5 Character Input and Output
Text input and output processed with streams using stdio lib.

### Key points:

1. **stdio** - **text** input/output is dealt with as **streams of characters** 
    
    **Text stream** is a sequence of characters divided into lines; **each line** consists of **zero or more characters** followed by a **newline character**.

    #### API:

    ##### getchar()

      * reads **next input character** from a **text stream** and **returns it** as a value

      ```
      c = getchar();
      ```

      The chars normally come from the keyboard

    ##### putchar()
      
      * **prints a character** everytime it is called

      ```
      putchar(c);
      ```

      **Prints** the contents of the **int variable c as a character**, usually on the screen

      Calls to **putchar** and **printf** may be interleaved, the **output** will **appear** in the **order in which the calls are made**.

---

## 1.5.1 File Copying
Given getchar and putchar, you can write a surprising amount of useful code without knowing anything more about input and output.

### Key points:

1. Relational operator **!=** means **not equal to**.

2. What appears to be a **character** on the **keyboard or screen** is of course, like everything else, **stored internally just as bit pattern**.
    
    Type char is specifically meant for storing such character data, but any integer type can be used.
3. **getchar()** returns **EOF**, when there is no input it stands for **End Of File**

    **Variable c** in example below is of type int because **c** have to be big enough to hold **EOF** in addition to any possible **char**.

4. **EOF** is an integer defined in **stdio** 

5. In **C any assignment** such as

    > c = getchar();

    is an **expression** and **has a value**, which is the **value** of the **left** hand side **after assignment**. This means assignment can appear as part of a larger expression.

    ```
    while ((c = getchar()) != EOF)
    ```

    **Parenthesis** around assignment is **necessary**, because the **precedence** of **!=** is **higher** than that of **=**
    
    Which will lead us to **undesired results** such as 1 or 0 value being set to the **c** variable.

Simplest example would be a program that copies its input to output one character at a time. 

### Pseudocode:

> read a character
>
> while  (character is not end-of-file indicator)
>
> &nbsp;&nbsp; output the character just read
>
> &nbsp;&nbsp; read a character

### Example in C:

```
#include <stdio.h>

int main() {
  int c;

  c = getchar();

  while(c != EOF) {
    putchar(c);
    c = getchar();
  }
}
```

### Improved Example in C:

```
#include <stdio.h>

int main() {
  int c;

  while((c = getchar()) != EOF) {
    putchar(c);
  }
}
```

### Compile and run the code:

Assuming one uses gcc as a compiler run in shell:

```
$ gcc -o file-copy file-copy.c

$ ./file-copy
```

### Exercises:

#### Exercise 1-6
  Verify that the expression getchar() != EOF is 0 or 1.

  Refer to **verify-EOF.c** source code file

##### Compile and run the code:

```
$ gcc -o verify-EOF verify-EOF.c

$ ./verify-EOF
```

#### Exercise 1-7
  Write a program to print the value of EOF.

  Refer to **print-EOF.c** source code file

##### Compile and run the code:

```
$ gcc -o print-EOF print-EOF.c

$ ./print-EOF
```

---

## 1.5.2 Character Counting
Counting input characters.

### Key points:

1. **++variable_name** statement - presents a new operator, **++**, which means **increment** variable value by one.

    Example usage:

    ```
    ++variable;
    ```

    You could instead write:

    ```
    variable = variable + 1;
    ```

    But former is more concise and often more efficient.

 2. **--variable_name** statement - which is operator to **decrement** variable value by one.

    Example usage:

    ```
    --variable;
    ```

    You could instead write:

    ```
    variable = variable - 1;
    ```

    But former is more concise and often more efficient.

3. Above operators can be,
  
    either **prefix** operators:

    ```
    ++variable;
    ```

    or **postfix**:

    ```
    variable++;
    ```

    these **two forms** have **different values** in expressions, but **both** increment or decrement **variable**

4. The way to **cope** with **big numbers** is to use **long** integer type or **even bigger** numbers **double** float type.

5. **While** and **For** Loops run test condition at their top.


### Compile and run the code:

Assuming one uses gcc as a compiler run in shell:

```
$ gcc -o count-char-v1 count-char-v1.c

$ ./count-char-v1
```

```
$ gcc -o count-char-v2 count-char-v2.c

$ ./count-char-v2
```
