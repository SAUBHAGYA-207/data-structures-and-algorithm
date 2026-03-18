#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c = 0;
        cin >> n;

        vector<int> vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }

        for(int i = 0; i < n; i++){
            if(vec[i] == 2){
                c++;
            }
        }

        if(c % 2 != 0){
            cout << -1 << endl;
            continue;
        }

        int ptr = 0;
        for(int i = 0; i < n; i++){
            if(vec[i] == 2){
                ptr++;
            }
            if(ptr == c / 2){
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}