#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        vector<int> factors={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,51,53};
        for(int i : factors){
            int flag=0;
            for(int j : vec){
                if(j%i){
                    flag=1;
                    break;
                }
            }
            if(flag){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}