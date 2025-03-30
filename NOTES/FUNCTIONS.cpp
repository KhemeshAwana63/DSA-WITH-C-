/*
=============== FUNCTIONS IN C++ ===============
1. Functions help break code into reusable blocks.
2. Two types: Built-in (e.g., pow(), max()) & User-defined.
3. Function syntax:
       returnType functionName(parameters) {
           // Code
           return value; // Optional
       }
4. Function call must match return type & parameters.

=============== FUNCTION TYPES ===============
1. VOID FUNCTION (No return, only executes code)
   void greet() { cout << "Hello, world!" << endl; }

2. FUNCTION WITH RETURN (Returns a value)
   int add(int a, int b) { return a + b; }

3. FUNCTION WITH DEFAULT ARGUMENTS
   int multiply(int a, int b = 2) { return a * b; }
   multiply(5);  // Uses default b=2 -> Output: 10

4. FUNCTION OVERLOADING (Same name, different params)
   int square(int x) { return x * x; }
   double square(double x) { return x * x; }

=============== PASSING PARAMETERS ===============
1. PASS BY VALUE (Creates a copy, original stays unchanged)
   void passValue(int x) { x = 10; } // Doesn't affect main()'s variable

2. PASS BY REFERENCE (Changes original variable)
   void passRef(int &x) { x = 10; } // Affects original variable

3. PASSING ARRAYS (Always by reference)
   void doubleArray(int arr[], int size) {
       for (int i = 0; i < size; i++) arr[i] *= 2;
   }

=============== INLINE FUNCTIONS ===============
1. Used for small functions to optimize execution speed.
2. Example:
   inline int cube(int x) { return x * x * x; }

=============== RECURSION ===============
1. A function that calls itself.
2. Example:
   int factorial(int n) {
       if (n == 0) return 1;
       return n * factorial(n - 1);
   }

=============== NOTES ===============
- Functions reduce redundancy and improve readability.
- If return type is not void, function must return a value.
- Main() is also a function and serves as the entry point.
*/



/*
=============== STACK MEMORY IN C++ ===============

1. The compiler **automatically calls** the `main()` function.
2. Every function gets **a stack frame** where all its local data is stored.
3. The **current function** is always at the **top of the stack**.
4. When a function **returns**, its stack frame is removed from memory.
5. The `return` statement can **exit a function** without returning a value.

=============== STACK MEMORY VISUALIZATION ===============

Example Code:
----------------------------------------------------------
void funcA() {
    int x = 5;
    cout << x;
}

void funcB() {
    int y = 10;
    funcA();
}

int main() {
    funcB();
    return 0;
}
----------------------------------------------------------

STACK MEMORY (Top to Bottom - LIFO Order):

Step 1: `main()` starts execution
|  main()  |

Step 2: `main()` calls `funcB()`
| funcB()  |
|  main()  |

Step 3: `funcB()` calls `funcA()`
| funcA()  |
| funcB()  |
|  main()  |

Step 4: `funcA()` finishes, gets removed from stack
| funcB()  |
|  main()  |

Step 5: `funcB()` finishes, gets removed from stack
|  main()  |

Step 6: `main()` finishes, stack is empty.
(Stack is cleared when the program ends)

=============== NOTES ===============
- Stack follows **LIFO (Last In, First Out)** order.
- Every function call **pushes a new stack frame**.
- Returning from a function **pops the stack frame**.
- Stack memory is **limited**, too many recursive calls can cause **Stack Overflow**.
*/

/* PASS BY VALUE
      copy of the argument is passed in the function with a differente address 
      provided to that copy then the original address and once the functions completes 
      the tasks that copy is removed from the system
*/

// QUESTIONS
/*
   CHECK IF THE NUMBER IS PRIME OR NOT
   PRINT THE FIBONACCI 
   SWITCH STATEMENT
   PRINT ALL PRIME NUMBERS FROM ONE TO N
   CALCULATE THE SUM OF DIGITS OF A NUMBER
   CALCULATE nCr for  n and r
*/