### **Data Types in C**

C provides several basic data types that you can use to define variables. Each type specifies the size and type of data that the variable can hold. Below is a summary of the most common data types in C:

---

#### **1. `char`**
- **Size:** 1 byte (typically 8 bits)
- **Range:**
  - **Signed:** -128 to 127
  - **Unsigned:** 0 to 255
- **Purpose:** Used to store single characters. Since it occupies 1 byte, it can also be used to store small integers.
- **Definition:** 
  ```c
  char letter = 'A';
  unsigned char age = 200;
  ```

---

#### **2. `int`**
- **Size:** Typically 4 bytes (can vary depending on the system)
- **Range:**
  - **Signed:** -2,147,483,648 to 2,147,483,647
  - **Unsigned:** 0 to 4,294,967,295
- **Purpose:** Used to store whole numbers.
- **Definition:**
  ```c
  int count = 100;
  unsigned int population = 7000000000;
  ```

---

#### **3. `short`**
- **Size:** Typically 2 bytes (16 bits)
- **Range:**
  - **Signed:** -32,768 to 32,767
  - **Unsigned:** 0 to 65,535
- **Purpose:** Used to save memory in large arrays when you know the range of values will be small.
- **Definition:**
  ```c
  short temperature = -40;
  unsigned short score = 65535;
  ```

---

#### **4. `long`**
- **Size:** Typically 4 or 8 bytes (system-dependent)
- **Range:**
  - **Signed:** At least -2,147,483,648 to 2,147,483,647 (often larger)
  - **Unsigned:** At least 0 to 4,294,967,295 (often larger)
- **Purpose:** Used when `int` is not large enough to hold the required value.
- **Definition:**
  ```c
  long distance = 150000000L;
  unsigned long memorySize = 4294967295UL;
  ```

---

#### **5. `long long`**
- **Size:** Typically 8 bytes (64 bits)
- **Range:**
  - **Signed:** -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
  - **Unsigned:** 0 to 18,446,744,073,709,551,615
- **Purpose:** Used for extremely large integers.
- **Definition:**
  ```c
  long long largeNumber = 9223372036854775807LL;
  unsigned long long bigUnsigned = 18446744073709551615ULL;
  ```

---

#### **6. `float`**
- **Size:** Typically 4 bytes (32 bits)
- **Range:** Approximately ±3.4E-38 to ±3.4E+38
- **Purpose:** Used to store single-precision floating-point numbers (decimals).
- **Precision:** 6-7 decimal digits
- **Definition:**
  ```c
  float price = 9.99f;
  ```

---

#### **7. `double`**
- **Size:** Typically 8 bytes (64 bits)
- **Range:** Approximately ±1.7E-308 to ±1.7E+308
- **Purpose:** Used to store double-precision floating-point numbers (decimals).
- **Precision:** 15-16 decimal digits
- **Definition:**
  ```c
  double pi = 3.141592653589793;
  ```

---

### **Variable Definition in C**

When defining variables in C, you specify the data type followed by the variable name. Optionally, you can also initialize the variable with a value at the time of definition.

#### **Syntax for Defining Variables:**
```c
data_type variable_name = value;
```

#### **Examples:**
```c
char grade = 'A';
int age = 25;
unsigned short year = 2024;
long population = 7800000000L;
float temperature = 36.6f;
double distance = 12345.6789;
```

- **Unsigned Types:** To declare an unsigned variable, simply add the keyword `unsigned` before the type (e.g., `unsigned int`, `unsigned char`).
- **Long and Long Long:** For larger integers, use `long` or `long long` with an optional suffix (`L` for `long`, `LL` for `long long`).

### **Key Points**
- **Signed vs Unsigned:** Signed types can store both positive and negative values, while unsigned types can only store positive values but with a larger maximum range.
- **Precision:** Use `float` for less precision and `double` for more precision in floating-point calculations.
- **Size Variations:** The actual size of `int`, `short`, `long`, etc., can vary depending on the system, but the ranges provided are typical for most modern systems.
