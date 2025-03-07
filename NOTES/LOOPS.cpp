/*
    C++ Notes: Loops (For Loop and While Loop)
*/

#include <iostream>
using namespace std;

int main() {
    /*
        Loops in C++
        ------------
        Loops allow executing a block of code multiple times based on a condition.
        Types of loops in C++:
        1. For Loop
        2. While Loop
    */
    
    // 1. For Loop
    // Used when the number of iterations is known.
    // Syntax: for(initialization; condition; update){ block of code }
    
    cout << "For Loop Example:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Iteration: " << i << endl;
    }
    
    /*
        Key Points:
        - The loop runs as long as the condition is true.
        - Initialization happens only once before the loop starts.
        - The update statement executes after every iteration.
    */
    
    // 2. While Loop
    // Used when the number of iterations is unknown and depends on a condition.
    // Syntax: while(condition){ block of code }
    
    cout << "\nWhile Loop Example:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << "Iteration: " << j << endl;
        j++;
    }
    
    /*
        Key Points:
        - The while loop runs as long as the condition is true.
        - If the condition is false at the beginning, the loop will not execute at all.
    */
    
    // 3. Do-While Loop
    // Ensures that the loop executes at least once, even if the condition is false.
    // Syntax: do { block of code } while(condition);
    
    cout << "\nDo-While Loop Example:" << endl;
    int k = 1;
    do {
        cout << "Iteration: " << k << endl;
        k++;
    } while (k <= 5);
    
    /*
        Key Points:
        - The loop body executes first before checking the condition.
        - At least one iteration is guaranteed.
    */
    
    // 4. Nested Loops
    // A loop inside another loop (useful for working with matrices, patterns, etc.).
    
    cout << "\nNested Loop Example:" << endl;
    for (int x = 1; x <= 3; x++) {
        for (int y = 1; y <= 3; y++) {
            cout << "(" << x << ", " << y << ") ";
        }
        cout << endl;
    }
    
    /*
        Additional Information:
        - Loops can be controlled using break and continue.
        - 'break' exits the loop immediately.
        - 'continue' skips the current iteration and moves to the next.
    */
    
    cout << "\nBreak and Continue Example:" << endl;
    for (int m = 1; m <= 5; m++) {
        if (m == 3) {
            cout << "Skipping iteration " << m << " using continue" << endl;
            continue;
        }
        if (m == 5) {
            cout << "Breaking the loop at " << m << endl;
            break;
        }
        cout << "Iteration: " << m << endl;
    }
    
    return 0;
}

/*
    Conclusion:
    - Use 'for' loops when the number of iterations is known.
    - Use 'while' loops when the number of iterations depends on a condition.
    - Use 'do-while' loops when at least one execution is required.
    - 'break' and 'continue' help control loop flow.
*/
