#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vec(n);
        
        for(int i = 0; i < n; i++) cin >> vec[i];
        
        int count = 0;
        bool flag = true;

        for(int i = n - 2; i >= 0; i--){
            while(vec[i] >= vec[i + 1]){
                if(vec[i] == 0){
                    cout << -1 << endl;
                    flag = false;
                    break;
                }
                vec[i] /= 2;
                count++;
            }
            if(!flag) break;
        }

        if(flag) cout << count << endl;
    }
    return 0;
}