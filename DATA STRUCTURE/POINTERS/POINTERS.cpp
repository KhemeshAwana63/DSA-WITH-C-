#include <iostream>
using namespace std;

/*--------HOW PYTHON IS DIFFERENTE---------
Assigning a new variable to an existing one does not allocate new memory but 
makes it point to the same value. If the value is immutable, modifying the 
new variable creates a new memory allocation without affecting the original.
*/


/*
Memory Address -> Represented in hexadecimal for simplicity, it doesn’t 
                take extra space—just a readable format.
Memory Layout -> The first byte's address represents the data, even 
               if it spans multiple bytes, and no other data can occupy those bytes.
Pointers -> They store the address of the given variables/data types
Dereference -> It gives the value stored in the address it is dereferencing
Null pointer -> A pointer that does not store any location, if you don't specify it then 
                the pointer might store some garbage value
Array pointes -> When we create an array , the array itself is also a pointer and points 
                 to the first element of the array and it is contant pointer , hence you 
                 can not change it's address of the value
*/


/*------POINTER ARITHEMATIC-------
Increment(++)/decrement(--) -> The amount of bytes that the given data type takes is added or 
                               subtracted in each incrementation and decrementaiot
Add/Subtract Number -> bytes that the numbers takes are added or subtracted
                       eg -> 3 is equaivalent to 3 times (the no.of bytes the data type takes)
Adding/Subtracting the pointers -> addition of pointers is not allowed in c++
                                subtraction is allowed in same type of pointers and the
                                answer is the no. of block of memory that can come between
                                 the two pointers(each block is equal to the bytes the pointer take)
Comparison(== , != , < , > , >= , <=) -> basically how maths works between two addresses
*/

// PASS BY REFERENCE USING POINTER
void UsingPointer(int* ptr){
    *(ptr) = 20;
}
// PASS BY REFERENCE USING ALIAS
void UsingAlias(int &b){
    b = 10;
}



int main(){
    int a = 10;
    int* ptr = &a;
    int** parentptr = &ptr;
    int* ptr2 = NULL;
    int arr[] = {1,5,3,7};

    UsingPointer(ptr);
    UsingAlias(a);

    cout << *(ptr) << endl;
    cout << **(parentptr) << endl;
    cout << *(arr) << endl;
    cout << *(arr+1) << endl;
    return 0;
}