#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
int stockBuySell(int arr[], int n){
    int buy = INT_MAX;
    int profit = 0;

    for(int i = 0; i < n; i++){
        buy = min(buy, arr[i]);  
        profit = max(profit, arr[i] - buy);
    }

    return profit;
}

};
int main(){
    int arr[]={10, 7, 5, 8, 11, 9};
    int size=sizeof(arr)/sizeof(arr[0]);
    Solution obj;
    cout<<obj.stockBuySell(arr,size);
    return 0;
}

