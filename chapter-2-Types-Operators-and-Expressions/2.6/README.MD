## 2.6 Relational and Logical Operators

### Key points:

1. **Relational** opeartors are - **>**, **>=**, **<**, **<=**
    
    All of the have the same precedence, which is **lower** than **arithmetic** operators.

    so

    ```
    i < lim - 1
    ```

    is interpreted as

    ```
    i < (lim - 1)
    ```

2. **Equality** operators are - **==**, **!=**

    Which is **just below** in precedence than **relational operators**.


3. **Logical** operators **&&** and **||**
  
    Expressions connected by them evaluated from left to right, and evaluation stops as soon as the truth or falsehood of the result is known.

    The precedence of **&&** is higher than that of **||**, and both are **lower** than relational and equality operators, so expressions like.

4. **Assignment** operator **=** is lower than equality operators.

5. The **numeric value** of a **relational** or **logical** expression is **1 if the relation is true**, and **0** if the relation is **false**.

6. **Unary** operator **!** converts a **non-zero** operand into **0**, and a **zero** operand into **1**

    ```
    if (!valid)
    ```

    rather than

    ```
    if (valid == 0)
    ```

### Exercises:

#### Exercise 2-2
  Write a loop equivalent to the for loop above without using && or ||.
  
  Refer to the code in **loop-without-logical.c**.

##### Compile and run the code:

```
$ gcc -o loop-without-logical loop-without-logical.c

$ ./loop-without-logical
```
