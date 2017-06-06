## 2.8 Increment and Decrement Operator
C provides two unusual operators to increment and decrement variables.

### Key points:

1. The **increment** operator ++ adds 1 to its operand.

2. The **decrement** operator -- subtracts 1.

3. May be used **postfix** or **prefix**, in both cases the effect is to **inrement** or **decrement** operand.

    The nuance is:
    
    **prefix** - increments/decrements value **before** it is **used**.

    **postfix** - increments/decrements **after** value **used**. 

    In the Example below **variable x** going to have value **6**.

    ```
    int x, n;

    n = 5;

    x = ++n;
    ```

    But if we use **prefix** in the same case, we will get **variable x** to the value **5**.

    ```
    int x, n;

    n = 5;

    x = n++;
    ```

4. Both of the can be applied only to **variables**.

    The use case below is **illegal**

    ```
    int i, j;

    i = j = 5;

    (i + j)++;
    ```

5. In the **context** when **no value** from the **expression** wanted, just the **mutation** effect **increment/decrement** - **postfix** and **prefix** are the **same**.

### Exercises:

#### Exercise 2-4
  Write an alternate version of squeeze(s1, s2) that deletes each character in s1 that matches any character in string s2.
  
  Refer to the code in **squeeze.c**.

##### Compile and run the code:

```
$ gcc -o squeeze squeeze.c

$ ./squeeze
```

#### Exercise 2-5
  Write the function any(s1, s2), which returns the first location in the string s1 where any character from the string s2 occurs, or -1 if s1
  contains no character from s2. (The standart lib function strpbrk does the same job but returns a pointer to the location.)
  
  Refer to the code in **any.c**.

##### Compile and run the code:

```
$ gcc -o any any.c

$ ./any
```