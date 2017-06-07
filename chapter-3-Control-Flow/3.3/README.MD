## 3.3 else-if
Occurs so often that it is worth a brief separate discussion.

### Key points:

1. **General** way of writing multi-way decision. **Evaluated in order**, if any **expression** is true, the statement associated with it is executed, and this terminates the whole chain. The **last** else part becomes **none of the above**.

2. **Trailing** else might be omitted when there is no default.

### Exercises:

#### Exercise 3-1
  Writre binary search that makes one test instead of two inside the loop, and measure the difference in the runtime.
  
  Refer to the code in **binary.c**.

##### Compile and run the code:

```
$ gcc -o binary binary.c

$ ./binary
```