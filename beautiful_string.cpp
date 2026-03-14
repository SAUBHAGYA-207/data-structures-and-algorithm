#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while (t--){
    int n; cin >> n;
    string s;
    cin>>s;
    vector<int> idx(n);
    for(int i=0;i< n;i++){
        if(s[i]=='1'){
            idx.push_back(i+1);
        }
    }
    for(int i:idx){
        cout<<i<<" ";
    }
    cout<<endl;
}
    return 0;
}