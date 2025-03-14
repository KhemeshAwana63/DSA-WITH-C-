#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//PAIR SUM -> BRUTE FORCE APPROACH
int PairSum(vector <int> vec , int size,int Target){
    for(int i = 0 ; i < size ; i++){
        for(int j = i +1 ; j < size ; j++){
            if ((vec[i]+vec[j])== Target){
                cout << vec[i] << vec[j] ;
            }
        }
    }
    return 0;
}
// PAIR SUM -> OPTIMIZED APPROACH
int oPairSum(vector <int> vec , int size, int target){
    int str = 0;
    int end = size -1;
    while(str < end){
        if((vec[str]+vec[end])== target){
            cout << vec[str] << " " << vec[end];
            break;
        }
        else if((vec[str]+vec[end]) > target){
            end--;
        }
        else {
            str++;
        }
    }
}


//FINDING THE SINGLE UNIQUE NUMBER
int SingleNumber(vector <int> vec , int size){
    int sum = vec[0];
    for(int i = 1 ; i < size  ; i++){
       sum ^= vec[i];
    }
    cout << sum << " is the single element";
    return 0;
}

//REVERSE A VECTOR
int Reverse(vector <int> vec , int size){
    int str = 0;
    int end = size -1;
    while(str < end){
        swap(vec[str],vec[end]);
        str++;
        end--;
    }
    for(int i = 0 ; i < size ; i++){
        cout << vec[i];
    }
    return 0;
}

int main(){
    vector <int> marks = {1,2,1,2,5};
    vector <int> pairsum = { 2,7,11,15};
    vector <int> majele = {1,2,2,1,1};
    int size = 5;
    int target = 18;
    // SingleNumber(marks,size);
    // Reverse(marks,size);
    // PairSum(pairsum,size,target);
    // oPairSum(pairsum , size , target);
    return 0;
}