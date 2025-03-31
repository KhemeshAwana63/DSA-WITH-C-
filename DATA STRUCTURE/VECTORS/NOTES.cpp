#include <iostream>
#include <vector>  // we use this instead of bit C++.h because we will indivisually include all thing ourself
using namespace std;

// IN VECTORS WE USE FOR EACH LOOPS NOT THE REGULAR ONES
int main(){
    vector <int> khemu; // size = 0
    vector <int> tony = {12,4,65,44}; // size = 4
    vector <int> karan(5,0); // size = 5 and values are 0
    cout << tony[0] << endl;
    karan.push_back(8);

    
    cout << karan.at(5) << endl;
    for(int val : tony ) cout << val << " ";  // here the vlaue of vector is extracted for each index just like python
    return 0;
}
//FUNCTIONS
/*
    size         - Returns the number of elements in the vector.
    push_back    - Adds an element to the end of the vector.
    pop_back     - Removes the last element of the vector.
    front        - Returns the first element of the vector.
    back         - Returns the last element of the vector.
    at           - Returns the element at a given index (with bounds checking).
    capacity     - Returns the total number of elements the vector can hold before reallocating.
*/

/*
NOTES -> When we use the push_back function it does not remove 
the value instantly untill overwritten , it still hold on to the
 value even though it is been removed (real ghost feeling right?)
*/