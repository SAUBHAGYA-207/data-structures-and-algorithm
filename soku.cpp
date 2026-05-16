#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,x1,x2,k;
        cin >>n>>x1>>x2>>k;
        if(n<3) {cout<<0<<endl;
        break;}
        else{
            cout<<abs(x2-x1) + k<<endl;
        }
    }
    return 0;
}