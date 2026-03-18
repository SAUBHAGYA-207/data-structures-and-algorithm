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
        int flag=1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if (__gcd(vec[i], vec[j]) <= 2){
                    flag=0;
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(!flag){
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}