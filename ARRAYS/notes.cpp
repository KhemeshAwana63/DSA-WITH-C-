#include <iostream>
#include <climits> // For INT_MAX & INT_MIN
using namespace std;

// ===== ARRAYS =====
int main() {
    int marks[5] = {12, 45, 31, 65, 23};  // Array of 5 elements
    double prices[] = {45, 42, 67, 22, 13, 567, 33}; // Auto-sized
    char names[3] = {}; // Empty array of size 3

    marks[0] = 56; // Update value at index 0
    cout << marks[0] << endl; // Print value at index 0

    return 0;
}

// ===== LOOPING OVER AN ARRAY =====
void loops() {
    int size = 5, marks[size];

    for (int i = 0; i < size; i++) cin >> marks[i]; // Input values
    for (int i = 0; i < size; i++) cout << marks[i] << endl; // Output values
}

// ===== FINDING SMALLEST & LARGEST IN ARRAY =====
void smallest_largest() {
    int marks[] = {12, 67, 33, 0, -5, 98, -45};
    int size = 7, smallest = INT_MAX, largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (marks[i] < smallest) smallest = marks[i]; // Method 1
        largest = max(largest, marks[i]);   // Method 2
    }

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
}

// ===== PASS BY REFERENCE =====
void pass_by_reference(int arr[], int size) {
    for (int i = 0; i < size; i++) arr[i] *= 2; // Double each element
}

int main2() {
    int marks[] = {1, 3, 5, 7, 9};
    int size = 5;

    pass_by_reference(marks, size); // Function modifies original array
    for (int i = 0; i < size; i++) cout << marks[i] << endl;

    return 0;
}

/*
NOTES:
- INT_MAX & INT_MIN → Need #include <climits>
- Pass by reference allows modifying arrays inside functions.
*/


//LINEAR SEARCH -> this is just loop for each indexing 
//REVERSE AN ARRAY-> two pinters approach
int main(){
    int marks[] = {1, 3, 5, 7, 9};
    int size = 5;
    int start = 0;
    int end = size -1;
    while (start < end){
        swap(marks[start],marks[end]);
        start++;
        end--;
    }
    cout << marks[0] <<endl;
    return 0;
}