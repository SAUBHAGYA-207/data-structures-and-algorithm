#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        int s=0;
        int c_1=0,c_0=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            s+=vec[i];
            if(vec[i]==1) c_1++;
            if(vec[i]==0) c_0++;
        }
        cout<<pow(2,c_0)*c_1<<endl;
        
    }
    return 0;
}