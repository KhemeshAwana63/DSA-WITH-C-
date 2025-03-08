#include <iostream>
#include <vector>  // we use this instead of bit C++.h because we will indivisually include all thing ourself
using namespace std;

// IN VECTORS WE USE FOR EACH LOOPS NOT THE REGULAR ONES
int main(){
    vector <int> khemu; // size = 0
    vector <int> tony = {12,4,65,44}; // size = 4
    vector <int> karan(5,0); // size = 5 and values are 0
    cout << tony[0] << endl;
    cout << karan[3] << endl;
    for(int val : tony ) cout << val << " ";  // here the vlaue of vector is extracted for each index just like python
    return 0;
}
//FUNCTIONS
/*
    



*/