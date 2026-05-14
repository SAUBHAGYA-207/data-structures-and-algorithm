#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<" "<<0<<endl;
        else {
            long long g = __gcd(a, b);
            cout<<g<<" "<<min(a%g,(a-g)%g)<<endl;
        }
    }
    return 0;
}