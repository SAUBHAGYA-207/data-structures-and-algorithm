#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        vector<int> res(n);
        for(int i=0;i<n;i++){
            int l=0,g=0;
            for(int j=i+1;j<n;j++){
                if(vec[j]>vec[i]) g++;
                else if(vec[j]<vec[i]) l++;
                else{
                    continue;
                }
            }
            res[i]=max(l,g);
        }
        for(int i=0;i<n;i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}