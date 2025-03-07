// MATH -> DECIMAL NUMBERS -> BASE 10 NUMBERS 
//COMPUTER -> BINARY NUMBERS -> BASE 2 NUMBERS

"there are other number systems too that have
differente bases for example octadecimal , hexadecimal etc"

//CONVERTING A DICIMAL NUMBER INTO A BINARY NUMBER
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "put in the number here" << endl;
    cin >> num;
    int ans = 0;
    int pow = 1;
    while (num > 0){
        int rem = num%2;
        num = num/2;
        ans += rem*pow;
        pow *= 10;
    }
    cout << ans << endl;
    return 0;
}

"As we repeatedly divide the number by 2, the remainder at each 
step represents a binary digit. Each remainder is placed at an 
increasing power of 10, forming the final binary number."

//BINARY TO DICIMAL CONVERSION
int main(){
    int num;
    cout << "put in the number here" << endl;
    cin >> num;
    int ans = 0;
    int pow = 1;
    while (num > 0){
        int rem = num%2;
        ans += rem*pow;
        pow *= 2;
        num = num/10;
    }
    cout << ans << endl;
    return 0;
}
"As we repeatedly divide the number by 2, the remainder
 at each step represents a binary digit. Each remainder
  is placed at an increasing power of 10, forming the 
  final binary number."

"0 -> 00    1 -> 01    2 -> 10   3 -> 11    4 -> 100   5 -> 101    6 -> 110
 7 -> 111   8 -> 1000   9 -> 1001    10 -> 1010"
 //trick for converting a decimal into a binary ? in the notes
 //note a odd decimal always has 1 at the end because to add 1 by 2 ki power zero
 

//ADDITION OF BINARY NUMBERS
"Binary addition follows the same rules as 
decimal addition but is limited to 0 and 1.
Each bit is added from right to left, considering
a carry. If the sum of two bits is 2 or more, a 
carry is generated for the next higher bit. The
process continues until all bits and any remaining carry are processed."
// CODE TO ADD TWO BINARY NUMBERS


//TWO'S COMPLEMENT is in the notes
//ONE'S COMPLEMENT is in the notes