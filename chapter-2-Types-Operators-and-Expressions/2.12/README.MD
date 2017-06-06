## 2.12 Precedence and order of Evaluation

### Key points:

1. C **doesn't** specify the **order** in which the **operands** of an operator are **evaluated**.

    For example:


    ```
    x = f() + g();
    ```

    **f** may be **evaluated before g** or **vice versa**
    if either f or g **alters a variable** on which the **other depends**, **x** can **depend** on the **order of evaluation**

2. Similarly, the **order** in which function **arguments** are **evaluated** is **not specified**.

3. **Side effects** on **arguments** take effect **before function call**.

4. The **moral** is that writing **code** that **depends** on **order of evaluation** is **bad** programming **practice**. 