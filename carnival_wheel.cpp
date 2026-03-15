#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,a,b;
        cin>>l>>a>>b;
        int curr=-1;
        int maximum=a;
        while(curr!=a){
            int i=0;
            curr=(a+(i*b))%l;
            maximum=max(curr,a);
            i++;
        }
        cout<<curr<<"\n";

    }
    return 0;
}