// ================== NUMBER SYSTEMS ==================
// Decimal (Base 10) → Used in math (0-9)
// Binary  (Base 2)  → Used in computers (0,1)
// Other systems: Octal (Base 8), Hexadecimal (Base 16)

// ========== DECIMAL TO BINARY CONVERSION ==========
//10 → (10%2=0)×1 + (5%2=1)×10 + (2%2=0)×100 + (1%2=1)×1000 = 1010 (Binary).
#include <iostream>
using namespace std;

int decimalToBinary(int num) {
    int ans = 0, pow = 1;
    while (num > 0) {
        int rem = num % 2;
        num /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter decimal number: ";
    cin >> num;
    cout << "Binary: " << decimalToBinary(num) << endl;
    return 0;
}

// ========== BINARY TO DECIMAL CONVERSION ==========
/*
Binary digits represent powers of 2.
Example: 1011 → (1×2³) + (0×2²) + (1×2¹) + (1×2⁰) = 11
*/

int binaryToDecimal(int num) {
    int ans = 0, pow = 1;
    while (num > 0) {
        int rem = num % 10;
        ans += rem * pow;
        pow *= 2;
        num /= 10;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter binary number: ";
    cin >> num;
    cout << "Decimal: " << binaryToDecimal(num) << endl;
    return 0;
}

// ========== BINARY ADDITION ==========
/*
Rules:
0 + 0 = 0
0 + 1 = 1
1 + 0 = 1
1 + 1 = 10 (carry 1)
Example: 
  101
+  11
------
 1000
*/


// CODE TO ADD TWO BINARY NUMBERS


//TWO'S COMPLEMENT is in the notes
//ONE'S COMPLEMENT is in the notes