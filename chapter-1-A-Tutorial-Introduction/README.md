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

---

## 1.5.3 Line Counting
Counting lines in input.

### Key Points:

1. **Standart Library** ensures that input text streams appears as a sequence of lines, each terminated by a newline. Counting lines is just counting newlines('\n'). 

2.  Character written between **single quotes** represents an **integer** value equal to the **numerical** value of the character in the machine's character set. Called **character constant**, although it is just another way to write a **small integer**.

    Example:

    > 'A' is a **character constant**
    >
    > in **ASCI** its value is **65**, escape characters are also legal in character constants, so **'\n'** stands for the **value** of the **newline** character, which is **10** in **ASCI**. 

### Compile and run the code:

Assuming one uses gcc as a compiler run in shell:

```
$ gcc -o count-lines count-lines.c

$ ./count-lines
```

### Exercises:

#### Exercise 1-8
  Write a program to count the amount of space in the input.
  i.e. count amount of Blanks, Tabs, Newlines.
  
  bonus: Vertical Tab, Formfeed, Carriage Return.

  Refer to **count-space.c** source code file

##### Compile and run the code:

```
$ gcc -o count-space count-space.c

$ ./count-space
```

#### Exercise 1-9
  Write program to escape multiple blanks when copying from input to output.

  Refer to **escape-multiple-blanks.c** source code file

##### Compile and run the code:

```
$ gcc -o escape-multiple-blanks escape-multiple-blanks.c

$ ./escape-multiple-blanks
```

#### Exercise 1-10
  Write a program to explicitly state escape sequences: **tab** as **\t**, **backspace** as **\b**, and each **backslash** as **\\\\**.

  Refer to **explicit-escape-sequence.c** source code file

##### Compile and run the code:

```
$ gcc -o explicit-escape-sequence explicit-escape-sequence.c

$ ./explicit-escape-sequence
```

---

## 1.5.3 Word Counting
Lines words and characters.

### Key points:

1. **Logical** operators.
  
    > **&&** Operator for **AND**
    >
    > **||** Operator for **OR**

   **AND** operator precedence is just higher than **OR**.
   **chained** logical **expressions** are **evaluated left to right** and its evaluation **guaranteed** to **stop** **as soon** as the **truth** or **falsehood** is **known**.

2. **else** construct.

    Specifies an alternative action if the condition part of an if statement is false.

    ### Example:

    ```
    if (expression) {
      // statement_1
    } else {
      // statement_2
    }
    ```

    Only one of the of the two statements associated with an if else is preformed. 

### Compile and run the code:

Assuming one uses gcc as a compiler run in shell:

```
$ gcc -o wc wc.c

$ ./wc
```

### Exercises:

#### Exercise 1-12
  Write a program that prints input one word per line.

  Refer to **split-words-with-new-line.c** source code file

##### Compile and run the code:

```
$ gcc -o split-words-with-new-line split-words-with-new-line.c

$ ./split-words-with-new-line
```

---

## 1.6 Arrays
Writing a program to count the number of occurrences of each digit, of white space characters, and all of other characters.

### Key points:

1. **Declaration**.

    ```
    int digits[10]
    ```

    where **int** is **type** of the **array**

    **digits** variabel **name** of the **array**

    **10** is a **subscript**, which can be **any integer expression**, includes
    **integer variables** like **i** and integer **constants**

2. **Chars ASCII**

    by definition **chars** are just **small integers**, so char **variables** and **constants** are **identical** to **ints** in arithmetic expressions.

### Compile and run the code:

Assuming one uses gcc as a compiler run in shell:

```
$ gcc -o count-digits-white-space-chars count-digits-white-space-chars.c

$ ./count-digits-white-space-chars
```

### Exercises:

#### Exercise 1-13
  Write a program to print a histogram of the lengths of words in its input.

  Refer to **words-length-hist.c** source code file

##### Compile and run the code:

```
$ gcc -o words-length-hist words-length-hist.c

$ ./words-length-hist
```

#### Exercise 1-14
  Write a program to print a histogram of the frequencies of different characters in its input.

  Refer to **chars-freq-hist.c** source code file

##### Compile and run the code:

```
$ gcc -o chars-freq-hist chars-freq-hist.c

$ ./chars-freq-hist
```

---

## 1.7 Functions
Convenient way to encapsulate some computation.

### Key points:

1. **Definition**

    > return-**type** function-**name**(parameter declaration, if any in form: **type** **name**) {
    >
    > &nbsp;&nbsp;&nbsp;&nbsp;**function code**
    >
    > }

2. **Parameter** variable in function declaration

3. **Argument** variable passed to function call

4. **return** is a way to return value from function

    return **without value** returns **control** to the **caller function**.

5. **main() return**

    return **value** of **0** from main function **implies normal termination**.
    **non zero** values indicate **unusual or erroneous** terminal **conditions**.

### Compile and run the code:

Assuming one uses gcc as a compiler run in shell:

```
$ gcc -o exponent exponent.c

$ ./exponent
```

### Exercises:

#### Exercise 1-15
  Rewrite temperature conversion program of Section 1.2 to use a function for conversion.

  Refer to **fn-fahr-to-cels.c** source code file

##### Compile and run the code:

```
$ gcc -o fn-fahr-to-cels fn-fahr-to-cels.c

$ ./fn-fahr-to-cels
```

---

## 1.8 Arguments - Call by value

### Key points:

1. All fn arguments are **passed by value**.
    
    Meaning that the called **function** is **given** the **values** of its arguments in **temporary variables** rather than the originals, i.e local copy.

2. **Except** for **Arrays**

    When the name of the **array** is **used** as an **argument**, the **value passed** to the function is the **location** or **address** of the **beginning** of the **array** - **there is no copying of array elements**.

3. **Pointers**

    Using **pointers** it is **possible** to arrange for a function to **modify** a **variable in calling routine**.

---

## 1.9 Character Arrays
The most common type of arrays in the c is the array of characters.

### Key points:

  1. **End** of the string - **\0**
    
      End of the string is specified with character **'\0'** in the array of the characters.

### Compile and run the code:

Assuming one uses gcc as a compiler run in shell:

```
$ gcc -o longest-line longest-line.c

$ ./longest-line
```

### Exercises:

#### Exercise 1-16
  Revise the main routine of the longest line program so it will correctly print the length of arbitrarily long input lines, and as much as possible of the text.

  Refer to **longest-line-rev.c** source code file

##### Compile and run the code:

```
$ gcc -o longest-line-rev longest-line-rev.c

$ ./longest-line-rev
```

#### Exercise 1-17
  Write a program to print all input lines that are longer than 80 characters.

  Refer to **print-more-than-80.c** source code file

##### Compile and run the code:

```
$ gcc -o print-more-than-80 print-more-than-80.c

$ ./print-more-than-80
```

#### Exercise 1-18
  Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.

  Refer to **strip-line.c** source code file

##### Compile and run the code:

```
$ gcc -o strip-line strip-line.c

$ ./strip-line
```

#### Exercise 1-19
  Write a function to reverse the character string. Use it to write a program that reverses its input a line at a time.

  Refer to **reverse-string.c** source code file

##### Compile and run the code:

```
$ gcc -o reverse-string reverse-string.c

$ ./reverse-string
```

---

## 1.10 External Variables and Scope
The most common type of arrays in the c is the array of characters.

### Key points:

  1. **Local** variables - automatic.
    
      Each local variable in function comes into existance only when the function is called, and disappears when the function
      exits. This is why such functions known as **automatic**

  2. **External** variables - external to all functions.

      Variables that can be accessed by name by any function, globally accessable thus can be used instead of function arguments,
      they retain their values even after the functions that set them have returned.

      must be **defined** exactly **once** outside of any function, that sets **storage** for it.

      Also must be **declared** in each **function** that wants **access** it. this **states** **type** of the variable.

  2. **extern** declaration can be **omitted** if the it was **defined** in the **same file**.

  3. **Usual practice** is to collect **extern** declarations of variables and functions in the separate file, historically called **header**, that is included by **#include** at the front of each file, the **suffix .h** is **conventional** for header **names**.
### Compile and run the code:

Assuming one uses gcc as a compiler run in shell:

```
$ gcc -o extern-longest-line extern-longest-line.c

$ ./extern-longest-line
```

### Exercises:

#### Exercise 1-20
  Write a program **detab** that **replaces tabs** in the input with the proper number of blanks to space to the next tab stop.
  Assume a fixed set of tab stops, say every **n** columns. Should n be a variable or a symbolic parameter?

  **n** should be a variable, to allow different tab size option.

  Refer to **detab.c** source code file

##### Compile and run the code:

```
$ gcc -o detab detab.c

$ ./detab
```

#### Exercise 1-21
  Write a program **entab** that **replaces strings of blanks** in the input with the minimum number of tabs and spaces to achieve the same thing.

  Refer to **entab.c** source code file

##### Compile and run the code:

```
$ gcc -o entab entab.c

$ ./entab
```

#### Exercise 1-22
  Write a program **fold** long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th
  column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column. 

  Refer to **fold.c** source code file

##### Compile and run the code:

```
$ gcc -o fold fold.c

$ ./fold
```
