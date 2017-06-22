## 4.9 Initialization

### Key points:

1. In the **absence** of **explicit** initialization, **external** and **static** variables are guaranteed to be **initialized** to **zero**

    **automatic** and **register** variables have **undefined** initial values.


2. **Scalar** variables may be **initialized** when they are **defined**, by following name with an **equals** sign and an **expression**.

    ```
    int x = 1;
    char squote = '\'";
    long day = 1000L * 60L * 60L * 24L;
    ```

3. For **external** and **static** variables, the initializer must be a **constant** **expression**. It's done **once**, before program **execution**. For **automatic** and **register** variables is done each time the **function** or **block** is **entered**.

4. For **automatic** variables, the initializer may be **any expression**

    Therefore it's legal to do:

    ```
    int binsearch(int x, int vs[], int n) {
      int low = 0;
      int high = n - 1;
      int mid;
    }
    ```

    instead of:

    ```
    int low, high, mid;

    low = 0;
    high = n - 1;
    ```

    Just a matter of taste.

5. **Arrays** may be initialized by following its **declaration** with a **list of initializers** enclosed in **braces** and **separated** by **columns**.

    ```
    int days[] = { 31, 28, 31, 30, 31, 30 };
    ```

    When the **size** **omitted**, the compiler will **compute** the **length** by **counting** the **initializers**.

    When there are **few** intializers for an array than the **number specified**, the missing elements will be **zero**, for **external**, **static**, and **automatic** variables.

    **Character Arrays** - special case of initialization. **String** may be **used** **instead** of the **braces** and **commas** notation.

    ```
    char pattern[] = "ould";
    ```

    The **length** is 5 - **four** characters and **terminating '\0'**
