#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,res=1;
        cin>>n;
        while(n--){
            int x;
            cin>>x;
            res=res&x;
        }
        cout<<res<<endl;
    }
    return 0;
}