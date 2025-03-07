#include <iostream>
using namespace std;

int main(){
    int marks[5] = {12,45,31,65,23}; //this creates a array of 5 blocks
    double prices[] = {45,42,67,22,13,567,33};    // this creates array of block equal to number of elements
    char names[3] = {}; //this creates an empty array of size 3
    marks[0] = 56;    //this changes the value of array at 0th position
    cout << marks[0] << endl;  //this prints the marks value at 0th position
    return 0;
}
//NPW WE ARE GOING TO  SEE HOW WE PUT LOOP OVER AN ARRAY
void loops(){
    int size = 5;
    int marks[size];
    for(int i=0;i < size ; i++){
        cin >> marks[i];
    }
    for (int i=0 ; i < size;i++){
        cout << marks[i] << endl;
    }
    return 0;
}

//FINDING THE SMALLEST AND LARGEST NUMBER IN A ARRAY
void smallest_largest(){
    int marks[] = {12,67,33,0,-5,98,-45};
    int size = 7;
    int smallest  = INT_MAX;
    int largest = INT_MIN;
    for(int i=0 ; i<size ; i++){         //method 1
        if (marks[i] < smallest){
            smallest = marks[i];
        }
        largest = max(marks[i],largest);   //method 2
    }
    cout << "smallest :" << smallest << endl;
    cout << "largest  :" << largest << endl;
}
// you have to (#include <climits>) to use INT_MAX and INT_MIN  


//PASS BY REFERENCE
int khemesh(int arr[] , int size){
    for(int i = 0 ; i < size ; i++){
        arr[i] = 2*arr[i];
    }
    return 0;
}

int main(){
    int marks[] = {1,3,5,7,9};
    int size = 5;
    khemesh(marks , 5);
    for(int i = 0; i<size ; i++){
        cout << marks[i] << endl;
    }
    return  0;
}
"WRITE DOWN CODES FOR THESE TWO"
//LINEAR SEARCH
//REVERSE AN ARRAY