#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// MAJORITY ELEMENTS -> BRUTE FORCE APPROACH
int MajorityElement1(vector <int> vec , int size){ 
    for(int i = 0; i < size ; i++){
        int freq = 1;
        for(int j = i +1 ; j< size  ; j++){
            if (vec[i] == vec[j]){
                freq++;
            }
            if (freq > size/2){
                cout << vec[i] ;
                break;
            }
        }
    }
    return 0;
}
// MAJORITY ELEMENTS -> USING SORTING APPROACH
int MajorityElement2(vector <int> vec , int size){
    sort(vec.begin(), vec.end());
    int freq = 1;
    for(int i = 0 ; i < size -1 ; i++){
        if (vec[i+1]==vec[i]){
            freq++;
        }
        if (freq > size/2){
            cout << vec[i];
            break;
        }
        if (vec[i+1] != vec[i]){
            freq = 1;
        }
    }
    return 0;
}

// MAJORITY ELEMENTS -> USING MOORE'S ALGORITHM
// LOGIC -> agar ek element array me majority me hai then no matter what other elements can not
// reduce that elements frequency to zero
int MajorityElement3(vector <int> vec , int size){
    int freq = 0;
    int ans = 0;
    for (int i = 0 ; i < size ; i++){
        if (freq == 0){
            ans = vec[i];
        }
        if (vec[i] == ans){
            freq++;
        } else{
            freq--;
        }
    }
    cout << ans;
    return 0;
}

//IF THERE IS NO MAJORITY ELEMENTS THEN WE MIGHT NEED TO DO SOME MODIFICATION IN THE CODE
int MajorityElement4(vector <int> vec , int size){
    int freq = 0;
    int ans = 0;
    for (int i = 0 ; i < size ; i++){
        if (freq == 0){
            ans = vec[i];
        }
        if (vec[i] == ans){
            freq++;
        } else{
            freq--;
        }
    }
    int count = 0;
    for(int val : vec){
        if (val==ans){
            count++;
        }
        if (count > size/2){
            cout << ans;
        } else cout << -1;
    }
    return 0;
}

int main(){
    vector <int> majel = {1,2,2,1,1};
    int size = 5;
    return 0;
}