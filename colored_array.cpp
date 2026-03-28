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
        int e=0,o=0;
        for(int i=0;i<n;i++){
            if(vec[i]%2==0) e++;
            else o++;
        }
        if(e>1 && o>1 && e==o) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
        return 0;
    }