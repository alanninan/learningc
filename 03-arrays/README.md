### **Arrays in C**

An array in C is a collection of variables of the same data type stored in contiguous memory locations. Arrays allow you to store multiple values under a single variable name, accessed by an index.

#### **1. Declaration of Arrays**
To declare an array in C, specify the data type, the array name, and the size (i.e., the number of elements the array will hold).

#### **Syntax:**
```c
data_type array_name[array_size];
```

#### **Examples:**
```c
int numbers[10];          // Array of 10 integers
char name[50];            // Array of 50 characters (useful for strings)
float prices[5];          // Array of 5 floating-point numbers
```

- **Size:** The size of the array must be a constant integer expression. This tells the compiler how much memory to allocate for the array.
- **Indexing:** Array indices start at 0. The first element is `array_name[0]`, and the last element is `array_name[array_size-1]`.

#### **2. Initialization of Arrays**
You can initialize an array when you declare it by providing a comma-separated list of values enclosed in braces `{}`.

#### **Examples:**
```c
int numbers[5] = {1, 2, 3, 4, 5};        // Initializing an array with 5 integers
char vowels[5] = {'a', 'e', 'i', 'o', 'u'}; // Initializing an array with 5 characters

// You can also let the compiler determine the size based on the initializer list
float temperatures[] = {98.6, 99.5, 100.1}; // Array of 3 floats
```

- **Partial Initialization:** If you provide fewer initial values than the array size, the remaining elements are automatically initialized to 0 (for integers and floats) or `\0` (for characters).
```c
int numbers[5] = {1, 2};   // Remaining elements initialized to 0: {1, 2, 0, 0, 0}
```

#### **3. Accessing Array Elements**
You can access or modify individual elements of an array using the array index.

#### **Examples:**
```c
int scores[3] = {85, 90, 95};
int first_score = scores[0];   // Accessing the first element (85)
scores[2] = 98;                // Changing the third element to 98
```

- **Out of Bounds:** Accessing an array index outside its bounds (e.g., `scores[5]` for a size 3 array) leads to undefined behavior.

#### **4. Multidimensional Arrays**
C allows the creation of multidimensional arrays (e.g., 2D arrays, 3D arrays). The most common is the 2D array, which is essentially an array of arrays.

#### **Syntax for a 2D Array:**
```c
data_type array_name[rows][columns];
```

#### **Example of a 2D Array:**
```c
int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```
- **Accessing Elements:** Use two indices: `array_name[row][column]`.
```c
int value = matrix[1][2];  // Accesses the element at row 1, column 2 (which is 7)
```

#### **5. Arrays and Functions**
Arrays can be passed to functions by reference. This means that when you pass an array to a function, you are passing the memory address of the first element, not a copy of the array.

#### **Passing Arrays to Functions:**
```c
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);  // Pass the array to the function
    return 0;
}
```
- **Function Definition:** You do not need to specify the size of the array parameter in the function declaration.

### **Key Points to Remember**
- **Fixed Size:** Once declared, the size of an array cannot be changed. C does not have dynamic arrays (you can use dynamic memory allocation with pointers for that).
- **Contiguous Memory:** Elements of an array are stored in contiguous memory locations, making access efficient.
- **Zero-based Indexing:** Array indices start from 0.
- **Initialization:** If an array is not fully initialized, the remaining elements are set to 0 or `\0`.
- **Multidimensional Arrays:** 2D arrays are common and can be thought of as tables or matrices.
