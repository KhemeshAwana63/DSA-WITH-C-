#include <climits>
#include <iostream>
using namespace std;



// FINDING THE SMALLEST NUMBER USING THE MAX AND MIN FUNCTION
int LargestSmallest(){
    int marks[] = {12,67,11,8,44};
    int size = 5;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i = 0 ; i < size ; i++){
        smallest = min(marks[i] , smallest);
        largest = max(marks[i] , largest);
    }
    cout << smallest << endl;
    cout << largest << endl;
    return 0;
}

// finding the smallest number without using the min max function
int smallest(){
    int marks[] = {12,67,11,8,44};
    int size = 5;
    int smallest = marks[0];
    for(int i = 1 ; i < size ; i++){
        if (marks[i] < smallest){
            smallest = marks[i];
        }
    }
    cout << smallest;
    return 0;
}

//REVERSE AN ARRAY
int Reverse(){
    int marks[]={12,43,63,66,32,52};
    int size = 6;
    int str = 0;
    int end = size - 1;
    while (str < end){
        swap(marks[str],marks[end]);
        str++;
        end--;
    }
    cout << marks[0] ;
    return 0;
}

//WAF TO CALCULATE SUM AND PRODUCT OF ALL NUMBERS IN AN ARRAY(only showing addition)
int Sum(){
    int marks[]={12,43,63,66,32,52};
    int size = 6;
    int sum = 0;
    for(int i = 0 ; i< size ; i++){
        sum += marks[i];
    }
    cout << sum << endl;
    return 0;
}


//WAF TO SWAP THE MAX AND MIN NUMBERS OF AN ARRAY
int SwappingMaxAndMin(){
    int marks[] = {12,67,11,8,44};
    int size = 5;
    int smallest = marks[0];
    int SmallestIndex = 0;
    int largest = marks[0];
    int LargestIndex = 0;
    for(int i = 1 ; i < size ; i++){
        if (marks[i] < smallest){
            smallest = marks[i];
            SmallestIndex = i;
        }
        if (marks[i] > largest){
            largest = marks[i];
            LargestIndex = i;
        }
    }
    swap(marks[LargestIndex],marks[SmallestIndex]);
    return 0;
}

//WAF TO PRINT ALL THE UNIQUE VALUES IN AN ARRAY
int DistinctElement(){
    int marks[]={1,2,1,2,3,5,2,6,3};
    int size = 9;
    bool shouldprint;
    for(int i = 0; i < size ; i++){
        shouldprint = true;
        for(int j = i + 1; j < size ; j++){
            if (marks[i] == marks[j]){
            shouldprint = false;
            break;
        }
        }
        if (shouldprint){
        cout << marks[i] << " ";
        }
}
    return 0;
}
//i googled and there is a better method for it but i have not yet learnt hashmaps



//WAF TO PRINT THE INTERSECTION OF 2 ARRAYS
int Intersection(){
    int marks[]={1,2,1,2,3,5,2,6,3};
    int size = 9;
    int marks2[] = {2,6,7,1,2,3};
    int size2 = 6;
    bool shouldprint;
    for(int i = 0; i < size ; i++){
        shouldprint = true;
        for(int j = i + 1; j < size ; j++){
            if (marks[i] == marks[j]){
            shouldprint = false;
            break;
        }
        }
        if (shouldprint){
        for(int j = 0 ; j < size2; j++){
            if (marks[i]==marks2[j]){
                cout << marks[i];
                break;
            }
        }
        }
}
    return 0;
}
/*i googled and they are saying that there is a better method and that is sorting both array
and then solving but i have not done sorting as of now*/ 