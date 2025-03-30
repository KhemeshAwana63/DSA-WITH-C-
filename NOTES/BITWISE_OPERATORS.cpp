#include <iostream>

int main() {
    std::string cpp_operators = R"(
C++ Operator Precedence:
--------------------------------------------
| Precedence | Operator(s)               | Type                      | Associativity |
|------------|---------------------------|---------------------------|--------------|
| 1 (Highest) | ::                        | Scope resolution         | Left to Right |
| 2          | ++ -- () [] . ->           | Postfix (Unary)          | Left to Right |
| 3          | ++ -- + - ! ~ * & sizeof   | Prefix (Unary)           | Right to Left |
| 4          | .* ->*                     | Pointer-to-member        | Left to Right |
| 5          | * / %                      | Multiplication, Division | Left to Right |
| 6          | + -                        | Addition, Subtraction    | Left to Right |
| 7          | << >>                      | Bitwise Shift            | Left to Right |
| 8          | < <= > >=                  | Relational               | Left to Right |
| 9          | == !=                      | Equality                 | Left to Right |
| 10         | &                          | Bitwise AND              | Left to Right |
| 11         | ^                          | Bitwise XOR              | Left to Right |
| 12         | |                          | Bitwise OR               | Left to Right |
| 13         | &&                         | Logical AND              | Left to Right |
| 14         | ||                         | Logical OR               | Left to Right |
| 15         | ?:                         | Ternary (Conditional)     | Right to Left |
| 16         | = += -= *= /= %= &= |= ^= <<= >>= | Assignment | Right to Left |
| 17 (Lowest) | ,                         | Comma                    | Left to Right |
--------------------------------------------
)";

    std::string python_operators = R"(
Python Operator Precedence:
--------------------------------------------
| Precedence | Operator(s)                 | Type                      | Associativity |
|------------|-----------------------------|---------------------------|--------------|
| 1 (Highest) | () [] {}                   | Parentheses, Lists, Dicts | Left to Right |
| 2          | **                          | Exponentiation            | Right to Left |
| 3          | +x -x ~x                    | Unary Operators           | Right to Left |
| 4          | * / // %                    | Multiplication, Division  | Left to Right |
| 5          | + -                          | Addition, Subtraction     | Left to Right |
| 6          | << >>                        | Bitwise Shift             | Left to Right |
| 7          | &                            | Bitwise AND               | Left to Right |
| 8          | ^                            | Bitwise XOR               | Left to Right |
| 9          | |                            | Bitwise OR                | Left to Right |
| 10         | == != < <= > >= is in        | Comparisons               | Left to Right |
| 11         | not                          | Logical NOT               | Right to Left |
| 12         | and                          | Logical AND               | Left to Right |
| 13         | or                           | Logical OR                | Left to Right |
| 14 (Lowest) | = += -= *= /= //= %= **= &= |= ^= >>= <<= | Assignment | Right to Left |
--------------------------------------------
)";

    std::cout << cpp_operators << std::endl;
    std::cout << python_operators << std::endl;

    return 0;
}

//SCOPES
#include <iostream>

int main() {
    std::string scope_diff = R"(
Scope Difference: C++ vs Python
---------------------------------------
1. **Local and Global Variables:**
   - A **local variable** is declared inside a function and can only be used there.
   - A **global variable** is declared outside all functions and can be used anywhere.

2. **C++ Scope:**
   - Uses `{}` to define blocks.
   - Variables inside `{}` are **local** to that block.
   - Global variables can be accessed inside functions, but modifying them needs `::` or `static`.

3. **Python Scope:**
   - Uses indentation instead of `{}`.
   - **LEGB Rule** (Local, Enclosing, Global, Built-in):
     - **Local** → Inside function.
     - **Enclosing** → Inside nested function.
     - **Global** → Defined outside functions.
     - **Built-in** → Default Python functions.
   - Use `global` or `nonlocal` to modify outer variables.

Key Difference:  
C++ has **explicit scoping with `{}`**, while Python **automatically looks for 
variables in LEGB order**.
---------------------------------------
)";
    
    std::cout << scope_diff << std::endl;
    return 0;
}
