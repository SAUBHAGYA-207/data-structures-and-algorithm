#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int k=0;
        for(int i=0;i<n;i++){
        if((i%2)!=vec[i]%2){
            cout<<"NO"<<"\n";
            break;
        }
        k=i;
        }
        if(k==n-1){
            cout<<"YES"<<'\n';
        }
    }
    return 0;
}