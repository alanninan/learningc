### **Control Flow in C: `if`, `if-else`, and Logical/Comparison Operators**

In C, control flow structures like `if` and `if-else` are used to make decisions within a program based on certain conditions. These structures, combined with comparison and logical operators, allow you to write code that behaves differently depending on the input or state of the program.

---

### **1. `if` Statement**
- **Explanation:**
  - The `if` statement evaluates a condition enclosed in parentheses `()`. If the condition is true (non-zero), the block of code inside the `{}` braces is executed.
- **Syntax:**
  ```c
  if (condition) {
      // Code to execute if condition is true
  }
  ```
- **Example:**
  ```c
  int age = 20;
  if (age >= 18) {
      printf("You are an adult.\n");
  }
  ```
  - **Explanation:** Here, if `age` is greater than or equal to 18, the message "You are an adult." is printed.

---

### **2. `if-else` Statement**
- **Explanation:**
  - The `if-else` statement allows for two possible paths of execution. If the condition in the `if` statement is true, the first block of code is executed. If the condition is false, the code in the `else` block is executed instead.
- **Syntax:**
  ```c
  if (condition) {
      // Code to execute if condition is true
  } else {
      // Code to execute if condition is false
  }
  ```
- **Example:**
  ```c
  int number = 10;
  if (number > 0) {
      printf("Positive number.\n");
  } else {
      printf("Non-positive number.\n");
  }
  ```
  - **Explanation:** If `number` is greater than 0, "Positive number." is printed. Otherwise, "Non-positive number." is printed.

---

### **3. Comparison Operators**
- **Explanation:**
  - Comparison operators are used to compare two values or expressions. The result of a comparison is either true (`1`) or false (`0`).
- **Common Comparison Operators:**
  - **`<`**: Less than
    - **Example:** `a < b` is true if `a` is less than `b`.
  - **`>`**: Greater than
    - **Example:** `a > b` is true if `a` is greater than `b`.
  - **`<=`**: Less than or equal to
    - **Example:** `a <= b` is true if `a` is less than or equal to `b`.
  - **`>=`**: Greater than or equal to
    - **Example:** `a >= b` is true if `a` is greater than or equal to `b`.
  - **`==`**: Equal to
    - **Example:** `a == b` is true if `a` is equal to `b`.
  - **`!=`**: Not equal to
    - **Example:** `a != b` is true if `a` is not equal to `b`.

- **Examples:**
  ```c
  int x = 5, y = 10;
  if (x < y) {
      printf("x is less than y.\n");
  }
  if (x != y) {
      printf("x is not equal to y.\n");
  }
  ```

---

### **4. Logical Operators**
- **Explanation:**
  - Logical operators are used to combine multiple conditions. The result is either true (`1`) or false (`0`).
- **Common Logical Operators:**
  - **`&&` (Logical AND):**
    - **Explanation:** Returns true if both conditions are true.
    - **Example:** `a && b` is true if both `a` and `b` are true.
  - **`||` (Logical OR):**
    - **Explanation:** Returns true if at least one condition is true.
    - **Example:** `a || b` is true if either `a` or `b` (or both) are true.
  - **`!` (Logical NOT):**
    - **Explanation:** Returns true if the condition is false, and false if the condition is true.
    - **Example:** `!a` is true if `a` is false (and vice versa).

- **Examples:**
  ```c
  int a = 5, b = 10;
  if (a > 0 && b > 0) {
      printf("Both a and b are positive.\n");
  }
  if (a < 0 || b < 0) {
      printf("At least one of a or b is negative.\n");
  }
  if (!a) {
      printf("a is zero.\n");
  }
  ```

---

### **5. `else if` Statement**
- **Explanation:**
  - The `else if` statement allows you to check multiple conditions sequentially. If the first `if` condition is false, the next `else if` condition is evaluated, and so on. If none of the conditions are true, the `else` block (if present) is executed.
- **Syntax:**
  ```c
  if (condition1) {
      // Code to execute if condition1 is true
  } else if (condition2) {
      // Code to execute if condition1 is false and condition2 is true
  } else {
      // Code to execute if none of the above conditions are true
  }
  ```
- **Example:**
  ```c
  int score = 85;
  if (score >= 90) {
      printf("Grade A\n");
  } else if (score >= 80) {
      printf("Grade B\n");
  } else if (score >= 70) {
      printf("Grade C\n");
  } else {
      printf("Grade F\n");
  }
  ```

### **Key Points**
- **Comparison Operators:** Used to compare two values and return a boolean result (true or false).
- **Logical Operators:** Used to combine multiple conditions and produce a single boolean result.
- **`if`, `if-else`, `else if`:** Control flow structures that allow conditional execution of code blocks based on boolean expressions.
- **Condition Execution:** Only the code block associated with the first true condition is executed. If none are true, the `else` block (if present) is executed.