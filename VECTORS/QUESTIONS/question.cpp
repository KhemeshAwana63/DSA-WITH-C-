#include <iostream>
#include <vector>
using namespace std;

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
    int size = 5;
    // SingleNumber(marks,size);
    Reverse(marks,size);
    return 0;
}