
#include <iostream>
#include <vector>
#include <climits>
using namespace std;


//KADANE'S ALGORITHM
//LOGIC -> don't add big negative number instead initialize it with zero
int kadane(vector <int> vec , int size){
    int CurrSum = 0;
    int MaxSum = INT_MIN;
    for(int i = 0 ; i < size ; i++){
        CurrSum += vec[i];
        if (CurrSum < 0){
            CurrSum = 0;
        }
        MaxSum = max(CurrSum , MaxSum);
    }
    cout << MaxSum << endl;
    return 0;
}

//OMTIMIZED APPROACH -> SUM OF ALL POSSIBLE SUB ARRAYS USING TWO LOOPS
int Sum(vector <int> vec , int size){
    int sum;
    int mx = INT_MIN;
    for(int i = 0 ; i < size ; i++){
        sum = vec[i];
        mx = max(sum , mx);
        for(int j = i +1 ; j < size ; j++){
            sum += vec[j];
        }
        mx = max(sum , mx);
    }
    cout << mx << endl;
    return 0;
}

// BRUTE FORCE APPROACH -> PRINTING ALL POSSIBLE ARRAYS
//we are gonna use logic of str and end point
int AllArrays(vector <int> vec , int size){
    for(int st = 0; st < size ; st++){
        for(int end = st; end < size ; end++){
            for(int i = st ; i <= end ; i++ ){
                cout << vec[i] ;
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

// // BRUTE FORCE APPROACH ->GETTING THE MAXIMUM SUM
int MaxSumArray(vector <int> vec , int size){
    int sum = 0;
    int mx = INT_MIN;
    for(int st = 0; st < size ; st++){
        for(int end = st; end < size ; end++){
            sum = 0;
            for(int i = st ; i <= end ; i++ ){
                sum += vec[i];
            }
            mx = max(sum ,mx);
        }
    }
    cout << mx << endl;
    return 0;
}


int main(){
    vector <int> list = {1,2,3,4,5};
    int size = 5;
    // AllArrays(list , size);
    kadane(list , size);
    return 0;
}