#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// PRODUCT_ITSELF -> BRUTE FORCE APPROACH
int ProductItself(vector <int> vec){
    vector <int> answer = {};
    for(int i = 0 ; i < vec.size() ; i++){
        int product = 1;
        for(int j = 0 ; j < vec.size() ; j++){
            if(i == j){
                continue;;
            }
            else{
                product *= vec[j];
            }
        }
        answer.push_back(product);
    }
    for(int k = 0 ; k < answer.size() ; k++){
        cout << answer[k] << " ";
    }
    return 0;
}
// PRODUCT_ITSELF -> OPTIMIZED APPROACH


// POW(X,N) -> FIND THE POWER OF X WHEN IT IS RAISED TO N WITH TIME COMLEXITY O(log(n))
int pow(int x , int BinForm ){
    int pow = x;
    int ans = 1;
    if (BinForm < 0){
        BinForm = -BinForm; 
        x = 1/x;
    }
    while (BinForm > 0){
        if (BinForm%2 == 1){
            ans *= pow;
        }
        pow *= pow;
        BinForm >>= 1;
        }
    cout << ans << endl;
    return 0;
}


// BUY AND SELL STOCKS 
int stocks(vector <int> vec){
    int MinPrice = vec[0];
    int Currprofit;
    int MaxProfit = 0;
    for (int i = 1 ; i < vec.size(); i++){
        Currprofit = vec[i] - MinPrice;
        MaxProfit = max(MaxProfit,Currprofit);
        MinPrice = min(MinPrice,vec[i]);
    }
    cout << MaxProfit << endl;
    return 0;
}


// CONTAINER WITH MOST WATER -> BRUTE FORCE APPROACH
int Water(vector <int> vec){
    int MaxArea = 0;
    for(int i = 0 ; i < vec.size()-1;i++){
        int distance = 1;
        for(int j = i+1 ; j < vec.size() ; j++){
            MaxArea = max(((min(vec[i],vec[j]))*distance) , MaxArea);
            distance += 1;
        }
    }
    cout << MaxArea << endl;
    return 0;
}
// CONTAINER WITH MOST WATER -> OPTIMIZED APPROACH
int oWater(vector <int> vec){
    int str = 0;
    int end = vec.size()-1;
    int MaxArea = 0;
    while(str < end){
        int height = min(vec[str],vec[end]);
        int distance = end - str;
        MaxArea = max(MaxArea , height*distance);
        if(vec[str] < vec[end]){
            str++;
        }
        else{
            end--;
        }
    }
    cout << MaxArea << endl;
    return MaxArea;
}


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

int main(){
    vector <int> marks = {1,2,1,2,5};
    vector <int> pairsum = { 2,7,11,15};
    vector <int> majele = {1,2,2,1,1};
    vector <int> stock_prices = {7,1,5,3,6,4};
    vector <int> container = {1,8,6,2,5,4,8,3,7};
    vector <int> prodItself = {-1,1,0,-3,3};
    int size = 5;
    int target = 18;
    // SingleNumber(marks,size);
    // PairSum(pairsum,size,target);
    // oPairSum(pairsum , size , target);
    // pow(3 , 5);
    // stocks(stock_prices);
    // Water(container);
    // oWater(container);
    ProductItself(prodItself);
    return 0;
}