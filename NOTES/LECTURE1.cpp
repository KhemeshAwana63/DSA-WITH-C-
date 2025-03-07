#include <iostream>
using namespace std;

// ===== TYPE CASTING =====
// Conversion (Implicit) → Automatic
// Casting (Explicit) → Manual

void conversion() {
    int value = 67;
    double num = value;  // Implicit
    cout << num << endl;
}

void casting() {
    float value = 45.44;
    int num = (int)value;  // Explicit
    cout << num << endl;
}

int main() {
    int num = 3;
    cout << sizeof(num) << endl;  // Prints size of int (4 bytes)
    cout << "hello world" << endl;

    conversion();
    casting();

    cout << 5 / 2 << endl;       // Int / Int = Int (2)
    cout << 5 / (float)2 << endl; // Int / Float = Float (2.5)
    
    cout << (3 > 6) << endl;  // False -> 0
    cout << !(3 < 6) << endl; // Logical NOT
    cout << (3 < 6) && (4 > 3) ; // Logical AND
    cout << (3 < 8) || (3 > 6) ; // Logical OR

    return 0;
}

/*
NOTES:
- Boilerplate Code → Standard structure of C++ programs.
- Use single quotes ('a') for characters, double quotes ("abc") for strings.
- Data Type Sizes:
  - int → 4 bytes
  - char → 1 byte
  - float → 4 bytes
  - bool → 1 byte
  - double → 8 bytes
- ASCII values are stored for characters.
*/



