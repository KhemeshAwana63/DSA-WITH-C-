/*
    C++ Notes: Conditional Statements and Ternary Operator
*/

#include <iostream>
using namespace std;

int main() {
    /*
        Conditional Statements in C++
        --------------------------------
        Conditional statements allow decision-making in programs based on certain conditions.
    */
    
    // 1. if-else Statement
    // The if-else statement executes different blocks of code based on conditions.
    int a = 8;
    
    if (a <= 8) {
        cout << "Yes, it is less than or equal to 8" << endl;
    } else if (a == 8) {
        cout << "It is equal to 8\n";
    } else {
        cout << "No, it is not less than or equal to 8" << endl;
    }
    
    /*
        Key Points:
        - Curly braces `{}` are optional if there is only one statement inside if, else if, or else.
        - The if condition is checked first; if it's false, else if is checked, and finally, else executes if no conditions are met.
    */
    
    // 2. Ternary Operator ( ? : )
    // The ternary operator is a shorthand way of writing simple if-else statements in a single line.
    int n = 45;
    
    // Method 1: Direct output
    (n >= 30) ? cout << "Pass" : cout << "Fail";
    
    // Method 2: Using cout to print the result
    cout << (n >= 30 ? "Pass" : "Fail");
    
    /*
        Key Points:
        - The syntax of the ternary operator:  condition ? expression_if_true : expression_if_false;
        - A character can be directly compared to its ASCII value in if-else statements.
    */
    
    // Example: Comparing Characters to ASCII Values
    char ch = 'A';
    if (ch == 65) { // 65 is the ASCII value of 'A'
        cout << "Character is A";
    }
    
    return 0;
}
