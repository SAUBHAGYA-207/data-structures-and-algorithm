#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k=1;
        int j;
        for(int i=0;i<n;i++){
            cin>>j;
            k*=j;
        }
        if(k){
            cout<<"ALICE"<<"\n";
        }
        else{
            cout<<"BOB"<<"\n"
        }

    }
    return 0;
}