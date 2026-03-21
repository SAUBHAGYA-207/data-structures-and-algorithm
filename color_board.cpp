#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while (t--){
    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i <n; i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    unordered_map<int,int> mp;
    for (int i = 0; i <n; i++){
        for(int j=0;j<n;j++){
            mp[a[i][j]]++;
        }
    }
    int maxi=0;
    for (auto it : mp) {
        maxi = max(maxi, it.second);
    }
    if(maxi>n){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    }
    return 0;
}