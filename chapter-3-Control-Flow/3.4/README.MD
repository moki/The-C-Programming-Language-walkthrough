## 3.4 Switch
**switch** is a **multi-way decision** that **tests** whether an **expression matches** one of a number of **constant integer values**

### Key points:

1. All case **expressions** must be **different**.

2. **Default** case **executed** if **none** of the cases **match**. It is **(optional)**.

3. **Syntax**

    ```
    switch (expression) {
      case const expression:
        statements;
        break;
      default:
        statements;
        break;
    }
    ```

4. **break** performs **immediate** exit from the **switch**

5. After code for one **case** done, execution **falls through** to the next **unless** you take **explicit** action to **escape**.

6. **Falling though** cases is a **mixed blessing**
      
      #### Pros:
      **Allows** **several** cases to be **attached** to a single action.

      Use **sparingly**, and **comment it well**  

      #### Cons:
      It implies that normally **each case** must **end** with a **break** statement.


### Exercises:

#### Exercise 3-2
  Writre a function escape(s, t) that converts characters like newline and tab into visible escape sequences like \n \t as it copies the string t to s, use a **switch**. Write a function for the other direction as well, converting escape sequences into the real characters.
  
  Refer to the code in **binary.c**.

##### Compile and run the code:

```
$ gcc -o binary binary.c

$ ./binary
```