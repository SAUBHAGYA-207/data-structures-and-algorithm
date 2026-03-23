#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, n;
        cin >> a >> b >> n;
 
        vector<long long> vec(n);
        for(int i = 0; i < n; i++) cin >> vec[i];
 
        long long total = b;
 
        for(int i = 0; i < n; i++){
            total += min(vec[i], a - 1);  
        }
 
        cout << total << endl;
    }
    return 0;
}